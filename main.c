// including required libraries
#include<stdio.h>
#include<stdlib.h>

#define grid_size 9

//including all header files
#include "print_array.h"
#include "generate_0_by_system.h"
#include "check_win.h"
#include "accept_ip_from_user.h"

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
