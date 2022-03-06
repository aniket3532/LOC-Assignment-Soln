#include<stdio.h>
int main(){
    int n, a=0, b=1, arr[100];
    printf("Enter number of terms of fibonacci series:");
    scanf("%d", &n);
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<=n-1; i++){
      arr[i]= arr[i-1] + arr[i-2];
    }
    for(int j=0; j<n; j++){
        printf(" %d ", arr[j]);
    }

 return 0;
}