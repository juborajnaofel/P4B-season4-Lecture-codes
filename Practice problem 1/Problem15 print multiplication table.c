#include<stdio.h>

int main(){
    int i,n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0; i<=100;i++){
        printf("%d x %d = %d\n", n, i, (i*n));
    }
    printf("\n\n");

    return 0;
}
