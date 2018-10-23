#include <stdio.h>

int sum(int n){
  if(n==1) return 1;
  else
    return sum(n-1)+n;
}

int sumodd1(int n){
  if(n==1) return 1;
  else
    return sumodd1(n-1)+(2*n-1);
}

int sumodd2(int n){
  if(n==1) return 1;
  else
    return sumodd2(n-2)+n;
}

int main(){
    int n=9;
    printf("sumodd1(%d) = %d\n", n, sumodd1(n));
    printf("sumodd2(%d) = %d\n", n, sumodd2(n));

}

/*
//n is odd
sum(n) = sum(n-1) + n  (recursive step)
sum(1) = 1             (bqsic step)

sumodd1(n) = 1+3+5+...+(2n-3)+(2n-1)
sumodd1(n) = sumodd1(n-1)+(2n-1)
sumodd1(1) = 1;

sumodd2(n) = 1+3+5+...+(n-2)+n  // n is odd
sumodd2(n) = sumodd2(n-2)+n;
sumodd2(1) = 1

Enter n: 5
sumodd1(5) = 25;
sumodd2(5) = 9;

Enter n: 9
sumodd1(9) = 81;
sumodd2(9) = 25;
*/
