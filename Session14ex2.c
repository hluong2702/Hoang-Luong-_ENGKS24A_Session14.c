#include<stdio.h>
#include<string.h>

int main(){

    char fullName[]="Hoang Van Luong";
    int size = strlen(fullName);
    for(int i =0;i< size;i++){
        printf("%c ",fullName[i]);
    }
    return 0;
}