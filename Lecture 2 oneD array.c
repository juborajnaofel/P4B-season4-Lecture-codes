#include<stdio.h>

int main(){
    int arr1[7];
    int i,j,k;

    for(i=0; i<7;i++){
        scanf("%d",&arr1[i]);
    }

    arr1[6/2] = 90;
    k = 3;
    j = arr1[k];

    for(i=0; i<7;i++){
        printf("%d\n",arr1[i]);
    }

    return 0;
}
