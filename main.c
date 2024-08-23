#include<stdio.h>
#include<stdlib.h>

#define grid_size 9

void generate_0_by_system(int grid[])
{
    int pos;
    do{
        pos = rand() % grid_size;
    } while (grid[pos] != 99);
    grid[pos] = 0;
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

int check_win(int grid[])
{
    //returns 1 if 1 is winner, 0 if 0 is the winner, and 9 if none of them are.
    /*
     possible win combinations:
     {0, 1, 2},  // Row 1
     {3, 4, 5},  // Row 2
     {6, 7, 8},  // Row 3
     {0, 3, 6},  // Column 1
     {1, 4, 7},  // Column 2
     {2, 5, 8},  // Column 3
     {0, 4, 8},  // Diagonal 1
     {2, 4, 6}   // Diagonal 2
    */
    //yes this giant wall of code is probably unnecessary. yes i wrote it anyways. suggestions are very much welcome.
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

//main function
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
    for (turn = 0; turn < 6; turn++)// since player can make a max of 5 moves
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
        int result = check_win(grid);
        if (result == 1)
        {
            printf("Congratulations, you win!\n");
            break;
        }

        if (turn < 5) // only 4 computer moves are possible
        {
            printf("Computer's move:\n");
            generate_0_by_system(grid);
            print_array(grid);
            result = check_win(grid);
            if (result == 0)
            {
                printf("Computer wins!\n");
                break;
            }
        }

        if(turn == 4)
            printf("It's a draw!\n");
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
