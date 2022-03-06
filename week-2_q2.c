#include<stdio.h>
int main(){
    int n, sumodd =0, sumeven=0;
    printf("Enter 10 numbers(After entering a number press enter)");
    for(int i=0; i<10; i++){
        scanf("%d", &n);
        if(n%2==0) sumeven+=n;
        else sumodd+=n;
    }
    printf("Sum of the even numbers is %d and sum of the odd numbers is %d", sumeven, sumodd);
}