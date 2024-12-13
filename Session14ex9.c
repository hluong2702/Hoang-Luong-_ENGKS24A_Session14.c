#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world, o";
    char charToRemove;
    printf("Nhập ký tự cần xóa: ");
    scanf("%c", &charToRemove);
    
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != charToRemove) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
    
    printf("Chuỗi sau khi xóa: %s\n", str);
    
    return 0;
}