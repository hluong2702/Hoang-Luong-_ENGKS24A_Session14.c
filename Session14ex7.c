#include<stdio.h>
#include<string.h>

int main(){
    char text[]="hfdf23@4r!";
    int size = strlen(text);
    int countCharacter = 0;
    int countCharacterText = 0;
    int countCharacterNumber= 0;

    for(int i =0;i<size;i++){
        if(text[i] >='a'&& text[i]<='z' || text[i] >='A'&& text[i]<='Z'){
            countCharacter++;
        }else if(text[i]>='0' && text[i]<='9'){
            countCharacterNumber++;
        }else{
            countCharacterText++;
        }
    }
   printf("So ki tu la chu trong chuoi la: %d\n",countCharacter);
   printf("So ki tu la so trong chuoi la: %d\n",countCharacterNumber);
   printf("So ki tu la ki tu dac biet trong chuoi la: %d\n",countCharacterText);
   
   return 0;
}