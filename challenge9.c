#include <stdio.h>
#include <string.h>

int main(){
  
  char arr[]="ABCD XEFGH XIJKLM . ";
  
  int i ;
  int j = 0;
  for (i = 0; i < sizeof(arr); i++)
  {
    if (arr[i] !=' '){
      arr[j++]=arr[i];         
    }
  }
  printf("arr:%s",arr);
  return 0;
}
//espace