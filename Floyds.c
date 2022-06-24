#include<stdio.h>
#include<stdlib.h>

int m;
 int min(int a,int b){
    if(a>b)
    return b;
    else
    return a;
 }

 void flyods(int a[100][100]){
    for(int k=0;k<m;k++){
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                a[i][j]=min(a[i][j],(a[i][k]+a[k][j]));
            }
        }
    }
 

 for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
 }
 }

 void main(){
    printf("enter the order of matrix:\t");
    scanf("%d",&m);
    int a[100][100];
    printf("enter the elements of the adjancey matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    flyods(a);

 }