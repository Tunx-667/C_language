#include<stdio.h>
int main (){
    int n,i;
    scanf ("%d",&n);
    int m=0 , sum=1;
    for ( i =0; i<=n ;i++){
      m= 2*i+1;
      sum *=m;
    }
    printf ("%d\n",sum);
}