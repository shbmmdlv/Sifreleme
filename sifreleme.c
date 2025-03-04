#include <stdio.h>
#include <ctype.h>

void caesarEncrypt(char text[], int shift) {
    int i;
for (i = 0; text[i] != '\0'; i++) {
 char ch = text[i];

        if (isalpha(ch)) { // Sadece harfleri þifrele
            char base = isupper(ch) ? 'A' : 'a'; // Büyük/küçük harf kontrolü
            text[i] = (ch - base + shift) % 26 + base; // Kaydýrma iþlemi
        }
    }
}

void caesarDecrypt(char text[], int shift) {
    caesarEncrypt(text, 26 - shift); // Ters kaydýrma
}

int main() {
    char text[100];
    int shift;

    printf("sifrelenecek metni gir: ");
    fgets(text, sizeof(text), stdin); // Kullanýcýdan metin al

    printf("Kac karakter kaydirilsin? ");
    scanf("%d", &shift);

    caesarEncrypt(text, shift);
    printf("Sifrelenmis Metin: %s\n", text);

    caesarDecrypt(text, shift);
    printf("cozulen Metin: %s\n", text);

    return 0;
}

