//#3
#include <stdio.h>  //Standard input and output import
#include <string.h> //String import
#include <stdlib.h> //Standard library import

//Method to calculate the length of the resulting "silly string"
char* silly( char* str1, char* str2 ) {
    int length_str1 = strlen(str1);
    int length_str2 = strlen(str2);
    int result_length = ( ( length_str1 *( length_str1 + 1 ) ) / 2 ) + ( ( length_str2 *( length_str2 + 1 ) ) / 2 );
    char* result_str = malloc(result_length + 1);

    //Variable for index
    int index = 0;

    //Loop through my frist string to created the first half of silly string
    for ( int i = 1; i < length_str1 + 1; i++ ) {
        for ( int j = 0; j < i; j++ ) {
            result_str[index] = str1[j];
            index++;
        }
    }

    //Loop through my second string to created the second half of silly string
    for ( int i = length_str2; i > 0; i-- ) {
        for ( int j = 0; j < i; j++ ) {
            result_str[index] = str2[j];
            index++;
        }
    }
    return result_str;
}

//Main method to combine and output the silly string
int main() {
    // Allocation of memory for the used strings
    char* str_one = malloc(55);
    char* str_two = malloc(55);
    char* answer = malloc(110);
    //Get inputs 1 and 2
    scanf( "%s", str_one);
    scanf( "%s", str_two);
    //Print answer
    printf( "%s", answer = silly(str_one, str_two) );
    free(str_one);
    free(str_two);
    free(answer);
    return 0;
}
