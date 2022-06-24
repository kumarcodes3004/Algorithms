#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}

void warshal(int p[10][10],int n){
    
    for(int k=1;k<=n;k++){
          for(int i=1;i<=n;i++){
               for(int j=1;j<=n;j++){
                p[i][j]= max(p[i][j], p[i][k]&&p[k][j]);
        
    }
        
    } 
    }
}

void main(){
    int p[10][10],n,c,u,v;
    printf("\nEnter the no of rows: ");
    scanf("%d", &n);
     printf("\nEnter the no of cloumns: ");
    scanf("%d", &c);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
          printf("\nEnter the value at %d%d\t", i,j);
          scanf("%d",&p[i][j]);
        }
    }

    printf("\nMatrix of input data: \n");
     for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
          printf("%d\t", p[i][j]);
          
        }
        printf("\n");
    }
    warshal(p,n);
    printf("\nThe transitive closure is: \n");
      for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
          printf("%d\t", p[i][j]);
          
        }
        printf("\n");
    }


}
