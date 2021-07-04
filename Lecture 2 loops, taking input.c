#include<stdio.h>
int main(){
    int a;
    char b;
    float c;
    int i;

    printf("Enter integer value:\n");
    scanf("%d", &a);
    fflush(stdin);
    printf("Enter character value:\n");
    scanf("%c", &b);
    printf("Enter fraction value:\n");
    scanf("%f", &c);

    printf("Output a: %d, ",a);
    printf("Output b: %c, ",b);
    printf("Output c: %f\n",c);


    //initialize, condition, iterator
    i = 0;
    while(i<6){
        printf("%d\n",i);
        i++;
    }

    printf("%d\n",i);

    //initialize, condition, iterator
    for(i=0;i<3;i++){
        printf("%d\n",i);
    }


    i=0;
    do{
        printf("%d\n",i);
        i = i+1;
    }while(i<3);


    return 0;
}
