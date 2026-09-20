#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
int arr[n];
for (int i=0; i<n; ++i){
    scanf("%d", &arr[i]);
}
int even,odd;
for(int a =0; a<n; ++a){
    if( arr[a]%2==0){
        ++even;
    }
    else{
        ++odd;
    }
}
  printf ("even: %d\n",even);
    printf ("odd: %d\n",odd);
    return 0;
}