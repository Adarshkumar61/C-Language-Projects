#include <stdio.h>

int main() {
//     int num1, num2, sum;

//     // Prompt the user to enter two integers
//     printf("Enter two integers: ");
//     scanf("%d %d", &num1, &num2);

//     // Calculate the sum
//     sum = num1 + num2;

//     // Output the result
//     printf("The sum of %d and %d is: %d\n", num1, num2, sum);
// printf('');


//     return 0;
// }
// console.log('');
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0)); // Seed the random number generator
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Can you guess the number?\n");

    // Game loop
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);





// int num1;
// printf("enter two numbers: ");
// scanf("%d", &num1);
// if(num1>=30){
//     printf("guessed right");
// }
// else {
//     printf("nothing");
// }






// int dice = 1;
// while(dice<=6) {
//     if(dice<6){
//         printf("small\n");
        
//     }
//     else {
//         printf("highest");

        
//     }
//     dice = dice + 1;
// }






// int i = 0;
// while(i<=10){
//     printf("%d\n", i);
//     i +=3;
// }






// int countdown = 38;
// while(countdown>=0){
//     printf("%d\n", countdown);
//     countdown --;
// }
// printf("happpy birthday");





// int i;
// for(i=0; i<5; i++){
// printf("%d\n", i);
// }





// for(int i=2; i<5; i++) {
//     printf("yes\n");
// }





// int i;
// for(i=0; i <=100; i +=10) {
// printf("%d\n", i);

// }





// int i;
// for(i = 3; i <=51267; i = i*2) {
//     printf("%d\n", i);
// }







// int number = 67;
// int i;
// for (i = 1; i <= 10; i++) {
//     printf("%d x %d = %d\n", number, i, number * i);
// }




// int number = 2;
//   int i;

//   // Print the multiplication table for the number 2
//   for (i = 1; i <= 10; i++) {
//     printf("%d x %d = %d\n", number, i, number * i);
//   }









    return 0;
}