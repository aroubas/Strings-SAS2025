#include <stdio.h>
#include <string.h>

int main(){
  
  char arr[]="abcdef";
  int i=0;

  while (arr[i] !='\0')
  {
    if (arr[i]>='a'&&arr[i]<='z')
    {
      arr[i]=arr[i]-32;
    }
    i++;
  }
  printf("%s",arr);
  return 0;
}