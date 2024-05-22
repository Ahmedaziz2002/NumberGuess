#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,attempts=0;
     srand(time(0));

     number=rand() %100+1;

     printf("WELCOME TO THE NUMBER GUESS GAME!\n\n");
     printf("I HAVE SELECTED A NUMBER BETWEEN 1 AND 100.TRY TO GUESS IT\n\n");

     do{
        printf("Enter your guesses:\n");
        scanf("%d",&guess);
        attempts++;

        if(guess<number){
            printf("Too low try again!\n");
        }else if(guess>number){
            printf("Too high try again!\n");
        }else{
            printf("CONGRATULATIONS YOU GUESSED RIGHT IN %d ATTEMPTS\n",attempts);
        }
     }while(guess!=number);
     return 0;
}
