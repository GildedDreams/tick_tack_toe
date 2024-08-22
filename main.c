#include<stdio.h>
#include<stdlib.h>
#define grid_size 10 

void print_array(int array[]){
    for (int i=0;i<9;i++){
        printf("%d ",array[i]);
        if(i!=0 && (i+1)%3==0 && i!=9){
            printf("\n");
        }
    }
}

void accept_ip(int grid[],int input){
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
    printf("enter a value in one of the following positions-\n");
    for (int i=1;i<grid_size;i++)
    {
        printf("%d ",i);
        if (i%3==0)
        {
            printf("\n");
        }
    }
    printf("-->");
    scanf("%d",&input);
    input -=1 ;// we use this line because array starts from 0 but user inputs are from 1 to 9
    accept_ip(grid,input);
    print_array(grid);
}
