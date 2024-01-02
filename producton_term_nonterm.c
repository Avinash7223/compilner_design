//write aa program to read vaild production identify all terminalsand nonTerminals in two different strings .(no duplicate)

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isNonTerminal(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

bool isTerminal(char ch) {
    return (ch == '+' || ch == '*' || ch == '-' || (ch >= 'a' && ch <= 'z'));
}

void identifyTerminalsNonTerminals(char* production) {
    int len = strlen(production);
    bool visited[256] = {false};

    int nonTerminalsCount = 0, terminalsCount = 0;
    char nonTerminals[50], terminals[6];

    for (int i = 0; i < len; i++) {
        char ch = production[i];
        if (!visited[ch]) {
            visited[ch] = true;
            if (isNonTerminal(ch)) {
                nonTerminals[nonTerminalsCount++] = ch;
            } else if (isTerminal(ch)) {
                terminals[terminalsCount++] = ch;
            }
        }
    }

    // Displaying the non-terminals
    printf("Non-Terminals: ");
    for (int i = 0; i < nonTerminalsCount; i++) {
        printf("%c ", nonTerminals[i]);
    }
    printf("\n");

    // Displaying the terminals
    printf("Terminals: ");
    for (int i = 0; i < terminalsCount; i++) {
        printf("%c ", terminals[i]);
    }
    printf("\n");
}

int main() {
    char production[100];

    printf("Enter a valid production in the form of a string: ");
    scanf("%s", production);

    identifyTerminalsNonTerminals(production);

    return 0;
}
