#include<stdio.h>
int main (){
    int n,i;
    scanf ("%d",&n);
  int m=1, sum=0;
    for ( i =1; i<=n ;i++){
     m =2*i+1;
     sum = m-2*i;
    }
    printf ("%d\n",sum);
}