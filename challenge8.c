#include <stdio.h>
#include <string.h>

int main(){
  
  char arr[]="ABC DE";
  int i=0;

  while (arr[i] !='\0')
  {
    if (arr[i]>='A'&&arr[i]<='Z')
    {
      arr[i]=arr[i]+32;
    }
    i++;
  }
  printf("%s",arr);
  return 0;
}
//minuscules