#include<stdio.h>
#include<string.h>
void hello(){
    printf("hello function\n");
}

int main(){
    int x,y,sum;
    char name = 'a';
    x = 1;
    y = 10;

    sum = x + y;
    sum +=1;

    if(x==y){
        printf("Hello\n");
        printf("Hi\n");
        x = x + 1;
    }

    printf("%d\n",x);
    return 0;
}
