#include<stdio.h>

int main(){
    char arr[20];
    int i,n,d;

    printf("N: ");
    scanf("%d",&n);

    printf("\n\nEnter array values: \n");
    for(i=0;i<n;i++){
        fflush(stdin);
        scanf("%c",&arr[i]);
    }

    d = 'a' - 'A';
    for(i=0; i<n;i++){

        if(arr[i]>= 'a' && arr[i]<='z')
            arr[i] = arr[i]-d;
        else if(arr[i]>= 'A' && arr[i]<='Z')
             arr[i] = arr[i]+d;
    }

    printf("Printing the final result array:");

    for(i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
    printf("\n");

    return 0;
}
