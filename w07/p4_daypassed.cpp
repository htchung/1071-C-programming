#include <stdio.h>

// return 1 if it is a leap yeaer; otherwise return 0
int leap(int year){
   if(year%400==0 || (year%4==0 && year%100!=0))
     return 1;
   else
     return 0;
}

int daysPassed(int year1, int year2){
   int leapCount = 0;
   for(int i=year1;i<=year2;i++ ){
       if(leap(i)) leapCount ++;
   }
   return (year2-year1+1)*365+leapCount;

}

int main(){
   int year1, year2;

   printf("Enter year1 and year2: ");
   scanf("%d %d", &year1, &year2);
   printf("days(%d,%d) = %d\n", year1, year2, daysPassed(year1,year2));

}

/*
Enter year1 and year2: 2018 2020
days(2018,2020) = 1096

*/
