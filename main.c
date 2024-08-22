#include<stdio.h>
#include<stdlib.h> 
void accept_ip(int grid[],int input){
    for (int i=0;i<10;i++){
        while (i==input){
            if(grid[i]=1){
                continue;
            }else{
                grid[i]=1
            }             
            
        }
    }
}
int main(){
    int grid[10];
    int input;
    printf("enter a value in one of the following positions-")
    for (int i=1;i<10;i++)
    {
        printf("%d ",i);
        if (i%3==0)
        {
            printf("\n");
        }
    }
    scanf("%d",&input);
    accept_ip(grid,input);
}
