const char PLAYER_1 = 'O';
const char PLAYER_2 = 'X';
int winningStates[8][3][2] = {{{0, 0}, {0, 1}, {0, 2}},
                              {{0, 0}, {1, 1}, {2, 2}},
                              {{0, 0}, {1, 0}, {2, 0}},
                              {{0, 1}, {1, 1}, {2, 1}},
                              {{0, 2}, {1, 2}, {2, 2}},
                              {{1, 0}, {1, 1}, {1, 2}},
                              {{2, 0}, {2, 1}, {2, 2}},
                              {{2, 0}, {1, 1}, {0, 2}}};
