#include<stdio.h>

int main(){
    int arr[20][20];
    int i,j,m,n, max, min, indexmin_i,indexmin_j, indexmax_i,indexmax_j;

    printf("M: ");
    scanf("%d",&m);
    printf("N: ");
    scanf("%d",&n);

    printf("\n\nEnter array values: \n");
    for(i=0; i<m ;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }


    indexmax_i = 0;
    indexmax_j = 0;
    indexmin_i = 0;
    indexmin_j = 0;
    max = arr[indexmax_i][indexmax_j];
    min = arr[indexmin_i][indexmin_j];

    for(i=0; i<m; i++){
       for(j=0;j<n;j++){
            if(max < arr[i][j]){
                max = arr[i][j];
                indexmax_i = i;
                indexmax_j = j;
            }
            if(min > arr[i][j]){
                min = arr[i][j];
                indexmin_i = i;
                indexmin_j = j;
            }
       }
    }
    printf("\n\n%d is min at index i=%d, j=%d\n",min, indexmin_i, indexmin_j);
    printf("%d is max at index i=%d, j=%d\n",max, indexmax_i, indexmax_j);

    printf("\n\nPrint array: \n");
    for(i=0; i<m ;i++){
        for(j=0;j<n;j++){
            if(i == indexmax_i && j == indexmax_j){
                printf("max:%d    ",arr[i][j]);
            }
            else if(i == indexmin_i && j == indexmin_j){
                printf("min:%d    ",arr[i][j]);
            }
            else{
                printf("%d      ",arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
