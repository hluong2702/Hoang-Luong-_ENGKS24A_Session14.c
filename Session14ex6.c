#include<stdio.h>
#include<string.h>

int main(){
    char text[]="huug97y8tu";
    int size = strlen(text);
    int countCharacter = 0;

    for(int i =0;i<size;i++){
        if(text[i] >='a'&& text[i]<='z' || text[i] >='A'&& text[i]<='Z'){
            countCharacter++;
    }
    }
   printf("So ki tu la chu trong chuoi la: %d\n",countCharacter);
   
   return 0;
}