#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    printf("What is the credit card number you want to check?\n");
    long long ccno = get_long_long();
    
    long long ccnoEnd=0;
    
    long long ccno1= ccno %10;//1
    ccnoEnd=ccnoEnd+ccno1;//1
    long long ccno2= (ccno %100 - ccnoEnd)/10;//2
    ccnoEnd=ccnoEnd+ccno2*10;//2
    long long ccno3= (ccno %1000- ccnoEnd)/100;//3
    ccnoEnd=ccnoEnd+ccno3*100;//3
    long long ccno4= (ccno %10000- ccnoEnd)/1000;//4
    ccnoEnd=ccnoEnd+ccno4*1000;//4
    long long ccno5= (ccno %100000- ccnoEnd)/10000;//5
    ccnoEnd=ccnoEnd+ccno5*10000;//5
    long long ccno6= (ccno %1000000 - ccnoEnd)/100000;//6
    ccnoEnd=ccnoEnd+ccno6*100000;//6
    long long ccno7= (ccno %10000000 - ccnoEnd)/1000000;//7
    ccnoEnd=ccnoEnd+ccno7*1000000;//7
    long long ccno8= (ccno %100000000 - ccnoEnd)/10000000;//8
    ccnoEnd=ccnoEnd+ccno8*10000000;//8
    long long ccno9= (ccno %1000000000 - ccnoEnd)/100000000;//9
    ccnoEnd=ccnoEnd+ccno9*100000000;//9
    long long ccno10= (ccno %10000000000 - ccnoEnd)/1000000000;//10
    ccnoEnd=ccnoEnd+ccno10*1000000000;//10
    long long ccno11= (ccno %100000000000 - ccnoEnd)/10000000000;//11
    ccnoEnd=ccnoEnd+ccno11*10000000000;//11
    long long ccno12= (ccno %1000000000000 - ccnoEnd)/100000000000;//12
    ccnoEnd=ccnoEnd+ccno12*100000000000;//12
    long long ccno13= (ccno %10000000000000 - ccnoEnd)/1000000000000;//13
    ccnoEnd=ccnoEnd+ccno13*1000000000000;//13
    long long ccno14= (ccno %100000000000000 - ccnoEnd)/10000000000000;//14
    ccnoEnd=ccnoEnd+ccno14*10000000000000;//14
    long long ccno15= (ccno %1000000000000000 - ccnoEnd)/100000000000000;//15
    ccnoEnd=ccnoEnd+ccno15*100000000000000;//15
    long long ccno16= (ccno %10000000000000000 - ccnoEnd)/1000000000000000;//16
    ccnoEnd=ccnoEnd+ccno16*1000000000000000;//16
    
    //printf("%lld\n",ccnoEnd);
    
    int ccd2 = ccno2*2;
    int ccd4 =ccno4*2;
    int ccd6 =ccno6*2;
    int ccd8 =ccno8*2;
    int ccd10 =ccno10*2;
    int ccd12 =ccno12*2;
    int ccd14 =ccno14*2;
    int ccd16 =ccno16*2;
    
    /*printf("%lld\n", ccd2);
    printf("%i\n", ccd4);
    printf("%i\n", ccd6);
    printf("%i\n", ccd8);
    printf("%i\n", ccd10);
    printf("%i\n", ccd12);
    printf("%i\n", ccd14);
    printf("%i\n", ccd16);*/
    
    int ccd21 = ccd2 % 10;
    int ccd22 = (ccd2-ccd21)/10;
    int ccd41 = ccd4%10;
    int ccd42 = (ccd4-ccd41)/10;
    int ccd61 = ccd6%10;
    int ccd62 = (ccd6-ccd61)/10;
    int ccd81 = ccd8%10;
    int ccd82 = (ccd8-ccd81)/10;
    int ccd101 = ccd10%10;
    int ccd102 = (ccd10-ccd101)/10;
    int ccd121 = ccd12%10;
    int ccd122 = (ccd12-ccd121)/10;
    int ccd141 = ccd14%10;
    int ccd142 = (ccd14-ccd141)/10;
    int ccd161 = ccd16%10;
    int ccd162 = (ccd16-ccd161)/10;
    
    /*printf("%i\n", ccd21);
    printf("%i\n", ccd22);
    printf("%i\n", ccd41);
    printf("%i\n", ccd42);
    printf("%i\n", ccd61);
    printf("%i\n", ccd62);
    printf("%i\n", ccd81);
    printf("%i\n", ccd82);
    printf("%i\n", ccd101);
    printf("%i\n", ccd102);
    printf("%i\n", ccd121);
    printf("%i\n", ccd122);
    printf("%i\n", ccd141);
    printf("%i\n", ccd142);
    printf("%i\n", ccd161);
    printf("%i\n", ccd162);*/
    
    int countDoubles = ccd21+ ccd22+ ccd41+ ccd42+ ccd61+ ccd62+ ccd81+ ccd82+ ccd101+ ccd102+ ccd121+ ccd122+ ccd141+ ccd142+ ccd161+ ccd162;
    int countOthers = ccno1+ccno3+ccno5+ccno7+ccno9+ccno11+ccno13+ccno15;
    int algorithmSum = countDoubles+countOthers;
    /*printf("%i\n", countDoubles);
    printf("%i\n", countOthers);
    printf("%i\n", algorithmSum);
    printf("%lld %lld %lld %lld %lld %lld %lld %lld",ccno1,ccno3,ccno5,ccno7,ccno9,ccno11,ccno13,ccno15);
    */
    
    if(algorithmSum%10==0){
        if((ccno>340000000000000&&ccno<350000000000000)||(ccno>370000000000000&&ccno<380000000000000)){
            printf("AMEX\n");
        }
        else if((ccno>4000000000000000&&ccno<5000000000000000)||(ccno>4000000000000&&ccno<5000000000000)){
            printf("VISA\n");
        }
        else if((ccno>5100000000000000&&ccno<5600000000000000)){
            printf("MASTERCARD\n");
        }
        else{
        printf("INVALID\n");
    }
    }
    else{
        printf("INVALID\n");
    }
    
}
/*American Express uses 15-digit numbers, 
MasterCard uses 16-digit numbers, and 
Visa uses 13- and 16-digit numbers.
American Express numbers all start with 34 or 37; 
MasterCard numbers all start with 51, 52, 53, 54, or 55; and 
Visa numbers all start with 4*/
