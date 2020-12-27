#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Initializing Functions Globally */
void BackwardString(char str[], int Lenght);
void VerticalString(char str[], int Lenght);
void TriangleString(char str[], int Lenght);

int main(){
    char word[1000], choice;
    int Lenght;

    do /* Repeat the Loop untill User Choose to QUIT */
    {
        printf("\n**** ENTER STRING TO DISPLAY AS TRIANGLE: ****\n");
        /* Fetching String Values from User */
        gets(word);

        Lenght = strlen(word); /* Calculating Lenght of given String */

        printf("\n**** PRINTING STRING FORWARD: ****\n");
        puts(word); /* Calling Function For PRINTING STRING FORWARD */

        printf("\n**** PRINTING STRING BACKWARD: ****\n");
        BackwardString(word, Lenght); /* Calling Function PRINTING STRING BACKWARD */

        printf("\n**** PRINTING STRING VERTICAL: ****\n");
        VerticalString(word, Lenght); /* Calling Function PRINTING STRING VERTICAL */

        printf("\n**** PRINTING STRING TRIANGLE: ****\n");
        TriangleString(word, Lenght); /* Calling Function PRINTING STRING TRIANGLE */

        printf("**** WANT TO ENTER ANOTHER STRING: YES[Y] / NO[N] ****\n");
        scanf("%c", &choice);

        gets(word); /* Calling Function to Fetching String Values */

    } while ( choice=='Y' || choice=='y' );
      /* Asking User If He want to Enter Any other String */
    return 0;
}

void TriangleString(char str[], int Lenght){
    int i, j, k=0;

    for(i=1; str[k]!='\0'; i++){
        //Iterating row wise
        for(j=1; j<=i&&str[k]!='\0'; j++){
            printf("%c", str[k]);
            k++;
        } printf("\n");
    }
}

void BackwardString(char str[], int Lenght){
    int j;
    //Iterating in backward direction
    for(j=Lenght-1; j>=0; j--){
        printf("%c", str[j]);
    }
}

void VerticalString(char str[], int Lenght){
    int j;
    //Iterating in vertical direction
    for(j=0; j<Lenght; j++){
        printf("\n%c", str[j]);
    }
}