#include<stdio.h>
int main(){
    int n;
    printf("Enter number of * each side:");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
      printf("* ");
    }
    for(int k=2; k<n; k++){
    printf("\n*");
    for(int j=2; j<n; j++){
        printf("  ");
    } printf(" *");}
    printf("\n");
    for(int l=0; l<n; l++){
        printf("* ");
    }
}