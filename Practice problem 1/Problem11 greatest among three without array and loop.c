#include<stdio.h>

int main(){
    int a,b,c;
    printf("A: ");
    scanf("%d",&a);
    printf("\nB: ");
    scanf("%d",&b);
    printf("\nC: ");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            printf("A is greater");
        }
        else{
           printf("C is greater");
        }
    }else{
        if(b>c){
            printf("B is greater");
        }
        else{
           printf("C is greater");
        }

    }
    printf("\n\n");
    return 0;
}
