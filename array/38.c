#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
int arr[n];
for (int i=0; i<n; ++i){
    scanf("%d", &arr[i]);
}
int sum;
for(int a =0; a<n; ++a){
    sum = sum+ arr[a];
}
printf ("%d\n",sum);
    return 0;
}














