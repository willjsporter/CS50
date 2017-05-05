#include <stdio.h>
#include <cs50.h>

int main(void){
    printf("How high should the pyramid be?");
    int n = get_int();
    
    while(n<0||n>23){
    if(n<0){
        printf("The pyramid has to have some height! Try again!\n");
        n=get_int();
    }
    else if(n>23){
        printf("The pyramid can't be that tall! Try again!\n");
        n=get_int();}}
    
        for(int i=0; i<n; i++){
        for(int j=0;j<n-i-1; j++){
            printf(" ");}
        for(int k=0;k<i+2; k++){
            printf("#");}
            printf("\n");
        }
        
}