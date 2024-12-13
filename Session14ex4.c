#include<stdio.h>
#include<string.h>

int main(){
    char text[]="abcdabde";
    char characters;
    int size = strlen(text);
    int count = 0;
    printf("Moi ban nhap vao 1 ki tu bat ki ");
    scanf("%c",&characters);

    for(int i =0;i<size;i++){
        if(text[i]== characters){
            count++;
        }
    }
    printf("so lan xuat hien cua phan tu %c trong chuoi la %d ",characters,count);
    return 0;
}
