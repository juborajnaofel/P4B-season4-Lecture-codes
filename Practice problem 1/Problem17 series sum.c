#include<stdio.h>
int power(int x,int p){
    int i,k=1;
    for(i=0;i<p;i++){
        k = k * x;
    }
    return k;
}

int fact(int x){
    int f =1;
    int i;
    for(i = x; i>= 1; i--){
        f = f*i;
    }
    return f;
}
int main(){
    int i,x, n;
    float res, sum = 0.0;

    printf("Enter value of X: ");
    scanf("%d", &x);
    printf("\nEnter value of N: ");
    scanf("%d", &n);


    for(i=0;i<n;i++){
        res = (float) power(x,i)/(float) fact(i);
        sum+=res;
    }
    printf("Sum of the series from (0, .... , n) is: %f\n", sum);
    printf("\n\n");

    return 0;
}
