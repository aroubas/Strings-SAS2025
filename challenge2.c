#include <stdio.h>
#include <string.h>


int main(){
  
    char arr[20];
    printf("enter vous string:");
    scanf("%[^\n]",arr);
    int i;
    for (i = 0; arr[i] !='\0'; i++){}
    
    printf("la longeur de string est :%d",i);
}
//LONGEUR