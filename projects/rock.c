
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
int user;
int computer;
srand(time(NULL));
printf("Enter your choice (1 = Rock, 2 = Paper, 3 = Scissors): ");
scanf("%d", &user);
computer = rand() % 3 + 1;
printf("computer choice: %d\n", computer);
if(user == computer)
    printf("It's a tie");
//user condition win
else if ((user == 1 && computer ==3) ||
(user==2 && computer==1) ||
(user==3 && computer==2))
printf("You win\n");
else 
    printf("computer win\n");
    return 0;
}