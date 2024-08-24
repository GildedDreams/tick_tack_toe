void print_array(int grid[])
{
    for (int i=0;i<grid_size;i++)
    {
        if(grid[i]== 99)
            printf("_ ");
        else
            printf("%d ", grid[i]);
        if((i+1)%3 == 0)
            printf("\n");
    }
}
