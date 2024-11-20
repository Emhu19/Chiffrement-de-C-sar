#include <stdio.h>
#include <string.h>

void chiffrerCesar(char *texte, int decalage) {
    for (int i = 0; texte[i] != '\0'; i++) {
        if (texte[i] >= 'a' && texte[i] <= 'z') {
            texte[i] = (texte[i] - 'a' + decalage) % 26 + 'a';
        } else if (texte[i] >= 'A' && texte[i] <= 'Z') {
            texte[i] = (texte[i] - 'A' + decalage) % 26 + 'A';
        }
    }
}

int main() {
    char texte[] = "Hello World";
    int decalage = 3;
    printf("Texte original : %s\n", texte);
    chiffrerCesar(texte, decalage);
    printf("Texte chiffré : %s\n", texte);
    return 0;
}
