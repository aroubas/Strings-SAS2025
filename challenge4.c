#include <stdio.h>
#include <string.h>

int main(){

    char arr1[10]=" ";
    char arr2[10]=" ";

    printf("entrez string numero 1:");
    scanf("%s",arr1);

    printf("entrez string numero 2:");
    scanf("%s",arr2);

    if (strcmp(arr1,arr2)==0)
    {
        printf("string numero 1 equal string numero 2 !");
    }else{
        printf("not equal!");
    }
    return 0;
}
//COMPARISON