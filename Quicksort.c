#include<stdio.h>
#include<stdlib.h>
 int n;
void quicksort(int number[n],int first,int last){
    int i,j,pivot,temp;
    if(first<last){
        pivot=first;
        i=first;
        j=last;
        while(i<j){
            while(number[i]<=number[pivot] && i<last)
            i++;
            while(number[j]>number[pivot])
            j--;
            if(i<j){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;
        quicksort(number,first,j-1);
        quicksort(number,j+1,last);

    }
}

int main(){
    int i,count;
     printf("Enter the no of elemnts: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements to be sorted:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);

    }
    
        printf("Intial array:\n");
         for(int i=0;i<n;i++){
                printf("%d\t", arr[i]);
            }

    quicksort(arr,0,n-1);
       printf("\nThe sorted array is:\n");
         for(int i=0;i<n;i++){
                printf("%d\t", arr[i]);
            }


}