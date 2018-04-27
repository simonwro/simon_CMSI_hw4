//#1
#include <stdio.h>   //Standard input and output import
#include <string.h> //String import
#include <math.h>  // Math import
/*
Description:
main method to output the calculated frequency of the piano keys
*/
int main() {
    // Make a spot in memory for the piano keys
    char* key_names[] = { "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#" };
    
    // Make float variables for necessary arithmetic
    float start_frequency = 27.5;
    float key_number = 88;
    float steps = 12.0;

    // Create a for loop to loop through
    for ( int i = 0; i < key_number; i += 1 ) {
        char* key_name = key_names[ i % 12 ];
        float frequency = start_frequency * ( pow(2,(i / steps) ) );
        // Print the key name and the frequencyto 4 decimal places
        printf("%s\t%0.4f \n", key_name, frequency);
    }
}
