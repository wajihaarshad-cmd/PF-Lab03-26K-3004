#include<stdio.h>
int main(){
int planchoice,minutes;
float totalbill;

printf("enter plan choice (1-4):");
scanf("%d",&planchoice);

printf("enter minutes uesd:");
scanf("%d",&minutes);
switch(planchoice){
case 1:
  totalbill =500;
if(minutes>1000){
totalbill=500+(minutes-1000)*2;
}
break;
case 2:
totalbill =800;
if(minutes>2000){
totalbill=800+(minutes-2000)*2;
}
break;
case 3:
totalbill=1200;
break;
case 4:
totalbill= 1*minutes;
break;
default:
printf("invalid plan choice");
return 0;
}
printf("totalbill=%.2f",totalbill);
return 0;
}
