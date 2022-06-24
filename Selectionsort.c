#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    printf("Enter the no of elemnts: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements to be sorted:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);

    }

    int min;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }

    printf("The elements after sorting are:\n");
    for(int i =0;i<n;i++){
        printf("%d\t", arr[i]);
    }
}
