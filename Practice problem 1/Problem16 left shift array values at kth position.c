#include<stdio.h>

int main(){
    int i,n,k, index,j;
    int arr[20];
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("\nEnter position: ");
    scanf("%d", &k);

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    index = k-1;
    for(i=0; i<n;i++){
        if(index==i){
            for(j=i;j<n;j++){
                arr[j] = arr[j+1];
            }
            arr[j-1] = 0;
            break;
        }
    }
    printf("\n\n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    return 0;
}
