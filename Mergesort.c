#include<stdio.h>
#include<stdlib.h>
int n;
void merge(int a[n],int l,int mid,int r){
    int i=l;
    int b[n];
    int j=mid+1;
    int k=l;
    while(i<=mid && j<=r){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
        }else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=r){
            b[k]=a[j];
            k++;
            j++;
        }
    }else{
        while(i<=mid){
            b[k]=a[i];
            k++;i++;
        }
    }
    for(k=l;k<=r;k++){
        a[k]=b[k];
    }

}
    void mergesort(int a[n],int l,int r){
        if(l<r){
            int mid=(l+r)/2;
            mergesort(a,l,mid);
            mergesort(a,mid+1,r);
            merge(a,l,mid,r);
        }
    }

   void main(){
            // int n;
            printf("give no of elements: ");
            scanf("%d", &n);
            int arr[n];
            printf("give the elmeents to be sorted:\n");
            for(int i=0;i<n;i++){
                scanf("%d", &arr[i]);
            }

        printf("Intial array:\n");
         for(int i=0;i<n;i++){
                printf("%d\t", arr[i]);
            }

            int l=0;
            int r=n-1;
            mergesort(arr,l,r);
              printf("\nThe sorted array is:\n");
         for(int i=0;i<n;i++){
                printf("%d\t", arr[i]);
            }


   } 


