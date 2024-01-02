//write a program to read a programming sentement and idenfity the all possible tokens

#include <stdio.h>
#include <ctype.h>

int isOperator(char c) {
    // Check if the character is an operator
    return (c == '+' || c == '-' || c == '*' || c == '/' || c ==       '=');
}
int isSymbol(char c) {
    // Check if the character is an Symbols
    return (c == ';' || c == '{' || c == '}' || c == '[' || c ==       ']');
}

int main() {
    char c;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n') {
        if (isalnum(c) || c == '_') 
        {
            putchar(c);
        } 
        else if (c == '(' || c == ')' || isSymbol(c)) {
            // Print parentheses and semicolons on a new line
            printf("\n%c\n", c);
        } 
        else if (c == ',' || c == ' ' || isOperator(c)) {
            // Print other separators on a new line
            printf("\n%c\n", c);
        }
    }

    printf("\n");

    return 0;
}