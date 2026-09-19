#include<stdio.h>
int main (){
    int n,i;
    scanf ("%d",&n);
  int m=1;
    for ( i =1; i<=n ;i++){
     m = m*i;
    }
    printf ("%d\n",m);
}