// eat_ghost returns a boolean value if Pac-Man is able to eat the ghost.
// The function should return true only if Pac-Man has a power pellet active
// and is touching a ghost.
bool can_eat_ghost(bool power_pellet_active, bool touching_ghost) {
    return power_pellet_active && touching_ghost;
}

// score returns a boolean value if Pac-Man scored.
// The function should return true if Pac-Man is touching a power pellet or a
// dot.
bool scored(bool touching_power_pellet, bool touching_dot) {
    return touching_power_pellet || touching_dot;
}

// lost returns a boolean value if Pac-Man loses.
// The function should return true if Pac-Man is touching a ghost and
// does not have a power pellet active.
bool lost(bool power_pellet_active, bool touching_ghost) {
    return !power_pellet_active && touching_ghost;
}

// won returns a boolean value if Pac-Man wins.
// The function should return true if Pac-Man
// has eaten all of the dots and has not lost
bool won(bool has_eaten_all_dots, bool power_pellet_active,
         bool touching_ghost) {    
    return has_eaten_all_dots && !lost(power_pellet_active, touching_ghost);
}