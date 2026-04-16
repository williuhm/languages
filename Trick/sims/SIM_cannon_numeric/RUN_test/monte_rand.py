exec(open("Modified_data/cannon.dr").read())

# Enable Monte Carlo.
trick.mc_set_enabled(1)

# Run 100 randomly generated variables.
trick.mc_set_num_runs(100)

# Create a Monte Carlo Random variable.
mcvar_launch_angle = trick.MonteVarRandom("dyn.cannon.init_angle", trick.MonteVarRandom.GAUSSIAN, "rad")

# Set the random number generator seed.
mcvar_launch_angle.set_seed(1)

# Set the standard deviation for this bellcurve.
mcvar_launch_angle.set_sigma(30)

# Set the center of the bellcurve.
mcvar_launch_angle.set_mu(3.141592 / 4) # PI/4

# Set the maximum and minimum values to be generated.
mcvar_launch_angle.set_max(3.141592 / 2) # PI/2
mcvar_launch_angle.set_min(3.141592 / 12) #PI/12

# The min and max are absolute values, not relative to mu.
mcvar_launch_angle.set_min_is_relative(False)
mcvar_launch_angle.set_max_is_relative(False)

# Add the variable.
trick.mc_add_variable(mcvar_launch_angle)

# Stop Monte Carlo runs after 25 seconds of simulation time
trick.stop(25)

# Stop Monte Carlo runs if they take longer than 1 second of real time
trick.mc_set_timeout(10)