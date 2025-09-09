#include <stdio.h>
#include <string.h>

int main(){
    char element;
    int count=0;
    int i;
    char arr[50];

    printf("entres votre string:");
    scanf("%s",arr);

    printf("entres votre element:");
    scanf(" %c",&element);
    i=0;
    while (arr[i] !='\0')
    {
        if (arr[i]== element)
        {
            count++;
        }
        i++;
    }
    printf("nombre des element est :%d",count);
    return 0;
}
//elenent