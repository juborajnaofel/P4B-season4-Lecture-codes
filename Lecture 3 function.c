#include<stdio.h>
#include<string.h>
char strglobal[] = "";

int sampleFunc(char [], int , char );
void funct(int x){
    if(x==1){
        return;
    }

    printf("\nHello");
}

void funct2(){

}

int main(){
    int l;
    int i,j,k;
    char strexample[] = "Hi dude!!";

    l = sampleFunc(strexample, 200, 'a');
    j = strlen(strexample);
    printf("%d\n%d", l,j);

    funct(1);


    return 0;
}

int sampleFunc(char str[], int x, char y){
    int i;
    for(i =0;str[i]!='\0';i++){
    }
    if(i%2==0){
        return i/2;
    }else{
        return i;
    }
}

