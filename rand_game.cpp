/* rand example: guess the number */
#include <stdio.h> /* printf, scanf, puts NULL */
#include <stdlib.h> /* srand, rand */
#include <time.h> /* time */
int main ()
{
    int isecret, iGuess;

    /* initialize random seed: */
    srand (time(NULL));

    /* generate secret number between 1 and 100: */
    isecret = rand() % 100 + 1;

    do {
        printf ("guess the number (1 to 100): ");
        scanf ("%d" ,&iGuess);
        if (isecret<iGuess) puts ("the secret number is lower");
        else if (isecret>iGuess) puts ("the secret number is higher");
    } while (isecret!=iGuess);

    puts ("congratulations! You have officially wasted a minute of your life!");
    return 0;
}
