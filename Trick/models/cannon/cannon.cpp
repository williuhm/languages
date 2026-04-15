#include <iostream>
#include <cmath>
#include <iomanip>
#include "cannon.hh"
#include "trick/exec_proto.h"
#include "trick/integrator_c_intf.h"
using namespace std;


int CANNON::cannon_default_data() {
    pos0[0] = 0.0;
    pos0[1] = 0.0;
    acc[0] = 0.0;
    acc[1] = -9.81;
    init_speed = 50.0;
    init_angle = M_PI/6;

    time = 0.0;

    impact = 0;
    impactTime = 0.0;

    return 0;
}

int CANNON::cannon_init() {
    vel0[0] = init_speed*cos(init_angle);
    vel0[1] = init_speed*sin(init_angle);

    vel[0] = vel0[0];
    vel[1] = vel0[1];

    impact = 0;
    impactTime = 0.0;

    cout << setprecision(9);

    return 0;
}

int CANNON::cannon_shutdown() {
    double t = exec_get_sim_time();
    cout << "========================================\n";
    cout << "      Cannon Ball State at Shutdown     \n";
    cout << "IMPACT: t = " << t << "\n";
    cout << "pos = [" << pos[0] << ", " << pos[1] << "]\n";
    cout << "vel = [" << vel[0] << ", " << vel[1] << "]\n";
    cout << "========================================\n";
    return 0;
}

/******************** Analytic Simulation ********************/

int CANNON::cannon_analytic() {
    acc[0] = 0.00;
    acc[1] = -9.81;
    vel[0] = vel0[0] + acc[0] * time;
    vel[1] = vel0[1] + acc[1] * time;
    pos[0] = pos0[0] + (vel0[0] + (0.5) * acc[0] * time) * time;
    pos[1] = pos0[1] + (vel0[1] + (0.5) * acc[1] * time) * time;
    if (pos[1] < 0.0) {
        impactTime = (- vel0[1] - sqrt( vel0[1] * vel0[1] - 2 * pos0[1]))/acc[1];
        pos[0] = impactTime * vel0[0];
        pos[1] = 0.0;
        vel[0] = 0.0;
        vel[1] = 0.0;
        if ( !impact ) {
            impact = 1;
            cout << "\n\n t = " << impactTime << ", pos[0] = " << pos[0] << "\n";
        }
    }
    /*
     * Increment time by the time delta associated with this job
     * Note that the 0.01 matches the frequency of this job
     * as specified in the S_define.
     */
    time += 0.01 ;
    return 0 ;
}

/******************** Numeric Simulation ********************/

int CANNON::cannon_deriv() {
    if (!impact) {
        acc[0] = 0.0;
        acc[1] = -9.81;
    } else {
        acc[0] = 0.0;
        acc[1] = 0.0;
    }
    return 0;
}

int CANNON::cannon_integ() {
    int ipass;

    load_state(
        &pos[0] ,
        &pos[1] ,
        &vel[0] ,
        &vel[1] ,
        NULL
    );

    load_deriv(
        &vel[0] ,
        &vel[1] ,
        &acc[0] ,
        &acc[1] ,
        NULL
    );

    ipass = integrate();

    unload_state(
        &pos[0] ,
        &pos[1] ,
        &vel[0] ,
        &vel[1] ,
        NULL
    );

    return ipass;
}

double CANNON::cannon_impact() {
    double tgo; /* time-to-go */
    double now; /* current integration time. */
    
    rf.error = pos[1] ;                     /* Specify the event boundary. */
    now = get_integ_time() ;                /* Get the current integration time */
    tgo = regula_falsi( now, &rf ) ;        /* Estimate remaining integration time. */ 
    if (tgo == 0.0) {                       /* If we are at the event, it's action time! */
        now = get_integ_time() ;
        reset_regula_falsi( now, &rf ) ; 
        impact = 1 ;
        impactTime = now ;
        vel[0] = 0.0 ; vel[1] = 0.0 ;
        acc[0] = 0.0 ; acc[1] = 0.0 ;
        cout << "\n\nIMPACT: t = " << impactTime << ", pos[0] = " << pos[0] << "\n\n";
    }
    return (tgo) ;
}