#include<stdio.h>
#include<string.h>

void arr(){
    char fullName[] ="Hoang Duy Hoang";
    int size = strlen(fullName);
    for(int i = size;i>=0;i--){
        printf("%c",fullName[i]);
    }
}

int main(){
    arr();
    return 0;
}

