#include<stdio.h>

int main(){
    int arr[20];
    int i,n, max, min, indexmin, indexmax;

    printf("N: ");
    scanf("%d",&n);

    printf("\n\nEnter array values: \n");
    for(i=0; i<n ;i++){
        scanf("%d",&arr[i]);
    }

    indexmax = 0;
    indexmin = 0;
    max = arr[indexmax];
    min = arr[indexmin];

    for(i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
            indexmax = i;
        }
        if(min > arr[i]){
            min = arr[i];
            indexmin = i;
        }
    }
    printf("%d is min at index %d\n",min, indexmin);
    printf("%d is max at index %d\n",max, indexmax);

    return 0;
}
