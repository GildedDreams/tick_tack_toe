#include<stdio.h>
#include<stdlib.h>

#define grid_size 9

void generate_0_by_system(int grid[])
{
    int pos= rand() % grid_size;
    if (grid[pos]!=99)
    {
        pos=rand() % grid_size;
    }
    else
    {
        grid[pos]=0;
    }
}

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

void main()
{
    int grid[grid_size], input, move_valid, turn;
    printf("Enter a value in one of the following positions-\n");
    for (int i=1;i<grid_size+1;i++)
    {
        printf("%d ",i);
        if (i%3==0)
        {
            printf("\n");
        }
    }
    for (int i=0;i<grid_size;i++)
        grid[i]=99; //placeholder value for non-marked squares
        for (turn = 0; turn < 5; turn++)// since player can make a max of 5 moves
        {
            // loops until a valid move is made
            do
            {
                printf("\nEnter a position (1-9): ");
                scanf("%d", &input);
                input -= 1;
                move_valid = accept_ip_from_user(grid, input);
            } while (!move_valid);

            printf("Your move:\n");
            print_array(grid);
            if (turn < 4) // only 4 computer moves are possible
            {
                printf("Computer's move:\n");
                generate_0_by_system(grid);
                print_array(grid);
            }
        }

}


/*
 * thoughts:
 * grid
 * 0 1 2
 * 3 4 5
 * 6 7 8
 *
 * the functionality to check if there are 3 0s or 1s in a row can be added using a function that checks whether the symbols are present in particular array locations.
 * for example, we could check if 1 is present in grid[0,1,2] or grid[3,4,5] or grid[2,4,6] and so on after every move, and if so, it would trigger an end to the program, showing who won
 * now sure, we would have to manually enter all possible 3-in-a-row combinations in the code, but i feel its probably the easier way to implement this.
 */
