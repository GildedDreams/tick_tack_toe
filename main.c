#include<stdio.h>
#include<stdlib.h>
#define grid_size 10 

void generate_0_by_system(int array[]){
    int pos= rand() % 9;
    if (array[pos]!=99){
        pos=rand() % 9;
    }else{
        array[pos]=0;
    }
}

void print_array(int array[]){
    for (int i=0;i<9;i++){
        printf("%d ",array[i]);
        if(i!=0 && (i+1)%3==0){
            printf("\n");
        }
    }
}

void accept_ip_from_user(int grid[],int input){
    if (grid[input] == 1) {
        printf("Position already filled.\n");
    } else {
        grid[input] = 1;
    }
}
int main(){
    int grid[10];
    int input;
    for (int i=0;i<9;i++){
        grid[i]=99;
    }
    
    for(int i=0;i<11;i++){
        if (grid[i]==99){
            printf("enter a value in one of the following positions-\n");
            for (int i=1;i<grid_size;i++)
            {
                printf("%d ",i);
                if (i%3==0)
                {
                    printf("\n");
                }
            } 
            printf("your turn: ");
            scanf("%d",&input);
            input -=1 ;// we use this line because array starts from 0 but user inputs are from 1 to 9
            accept_ip_from_user(grid,input);
            print_array(grid);
            generate_0_by_system(grid);
            printf("\nComputer's turn:\n");
            print_array(grid);
            printf("\n");
        }
    }
}
