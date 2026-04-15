/*************************************************************************
PURPOSE: (Represent the state and initial conditions of a cannonball)
**************************************************************************/
#ifndef CANNON_H
#define CANNON_H

class CANNON {
    public:
        double pos0[2];     // *i m Init position of cannonball.
        double vel0[2];     // *i m/s Init velocity of cannonball.
        double init_speed;  // *i m/s Init barrel speed.
        double init_angle;  // *i rad Angle of cannon.

        double pos[2];      // m XY-Position.
        double vel[2];      // m/s XY-Velocity.
        double acc[2];      // m/s^2 XY-acceleration.

        double time;        // s Model time.

        int impact;         // -- Has impact occured?
        double impactTime;  // s Time of Impact.

        int cannon_default_data();
        int cannon_init();
        int cannon_analytic();
        int cannon_shutdown();
};

#endif