#include<stdio.h>
int main (){
    int n,i;
    scanf ("%d",&n);
  double m=0;
    for ( i =1; i<=n ;i++){
     m+=1.0/i;
      }
    printf ("%.2lf\n",m);
}