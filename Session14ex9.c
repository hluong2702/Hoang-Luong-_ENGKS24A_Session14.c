#include<stdio.h>
#include<string.h>
int main(){
    char string[100] = "Hello World";
    int size = strlen(string);
    char item;
    printf("Chuoi hien tai : %s \n",string);
    printf("Nhap ki tu muon xoa : ");
    scanf("%c",&item);
    for (int i = 0; i < size; i++)
    {
        if (string[i] == item)
        {
            for (int j = i; j < size; j++)
            {
                string[j] = string[j+1];
            }
            size--;
            i--;
        }
    }
    printf("Chuoi hien tai : %s \n",string);
}
