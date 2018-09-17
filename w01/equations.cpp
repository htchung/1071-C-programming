#include <stdio.h>
#include <math.h>

int main(){
  int a, b, c; 
  int d;
  double x1, x2;
  printf("Enter a b c: ");
  scanf("%d %d %d", &a, &b, &c);
  d = b*b - 4*a*c;
  if(d >= 0){
  	x1 = (-b+(sqrt(d)))/(2*a);
  	x2 = (-b-(sqrt(d)))/(2*a);
  	printf("For equation %d x^2 %d x + %d =0, two roots are\n", a, b, c);
  	printf("x1 = %.1f\n",x1);
  	printf("x2 = %.1f\n",x2);
  }else{
  	printf("No real roots\n");
  }
  
}

/*
Enter a b c: 1 -2 1
For equation 1 x^2 -2 x + 1 =0, two roots are
x1 = 1.0
x2 = 1.0
*/

