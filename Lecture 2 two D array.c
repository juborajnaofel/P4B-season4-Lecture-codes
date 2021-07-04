#include<stdio.h>
int main(){
    //Initializing 2Dimensional arrays
    int arr[3][4] = {78,11,22,43,84,75,26,75,82,91,100,1};
    int arr2nd[3][4] = {{90,12,32,3}, {54,5,6,77}, {98,9,10,8}}; //recommended method
    char chararr[3][3] = {'A', 'B','C','D','E','F','G','H','I'};
    int i,j;

    printf("Printing the first 2d array:\n");
    for(i = 0; i<3; i++){
        for(j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Printing the 2nd 2d array:\n");
    for(i = 0; i<3; i++){
        for(j=0;j<4;j++){
            printf("%d ",arr2nd[i][j]);
        }
        printf("\n");
    }

    printf("printing the character 2d array:\n");
    for(i = 0; i<3; i++){
        for(j=0;j<3;j++){
            printf("%d ",chararr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
