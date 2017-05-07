#include <stdio.h>
#include<ctype.h>
#include <cs50.h>
#include <string.h>

int main(void){
    //printf("What is the name you want to initialise?\n"); THIS WAS TO MAKE THE PROBLEM LOOK NICER BUT ULTIMATELY DOESN'T MEET THE REQUIREMENT
    string name = get_string(); //get the string from user input
    if(name[0]!=' ')            // is first letter a space or not?
    {
      printf("%c",toupper(name[0]));
    }
    for (int i=0; i <strlen(name)-1;i++)  //for all characters except main one
      {
        /*if (name[i]!=' '){NULL;}        //returns nothing if the character is not a space
        else {                          //if character is a space and following character is not, then return the following character. If next one is a space then ignore as we will get the data from the final space in the row
*/          if(name[i]==' '&&name[i+1]!=' '){
            printf("%c",toupper(name[i+1]));} //if it returns something, it capitalises it
            else{NULL;}                                  //didn't bother with else{NULL} as unneccessary code
    }
        
      //}
      printf("\n");
}
  //  for(int i=0;i<len(name);i++){
  //      printf ("%c\n",toupper(argv[i][0]));*/
        
    

