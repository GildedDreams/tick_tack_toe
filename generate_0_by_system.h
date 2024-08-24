void generate_0_by_system(int grid[])
{
    int pos;
    do{
        pos = rand() % grid_size;
    } while (grid[pos] != 99);
    grid[pos] = 0;
}
