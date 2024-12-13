#include<stdio.h>
#include<string.h>

int main(){
   char fullName[100];
   printf("Moi ban nhap vao ten cua minh ");
   fgets(fullName,100,stdin);

   int size = strlen(fullName);
   printf(" do dai ten %d",size);

   return 0;
}