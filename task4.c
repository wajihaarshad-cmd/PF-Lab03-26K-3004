#include<stdio.h>
int main(){
    int membership_type, slot;
    float fee,discount,monthlyfee;
    printf("1=student,2=regular,3=seniorcitizen,1=morning,2=evening");
    printf("\nEnter membershiptype and slot");
    scanf("%d %d",&membership_type, &slot);
    switch(membership_type){
        case 1:
        fee=2000;
        break;
        case 2:
        fee=3500;
        break;
        case 3:
        fee=2500;
        break;
        default:
        printf("invalid membership type");
        return 0;
    } if (slot==1){
        discount=fee*0.15;
    } else if(slot==2){
        discount=0.00;
    }  else {
        printf("invalid slot");
        return 0;
    } 
      monthlyfee=fee-discount;
      printf("monthlyfee=%.2f",monthlyfee);
      return 0;
}