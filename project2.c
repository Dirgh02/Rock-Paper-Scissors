#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 2
    int randomn_number = rand() % 30 +1;
    char p1;
    char p2;

    printf ("Enter \"r\" for rock \"p\" for paper and \"s\" for scissors\n");
    scanf ("%c", &p1);
    // printf ("you chose %c\n", p1);
    
    

    // Assign 'r', 'p', or 's' based on the random number
    if (randomn_number<= 10 && randomn_number >=0) {
        p2 = 'r';  // rock
    } else if (randomn_number<= 20 && randomn_number >10) {
        p2 = 'p';  // paper
    } else {
        p2 = 's';  // scissors
    }

    // Print the randomly chosen character
    printf("Randomly chosen character: %c\n", p2);


    // p1 = rock
     if (p1 == 'r' && p2 == 'p')
     {
       printf ("You chose rock and computer chose paper:\n");
       printf ("You Lose!!!\n");
       
     }
     else if (p1 == 'r' && p2 == 's')
     {
        printf ("You chose rock and computer chose scissors:\n");
       printf ("You Win!!!\n");
     }
     else if (p1 == 'r' && p2 == 'r')
     {
        printf ("You chose rock and computer also chose rock:\n");
       printf ("It's a Draw!!!\n");
     }


    // p1 = paper
     else if (p1 == 'p' && p2 == 'r')
     {
        printf ("You chose paper and computer chose rock:\n");
       printf ("You Win!!!\n");
     }

     else if (p1 == 'p' && p2 == 'p')
     {
        printf ("You chose paper and computer also chose paper:\n");
       printf ("It's a Draw!!!\n");
     }
     
     else if (p1 == 'p' && p2 == 's')
     {
        printf ("You chose paper and computer chose scissors:\n");
       printf ("You Lose!!!\n");
     }

     // p1 = scissors
     if (p1 == 's' && p2 == 'p')
     {
       printf ("You chose scissors and computer chose paper:\n");
       printf ("You Win!!!\n");
       
     }
     else if (p1 == 's' && p2 == 's')
     {
        printf ("You chose rockscissors computer also chose scissors:\n");
       printf ("It's a Draw!!!\n");
     }
     else if (p1 == 's' && p2 == 'r')
     {
        printf ("You chose rockscissors computer chose rock:\n");
       printf ("You Lose!!!\n");
     }


    else{
        printf ("Something went wrong. Verify your input and try again!!!\n");
        
    }
    return 0;
}
