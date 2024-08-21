#include<stdio.h>
#include<stdlib.h> 
void accept_ip(int grid[],int input){
    for (int i=0;i<10;i++){
        while (i==input){             
            if(i==1){
                grid[0][1]=0;
            }
            else if(i==2){
                grid[0][2]=0;
            }
            else if(i==3){
                grid[0][3]=0;
            }
            else if(i==4){
                grid[1][1]=0;
            }
            else if(i==5){
                grid[1][2]=0;
            }
            else if(i==6){
                grid[1][3]=0;
            }
            else if(i==7){
                grid[2][1]=0;
            }
            else if(i==8){
                grid[2][2]=0;
            }
            else if(i==9){
                grid[2][3]=0;
            } 
        }
    }
}
int main(){
    int grid[2][2];
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
