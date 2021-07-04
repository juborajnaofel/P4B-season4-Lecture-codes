#include<stdio.h>

int main(){
    char str1[] = "Juboraj Naofel";
    char str2[255] = "JuborajNaofel";
    char str3[] = {'J','u','b','o','r','a','j','N','a','o','f','e','l','\0'};
    char str4[20] = {'J','u','b','o','r','a','j','N','a','o','f','e','l','\0'};
    char str5[30];

    scanf("%s",str5);


    printf("Printing string1: %s\n",str1);
    printf("Printing string2: %s\n",str2);
    printf("Printing string3: %s\n",str3);
    printf("Printing string4: %s\n",str4);
    printf("Printing string5: %s\n",str5);
    return 0;
}
