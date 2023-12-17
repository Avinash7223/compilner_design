// write a  "c" program to read a programming and recognixe 1st  occurecne of
// the token and classify the token.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void res_classification(char res[]) 
{
    if (strcmp(res, "int") == 0 || strcmp(res, "float") == 0 ||           strcmp(res, "for") == 0 || 
        strcmp(res, "do") == 0 || strcmp(res, "while") == 0               ||strcmp(res, "break") == 0)
    {
        printf("Keyword\n");
    }  
    else if (isdigit(res[0])) 
    {
        printf("Constant\n");
    } 
    else if ((res[0] >= 'a' && res[0] <= 'z') ||
             (res[0] >= 'A' && res[0] <= 'Z')) 
    {
        printf("Variable\n");
    }
    else if (strcmp(res, "+") == 0 || strcmp(res, "-") == 0 ||             strcmp(res, "*") == 0 || 
          strcmp(res, "/") == 0 || strcmp(res, "<") == 0                   ||strcmp(res, ">") == 0 ||  strcmp(res, "=") == 0)
    {
        printf("operator\n");
    }
}
int main() {
  char str[20];
  int i = 0;
  char res[20] = "";
  size_t leng = strlen(str);

  printf("Enter an identifier: ");
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

  res_classification(res);
}