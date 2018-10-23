#include <stdio.h>

int gcd(int a, int b){
   int ans=1;
   for(int i=2;i<=a;i++){
      if(a%i==0 && b%i==0)
         ans = i;
   }
   return ans;
}

int rgcd(int a, int b){
  if(a==0) return b;
  else
    return rgcd(b%a, a);
}

int main(){
    printf("rgcd(48,126) = %d\n",rgcd(48,126));
    printf("gcd(48,126) = %d\n\n",gcd(48,126));

    printf("rgcd(48,128) = %d\n",rgcd(48,128));
    printf("gcd(48,128) = %d\n\n",gcd(48,128));

    printf("rgcd(48,144) = %d\n",rgcd(48,144));
    printf("gcd(48,144) = %d\n\n",gcd(48,144));

    printf("rgcd(48,48) = %d\n",rgcd(48,48));
    printf("gcd(48,48) = %d\n\n",gcd(48,48));
}

/*
Fibanacci series

0 1 1 2 3 5 8 13 21 34 55 ...


fib(0) = 0
fib(1) = 1
fib(n) = fib(n-1) + fib(n-2), n>=2
*/
