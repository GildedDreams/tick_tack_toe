int check_win(int grid[])
{
    //returns 1 if 1 is winner, 0 if 0 is the winner, and 9 if none of them are.
    /*
     *    possible win combinations:
     *    {0, 1, 2},  // Row 1
     *    {3, 4, 5},  // Row 2
     *    {6, 7, 8},  // Row 3
     *    {0, 3, 6},  // Column 1
     *    {1, 4, 7},  // Column 2
     *    {2, 5, 8},  // Column 3
     *    {0, 4, 8},  // Diagonal 1
     *    {2, 4, 6}   // Diagonal 2
     */
    if (grid[0] == grid[1] && grid[1] == grid[2] && grid[0] != 99)
    {
        if (grid[0] == 1)
            return 1;
        else if (grid[0] == 0)
            return 0;
    }
    if (grid[3] == grid[4] && grid[4] == grid[5] && grid[3] != 99)
    {
        if (grid[3] == 1)
            return 1;
        else if (grid[3] == 0)
            return 0;
    }
    if (grid[6] == grid[7] && grid[7] == grid[8] && grid[6] != 99)
    {
        if (grid[6] == 1)
            return 1;
        else if (grid[6] == 0)
            return 0;
    }
    if (grid[0] == grid[3] && grid[3] == grid[6] && grid[0] != 99)
    {
        if (grid[0] == 1)
            return 1;
        else if (grid[0] == 0)
            return 0;
    }
    if (grid[1] == grid[4] && grid[4] == grid[7] && grid[1] != 99)
    {
        if (grid[1] == 1)
            return 1;
        else if (grid[1] == 0)
            return 0;
    }
    if (grid[2] == grid[5] && grid[5] == grid[8] && grid[2] != 99)
    {
        if (grid[2] == 1)
            return 1;
        else if (grid[2] == 0)
            return 0;
    }
    if (grid[0] == grid[4] && grid[4] == grid[8] && grid[0] != 99)
    {
        if (grid[0] == 1)
            return 1;
        else if (grid[0] == 0)
            return 0;
    }
    if (grid[2] == grid[4] && grid[4] == grid[6] && grid[2] != 99)
    {
        if (grid[2] == 1)
            return 1;
        else if (grid[2] == 0)
            return 0;
    }
    return -1; //if no winner

}
