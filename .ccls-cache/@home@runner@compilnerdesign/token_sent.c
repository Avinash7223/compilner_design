// write a c program to recgince the 1st occurance of a token in the sentence.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char str[20];
  int i = 0;
  char res[20] = "";
  size_t leng = strlen(str);

  printf("Enter an sentences: ");
  scanf("%s", str);

  for (i = 0; str[i] != '\0'; i++) {
    if (isalnum(str[i])) {
      if (isdigit(str[0])) {
        printf("Not a token\n");
        return 0;
        break;
      }
    }
    
    if (isalpha(str[i])) {
      res[i] = str[i];

    } else if (isdigit(str[i])) {
      res[i] = str[i];
    } else {
      break;
    }
  }
  printf("The token is:%s\n", res);
  return 0;
}