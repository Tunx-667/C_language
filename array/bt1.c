#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
int arr[n];
for (int i=0; i<n; ++i){
    scanf("%d", &arr[i]);
}
for(int a =n-1; a>=0; a--){
printf ("%d ",arr[a]);
}
    return 0;
}