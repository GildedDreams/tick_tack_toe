int accept_ip_from_user(int grid[],int input)
{
    if (grid[input] == 1 || grid[input] == 0)
    {
        printf("Position already filled, try again\n");
        return 0;
    }
    if (input<0 || input>=grid_size)
    {
        printf("Invalid input, please enter a number between 1 and 9\n");
        return 0;
    }
    else
    {
        grid[input] = 1;
        return 1;
    }

}
