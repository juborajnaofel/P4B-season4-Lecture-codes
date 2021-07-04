#include<stdio.h>

int main(){
    int i,j,n,k,l;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        if(i%2==0){
            k = 1;
            l = 0;
        }
        else{
            l =1;
            k = 0;
        }
        for(j=0;j<=i;j++){
            if(j%2==0)
                printf("%d", k);
            else
                printf("%d", l);

        }
        printf("\n");
    }

    return 0;
}
