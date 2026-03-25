#include <stdio.h>
#include <stdlib.h>
void encrypt(char text[],int key){
    for (int i =0; text[i] !='\0';i++){
        if(text[i]>='a' && text[i]<='z')
            text[i] = (text[i]-'a'+key)%26 +'a';
        else if(text[i]>='A' && text[i]<='Z')
            text[i] = (text[i]-'A'+key)%26 +'A';
    }
}
void decrypt(char text[],int key){
    for (int i =0; text[i] !='\0';i++){
        if(text[i]>='a' && text[i]<='z')
            text[i] = (text[i]-'a'-key+26)%26 +'a';
        else if(text[i]>='A' && text[i]<='Z')
            text[i] = (text[i]-'A'-key+26)%26 +'A';
    }
}

int main(){
    char text[100];
    int key,choice;
    printf("Encryption tool\n");
    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    printf("Enter the text: ");
    scanf(" %[^\n]s",text);

    printf("Enter the key: ");
    scanf("%d",&key);

    if(choice == 1){
        encrypt(text,key);
        printf("Encrypted text: %s\n",text);    

    }else if(choice == 2){
        decrypt(text,key);
        printf("Decrypted text: %s\n",text);
    }else{
        printf("Invalid choice\n");
    }
    return 0;

}