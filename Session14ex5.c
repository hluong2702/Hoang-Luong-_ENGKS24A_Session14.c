#include<stdio.h>
#include<string.h>

void str(){
    char str[100];
    int count=0;
    printf("Moi ban nhap vao 1 chuoi ");
    fgets(str, 100, stdin);
    int size = strlen(str);
    for(int i = 0;i<size;i++){
        if(str[i] ==' '){
            count++;
        }
    }
    printf("so tu trong chuoi la %d ",count +1);
}
int main(){
    str();
    return 0;
}