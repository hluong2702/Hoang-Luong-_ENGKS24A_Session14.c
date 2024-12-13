#include <stdio.h>
#include <string.h>
int main() {
    char string[100] = "Hello World";
    int count[256] = {0};
    for (int i = 0; i < strlen(string); i++) {
        count[string[i]]++;
    }
    printf("So lan xuat hien cua cac ki tu:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) { 
            printf("%c: %d\n", i, count[i]);
        }
    }
}