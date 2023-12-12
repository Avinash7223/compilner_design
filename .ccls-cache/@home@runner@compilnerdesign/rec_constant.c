// write a c program to recgince an constant.

#include <ctype.h>
#include <stdio.h>

int main() {
  char str[20];
  int i = 0;

  printf("Enter an integer constant: ");
  scanf("%s", str);

  if (isdigit(str[0])) {

    for (i = 0; str[i] != '\0'; i++) {
      if (isdigit(str[i])) {
        continue;
      } else {
        printf("It is not a constant.\n");
        return 0;
        break;
      }
    }
    printf("It is constant");
  } else {
    printf("It is not a constant.\n");
  }

  return 0;
}