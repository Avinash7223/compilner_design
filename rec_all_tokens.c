// write a program to read a programming sentement and idenfity the all possible
// tokens and its token(id,value)

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void isAlphet(char *str) {
  if (strcmp(str, "int") == 0 || strcmp(str, "float") == 0 ||
      strcmp(str, "for") == 0 || strcmp(str, "do") == 0 ||
      strcmp(str, "while") == 0 || strcmp(str, "break") == 0 ||
      strcmp(str, "if") == 0 || strcmp(str, "else") == 0 ||
      strcmp(str, "continue") == 0) {
    printf("<KWD,%s >\n", (str));
  } else if (isdigit(str[0])) {
    printf("<CONST, %s >\n", (str));
  } else if ((isalpha(str[0]) || str[0] == '_')) {
    printf("<ID,%s >\n", (str));
  }
}

int isOperator(char c) {
  return (c == '+' || c == '-' || c == '*' || c == '/' || c == '<' ||
          c == '>' || c == '=' || c == '&' || c == '|');
}

int isSymbol(char c) {
  return (c == ';' || c == '{' || c == '}' || c == '[' || c == ']' || c == ',');
}

int main() {
  char input[100];
  char word[100];
  int wordIndex = 0;

  printf("Enter a sentence: ");

  while (1) {
    char c = getchar();

    if (c == ' ' || c == '\t' || c == '\n' || c == '\0' || isOperator(c) ||
        isSymbol(c) || c == '(' || c == ')') {
      if (wordIndex > 0) {
        word[wordIndex] = '\0';
        isAlphet(word);
        wordIndex = 0;
      }
      if (c == '(' || c == ')' || isSymbol(c)) {
        printf("<SYMB,%c >\n", c);
      } else if (isOperator(c)) {
        printf("<OPE,%c >\n", c);
      }
    } else {
      word[wordIndex++] = c;
    }
    if (c == '\n') {
      break;
    }
  }
  return 0;
}
