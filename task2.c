#include<stdio.h>
int main(){
 int people; 
 float weight;
printf ("Enter no of people and weight:"); 
scanf ("%d %f",&people, &weight);
if (weight>1000 && people>10) {
printf("deny entry due to exceeding both limits");
}
 else if(weight>1000 && people<=10) {
printf("deny entry due to overweight");
 }
 else if(weight<=1000 & people>10){
printf("deny entry due to exceeding the people limit ");
 }
 else{
printf("elevator can operate normally");
}
  return 0;
}