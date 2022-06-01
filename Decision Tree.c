#include <stdio.h>
#include <stdlib.h>

int main()
{
  char input;
printf("Check the gasoline guage. Is it empty? Please enter 'y' for yes and 'n' for no. \n");
scanf("%s",&input);

    if (input == 'y'){
        printf("You are out of gas, idiot! Put gas in the tank \n");
    }

    else if (input == 'n'){
        printf("Did it stop running during use or was it parked? Please enter 'r' for running or 'p' for parked \n");
scanf("%s",&input);
    if (input == 'r'){
    printf("It is likely to be a failure of the generator. Please take the car to a mechanic. \n");
    }

    if (input == 'p'){
    printf("Does the engine turn over normally but does not start? (y or n) \n");
scanf("%s",&input);
    if (input == 'y'){
        printf("might be a dirty fuel injector. Put in fuel injector cleaner in gas. Does it start now? \n");
scanf("%s",&input);
    if (input == 'y'){
        printf("OK, you are set now. See ya.");
    }

    if (input == 'n'){
            printf("Replace the fuel filter and try it again. Did it work? (y or n) \n");
scanf("%s",&input);
    if (input == 'y'){
            printf("OK, you are set now. See ya \n");
    }
    if (input == 'n'){
            printf("It is likely the fuel pump or spark plugs. Take it to a mechanic \n");
            }
        }
    }
    if (input == 'n'){
            printf("Check the batter voltage. Is it around 12 volts or more? (y or n) \n");
scanf("%s",&input);
    if (input == 'y'){
        printf("It is probably the starter motor. Take it to a mechanic \n");
    }
    if (input == 'n'){
        printf("Your battery is not holding charge. You need a new battery \n");
                }
            }
        }
    }
}
