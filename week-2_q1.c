#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[50], str[100];
    printf("Enter two strings:");
    gets(str1); gets(str2);
    strcat(str1, str2);
    for(int i=strlen(str1)-1, j = 0; i>=0, j<strlen(str1); i--, j++){
        str[j]=str1[i];

    }
    puts(str);


}