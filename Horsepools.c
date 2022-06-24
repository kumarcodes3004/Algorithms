#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 500

int t[MAX];

void shiftable(char p[]){
    int m;
    m=strlen(p);
    for(int i=0;i<MAX;i++){
    t[i]=m;
    }
    for(int j=0;j<m-1;j++){
    t[p[j]]=m-1-j;
    }
}

int horspool(char src[30], char p[30]){
    int k,m,n;
    n=strlen(src);
    m=strlen(p);
    printf("\n The length of the text= %d", n);
    printf("\n The length of the pattern= %d", m);
    int i=m-1;
    while(i<n){
        k=0;
        while((k<m)&&(p[m-1-k])==src[i-k])
            k++;
        if(k==m){
        return i-m+1;
        }else{
        i += t[src[i]];
        }
        
    }
    return -1;
}

void main(){
    char src[100],p[100];
    // int pos;
    printf("enter the text:\n");
    gets(src);
    printf("enter the substring:\n");
    gets(p);
    shiftable(p);
    int pos=horspool(src,p);
    if(pos>=0)
    printf("\nThe substring was found starting from %d", pos+1);
    else
    printf("not found\n");
}

