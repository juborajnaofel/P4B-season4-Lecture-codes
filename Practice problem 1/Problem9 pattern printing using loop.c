#include<stdio.h>

int main(){
    int i,j,n,k;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<(n-i-1);j++)
            printf(" ");
        for(j=0;j<=i+i;j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
