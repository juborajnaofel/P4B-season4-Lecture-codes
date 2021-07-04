#include<stdio.h>
#include<string.h>

int main(){
    char str1[50] = "Juboraj ";
    char str2[20] = "Naofel";
    char str3[50] = "";
    char str4[20] = "Naofel";
    int l,x;

    //strcat(dest,src) example
    printf("Printing string1: %s\n",str1);
    strcat(str1,str2);
    strcat(str1,str3);
    printf("Printing string1: %s\n",str1);
    printf("Printing string2: %s\n",str2);

    printf("\n\n=====================================================\n\n");

    //strcpy(dest,src) example
    printf("Printing string3: %s\n",str3);
    printf("Printing string4: %s\n",str4);
    strcpy(str3,str4);
    printf("Printing string3: %s\n",str3);
    printf("Printing string4: %s\n",str4);

    printf("\n\n=====================================================\n\n");

    //strlen()
    l = strlen(str3);
    printf("length of string3: %d\n",l);

    printf("\n\n=====================================================\n\n");
    printf("strcmp Example:\n");

    printf("Printing string1: %s\n",str1);
    printf("Printing string2: %s\n",str2);

    x = strcmp(str1,str1);
    printf("%d \n", x);

    x = strcmp(str1,str2);
    printf("%d \n", x);

    x = strcmp(str2,str1);
    printf("%d \n", x);

    printf("\n\n=====================================================\n\n");

    return 0;
}
