#include <stdio.h>
#include <ctype.h>

void caesarEncrypt(char text[], int shift) {
    int i;
for (i = 0; text[i] != '\0'; i++) {
 char ch = text[i];

        if (isalpha(ch)) { // Sadece harfleri �ifrele
            char base = isupper(ch) ? 'A' : 'a'; // B�y�k/k���k harf kontrol�
            text[i] = (ch - base + shift) % 26 + base; // Kayd�rma i�lemi
        }
    }
}

void caesarDecrypt(char text[], int shift) {
    caesarEncrypt(text, 26 - shift); // Ters kayd�rma
}

int main() {
    char text[100];
    int shift;

    printf("sifrelenecek metni gir: ");
    fgets(text, sizeof(text), stdin); // Kullan�c�dan metin al

    printf("Kac karakter kaydirilsin? ");
    scanf("%d", &shift);

    caesarEncrypt(text, shift);
    printf("Sifrelenmis Metin: %s\n", text);

    caesarDecrypt(text, shift);
    printf("cozulen Metin: %s\n", text);

    return 0;
}

