#include <stdio.h>
#include <string.h>

#define MAX_STRING_KEN 100


void commonSub(char *sub)
{
  int i = 0, j = 0, k = 0, maxpos = -1, maxlen = 0;
  char str1[MAX_STRING_KEN] = "asdfghjkl";
  char str2[MAX_STRING_KEN] = "sdjkl";

  for (i = 0; i < strlen(str1); i++)
  {
    for (j = 0; j < strlen(str2); j++)
    {
      
    }
  }
}

main
{
    printf("for test");
    char sub[MAX_STRING_KEN] = {0};

    commonSub(sub);
    
    printf("\n sub string is : %s", sub);
}
