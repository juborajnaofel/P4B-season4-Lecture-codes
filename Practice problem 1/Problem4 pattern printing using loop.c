#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<=i;j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
