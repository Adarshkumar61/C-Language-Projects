#include <stdio.h>

int main() {
//     int num1, num2;


// printf("enter first number: ");
// scanf("%d\n", &num1);
// printf("enter second number: ");
// scanf("%d\n", &num2);
// if(num1>num2) {
//     printf("greater");

// }
// else {
//     printf("smaller");
// }




//write a program associated with  a variable 

// int qty = 5;
// printf("adress of qty = %u\n", &qty);
// printf("vlaue of qty = %d\n", qty);
// printf("vlaue of qty = %d\n", *(&qty));






// int num = 12;
// char word = 'a';
// float dec = 5.77;

// printf("%d\n", num);
// printf("%c\n", word);
// printf("%f\n", dec);






//to print max no among 3 numbers
int num1, num2, num3;
//input three var
printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter the second number: ");
scanf("%d", &num2);
printf("Enter the third number: ");
scanf("%d", &num3);
//compare
if (num1 > num2 && num1>num3) {
   printf("%d is greatest ", num1);
}
else if (num2>num3 &&num2>num1) {
     printf("%d is greatest ", num2);
} 
else {
     printf("%d is greatest ", num3);
}
//output the max number 


// write a program to add to add 2 numbers

// int num1, num2, sum;

// //decleare vars
// printf("Enter first number: ");
// scanf("%d\n", &num1);
// printf("Enter first number: ");
// scanf("%d\n", &num2);

// sum = num1 + num2;

// printf("Sum of %d and %d is: %d", num1, num2, sum);





// int num = 23;
// if(num==2) {
//     printf("true");
    
// }
// else {
//     printf("false");
// }





//write a progrm to accept two integers and checkk they are even or not 
// int num;
// printf("enter an integer: ");
// scanf("%d", &num);
// if (num % 2 == 0) {
//     printf("%d is even number.",num);
// }
// else {
// printf("%d is odd number.", num);
// }













return 0;
}