#include<stdio.h>
int main(){
    int year;
    printf("Year =");
    scanf("%d", &year);
if((year%4==0 && year%100!=0)||(year%400==0)){
    printf("%d is a Leap Year.\n",year);
}
 else {
    printf("%d isn't a Leap Year.\n",year);
}

return 0;
 }
