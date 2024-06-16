/*#include <stdio.h>
void printhello();
int main(){
   printhello();
  return 0;
}
void printhello(){
  printf("hello world");
}*/


//namaste bonjour

/*#include <stdio.h>
void namaste();
void bonjour();
int main(){
  char ch;
  printf("Enter i for indian and f for french");
  scanf("%c",&ch);
if(ch=='i'){
  namaste();
}
else {
  bonjour();
}
return 0;
}
  void namaste(){
    printf("namaste");
  }
void bonjour(){
  printf("bonjour");
}*/


//indirect call

/*#include <stdio.h>
void namaste();
void bonjour();
int main(){
  char ch;
  printf("Enter i for indian and f for french \n");
  scanf("%c",&ch);
  namaste();
  
return 0;
}
  void namaste(){
    printf("namaste \n");
    bonjour();
  }
void bonjour(){
  printf("bonjour \n");
}*/

// addition

/*#include <stdio.h>
int sum( int x,int y);
int main(){
  int x,y;
  printf("Enter a number");
  scanf("%d", &x);
  printf("Enter another number");
  scanf("%d", &y);
  int s=sum(x,y);
  printf("sum is %d",s);
  return 0;
}
int sum(int x,int y){
  return x+y;
}*/

//table of a number

/*#include <stdio.h>
void printTable(int n);
int main(){
  int n;
  printf("Enter the number");
  scanf("%d", &n);
  printTable(n);
  return 0;
  }
void printTable(int n){
  for(int i=1;i<=10;i++){
    printf("%d \n", i*n);
  }
}*/

//odd or even

/*#include <stdio.h>
void oddeven(int n);
int main(){
  int n;
  printf("Enter the number");
  scanf("%d", &n);
  oddeven(n);
  return 0;
}
void oddeven(int n){
  if(n%2==0){
    printf("even");
  }
  else{
    printf("odd");
  }
}*/

//   GCD
/*
#include <stdio.h>
void gcd(int a, int b);
int main(){
  int a,b;
  printf("Enter first number");
  scanf("%d", &a);
  printf("Enter second number");
  scanf("%d", &b);
  gcd(a,b);
  return 0;
}
void gcd(int a, int b){
  int result;
  for(int i=1;i<=a && i<=b;i++){
    if(a%i==0 && b%i==0){
      result=i;
    }
  }
  printf("GCD of %d and %d is %d\n", a, b, result);
}*/

// calculate price with GST

/*#include <stdio.h>
void calculatePrice(float value);
int main(){
  float value;
  printf("Enter the value of the object\n");
  scanf("%f", &value);
  calculatePrice(value);
  return 0;
}
void calculatePrice(float value){
  value = value + (0.18*value);
  printf("The value with GST is %f\n", value);
}*/

// power

/*#include <stdio.h>
#include <math.h>
void power(int a);
int main(){
  int a;
  printf("Enter the number\n");
  scanf("%d", &a);
  power(a);
  return 0;
}
void power(int a){
  int result;
  result=pow(a,2);
  printf("The square of the number is %d", result);
}*/

// Recursion

/*#include <stdio.h>
void printHW(int count);
int main(){
  int n;
  printf("Enter the number");
  scanf("%d", &n);
  printHW(n);
  return 0;
}
void printHW(int count){
  if(count==0){
    return;
  }
  printf("Hello Word\n");
  printHW(count-1);
}*/

// fatorial

// Find the error

/*#include <stdio.h>
#include <math.h>
void fact(int n);
int main(){
  printf("Fatorial is: %d", fact(5));
  return 0;
}
void fact(int n){
  if(n==1){
    return 1;
    int b = fact(n-1);
    int c = b*n;
    return c;
  }
}*/

// Convert Celsius to Fahrenheit

/*#include <stdio.h>
float convertTemp(float celsius);
int main(){
  float temp;
  printf("enter the temperature");
  scanf("%f", &temp);
float far = convertTemp(temp);
  printf("far: %f", far);
}
float convertTemp(float celsius){
  float far = celsius * (9.0/5.0)+32;
  return far;
}*/

// calculate percentage

/*#include <stdio.h>
float calPercentage(int science, int maths, int bengali);
int main(){
  int science, maths, bengali;
  printf("Enter science marks");
  scanf("%d", &science);
  printf("Enter maths marks");
  scanf("%d", &maths);
  printf("Enter bengali marks");
  scanf("%d", &bengali);
  printf("percentage is : %f" ,calPercentage(science,maths,bengali));
  return 0;
}
float calPercentage(int science, int maths, int bengali){
  return ((science + maths + bengali)/3);
}*/


//sum

/*#include <stdio.h>
#include<math.h>

int sum(int n);

int main() {
  printf("sum is : %d",sum(5));
  return 0;

}
int sum(int n)
{
  if(n == 1){
    return 1;
  }

int sumN1 = sum(n-1);
  int sumN = sumN1 + n;

  return sumN; 
}

*/

// POINTERS
/*
#include <stdio.h>
int main (){
  int age = 21;
  int *ptr = &age;
  //address 
  printf("%u\n", &age);
  printf("%u\n", ptr);
  printf("%u\n", &ptr);

  return 0;
}*/

// value
/*#include <stdio.h>
int main (){
  int age = 21;
  int *ptr = &age;
  //address 
  printf("%d\n", age);
  printf("%d\n", *ptr);
  printf("%d\n", *(&age));

  return 0;
}*/

/*#include <stdio.h>
int main(){
  int x;
  int *ptr;

  ptr = &x;
  *ptr = 0;

  printf(" x = %d\n", x);
  printf("*ptr = %d\n", *ptr);

    *ptr += 5;
  printf(" x = %d\n", x);
  printf("*ptr = %d\n", *ptr);

  (*ptr)++;
  printf(" x = %d\n", x);
  printf("*ptr = %d\n", *ptr);

   return 0;
}*/

/*#include <stdio.h>
int main(){
  int i = 5;
  int *ptr = &i;
  int **pptr = &ptr;

  printf("%d\n",**pptr);

  return 0;
}*/
// Call By Value

/*#include <stdio.h>
void square(int n);
int main(){
  int number = 4;
  square(number);
  printf("Number = %d\n", number);
  return 0;
}
void square(int n){
  n = n*n;
  printf("Square = %d\n", n);
}*/ 

// Call By Reference

/*#include <stdio.h>
void _square(int *n);
int main(){
  int number = 4;
  _square(&number);
   printf("Number = %d\n", number);
  return 0;
}
void _square(int *n){
  *n = (*n) * (*n);
  printf("Square = %d\n", *n);
}*/

// SWAP two numbers

/*#include <stdio.h>
void swap(int a, int b);
int main(){
  int x = 3, y = 5;
  swap(x,y);
  printf("x = %d & y = %d\n", x,y);
  return 0;
}
void swap(int a,int b){
  int t = a;
  a=b;
  b=t;
  printf("a = %d & b = %d\n", a,b);
  return;
}*/

//CALCULATE WITH CALL BY REFERENCE

/*
#include <stdio.h>
void work(int a, int b, int *sum, int *pro, int *avg);
int main(){
  int a = 5, b = 3;
  int sum, pro, avg;
  work(a,b, &sum, &pro, &avg);
  printf("sum = %d, pro = %d, avg = %d", sum, pro, avg);
  return 0;
}
void work(int a, int b, int *sum, int *pro, int *avg){
  *sum = a+b;
  *pro = a*b;
  *avg = (a+b)/2;
  
}*/