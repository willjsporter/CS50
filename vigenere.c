#include <stdio.h>
#include<ctype.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[]){
    if (argc ==2){                              //only returns output if there is only the programme called with one single keyword
        
        bool isAlpha = true;
        for(int j=0; j<strlen(argv[1]);j++)
        {
            if((argv[1][j]>='a'&&argv[1][j]<='z')||(argv[1][j]>='A'&&argv[1][j]<='Z'))
            {continue;}
            else {isAlpha = false; break;}
        }
        
        if(isAlpha){
        printf("plaintext: ");                  //asks question to user to deliver prompt
        string encrypCode = get_string();       //gets user phrase to encode
        printf("ciphertext: ");               //asks question to user to deliver prompt
        
        for(int j=0,i=0; i<strlen(encrypCode); i++){    //iterates over the individual characters of encrypCode
            
            if(encrypCode[i]>='a'&& encrypCode[i]<='z')
            {
                char intCharSm = 'a'+(encrypCode[i]+tolower(argv[1][j%strlen(argv[1])])-'a'-'a')%26;  //make a character for each letter of the code an adjusted entry based on the codeword
                printf("%c", intCharSm); //print that char for each i
                j++;
            } 
            
            else if(encrypCode[i]>='A'&&encrypCode[i]<='Z')
            {
                char intCharCap = 'A'+(encrypCode[i]+toupper(argv[1][j%strlen(argv[1])])-'A'-'A')%26;
                printf("%c", intCharCap); //print that char for each i
                j++;
            }
            
            else {printf("%c", encrypCode[i]);} //keep all other characters unchanged
        }
            printf("\n");
            return 0;
        }
        else{
            printf("Usage: ./vigenere k");
            return 1;}
            }
            
    else if(argc==1) {
            printf("Missing command line argument");
            return 1;
            }
    else
            {
            printf("Too many command line arguments");
            return 1;
            }
}
