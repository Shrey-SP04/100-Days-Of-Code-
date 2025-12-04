Day-1: #include <stdio.h>
void main() {
int number1, number2, sum;
printf("Enter the first number: ");
scanf("%d", &number1);
printf("Enter the second number: ");
scanf("%d", &number2);
sum = number1 + number2;
printf("The sum of %d and %d is: %d\n", number1, number2, sum);
}

Day-2 Write a program to input two numbers and display their sum, difference, product, and quotient

#include <stdio.h>
void main() {
int number1, number2;
int sum, difference, product, quotient;
printf("Enter the first number: ");
scanf("%d", &number1);
printf("Enter the second number: ");
scanf("%d", &number2);
sum = number1 + number2;
difference = number1 - number2;
product = number1 * number2;
quotient = number1 / number2;
printf("Sum: %d\n", sum);
printf("Difference: %d\n", difference);
printf("Product: %d\n", product);
printf("Quotient: %d\n", quotient);
}

Day-3 Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

void main() {
    
    int length, width, area;

    
    printf("Enter the length of the rectangle: ");
    
    scanf("%d", &length);

   
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);


    printf("The area of the rectangle is: %d", length*width);
    printf("perimeter of rectangle is: %d", 2*(length+width));
}

Day-4 Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

int main(){
float radius =7 , circumference , area ;
float pi=3.14;
circumference=2*pi*radius;
area=pi*radius*radius;
printf("Cicumference of the circle is : %f\n",circumference);
printf("Area of the circle is : %f",area);


return 0;
}

Day 5 Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){
float radius =7 , circumference , area ;
float pi=3.14;
circumference=2*pi*radius;
area=pi*radius*radius;
printf("Cicumference of the circle is : %f\n",circumference);
printf("Area of the circle is : %f",area);


return 0;
}

Day 6 Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int num1, num2, chan;

    
    printf("Enter two integers: ");
    
   
    scanf("%d %d", &num1, &num2);

   
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    
    chan = num1;   
    num1 = num2;   
    num2 = chan;   

    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}

Day 7 Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers \n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

Day 8 Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>
void main()
{
    int a, sum;
    sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &a);
    for(int i = 1; i <= a; ++i) {
        sum += i;
    }
    printf("Sum = %d", sum);
} 

Day 9 Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>

int main(){
float principal=1470,rate=3.2,time=2.5;
float simple_interest;
simple_interest=principal*rate*time/100;
printf("Simple Interest is : %f",simple_interest);
return 0;
}  

Day 10 Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter time in seconds: ");
    scanf("%d", &a);
    
    b= a / 3600;
    c = (a % 3600) / 60;
    d = a % 60;

    printf("%d:%d:%d",b,c,d);
} 
