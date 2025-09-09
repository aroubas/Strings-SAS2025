#include <stdio.h>
#include <string.h>

int main(){
  
  char arr[]="abcd";
  int siz = sizeof(arr)/sizeof(arr[0]);

  for (int i = siz; i >= 0; i--)
  {
    printf("%c",arr[i]);
  }
return 0;
}