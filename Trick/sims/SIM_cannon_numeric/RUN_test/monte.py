exec(open("Modified_data/cannon.dr").read())

# Enable Monte Carlo.
trick.mc_set_enabled(1)

# Sets the number of runs to perform to 15. Trick will not exceed the number of values in an input file.
trick.mc_set_num_runs(15)

# Create and add a new Monte Carlo File variable to the simulation.
mcvar_launch_angle = trick.MonteVarFile("dyn.cannon.init_angle", "angle_value_list", 1, "rad") 
trick.mc_add_variable(mcvar_launch_angle)

# Stop Monte Carlo runs after 25 seconds of simulation time
trick.stop(25)

# Stop Monte Carlo runs if they take longer than 1 second of real time
trick.mc_set_timeout(10)