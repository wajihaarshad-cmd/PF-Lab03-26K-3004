#include<stdio.h>
int main(){
int account_type;
float balance,annualinterest, interest;
printf("\n1=savings,2=current,3=fixeddeposit");
printf("\nEnter account_type and balance");
scanf("%d %f",&account_type,&balance);
switch(account_type){
    case 1:
    if(balance>100000){
        interest=0.04;
    }else{
        interest=0.02;
    }
    break;
    case 2:
    interest =0.0;
    break;
    case 3:
    interest=0.08;
    break;
    default:
    printf("invalid account_type");
    return 0;
}
annualinterest=interest*balance;
printf("Your annual interest earned=%.2f",annualinterest);
return 0;
}
