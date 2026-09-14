#include<stdio.h>
int main (){
float entrytestscore, fscpercentage,combinedscore;
printf("\nenter your test score and fsc percentage:");
scanf ("%f %f", &entrytestscore, &fscpercentage);
combinedscore=(entrytestscore*0.50)+(fscpercentage*0.50);
 printf ("combined score=%f \n",combinedscore);
if (combinedscore>=80) {
 printf("you got admission in computer science");
} 
 else if(combinedscore>=65) {
printf ("you got admisssion in softwar eengineering");
}
 else if(combinedscore>=50 ) { 
 printf("you got admission in information technoloy");
}
 else {
 printf("you got rejected");
}
   return 0;
}















