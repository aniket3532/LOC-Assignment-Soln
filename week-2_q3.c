#include<stdio.h>
int main(){
 int n, s=0;
 int arr[20];
 printf("Enter an integer:");
 scanf("%d", &n);
 for(int i=0; n>0; i++){
 int d = n%10;
 n/=10;
 s+=1;
 arr[i]= d;
 }
 printf("%d", arr[0]);
 for(int j=s-2; j>0; j--){
     printf("%d", arr[j]);
 }printf("%d", arr[s-1]);
 
} 