#include <cs50.h>
#include <stdio.h>



int main(void){
    
    int minutes;
    printf("How long do you shower for (in minutes)?");
    minutes = get_int();
    while(minutes<=0){if(minutes<0){
        printf("I don't think you can shower for a negative amount of time! Please can you tell me the real answer?\n");
        minutes = get_int();}
    else if(minutes==0) {
        printf("You may be conserving water but there is a balance to be struck!\n");
        minutes = get_int();
    }}

    printf("Your shower is wasting water! To the tune of %i bottles of water!\n",minutes * 12);}
    



