#include<stdio.h>
#include<string.h>
int main(){
    int x,y,sum;
    char name = 'a';

    x = 1;
    y = 10;

    sum = x + y;

    if(x<y){
      printf("Hello\n");
      printf("Hi\n");
      x = x + 1;
    }

    printf("%d\n",x);
    printf("Hello world:\n");
    printf("Value of sum = x + y:%d\nValue of name:%c \n",sum,name);
    return 0;
}
