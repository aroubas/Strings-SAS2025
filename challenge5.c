#include <stdio.h>
#include <string.h>

int main(){
  
  char arr[]="abcd";
  
  for (int i = strlen(arr); i >= 0; i--)
  {
    printf("%c",arr[i]);
  }

return 0;
}
//INVERSION