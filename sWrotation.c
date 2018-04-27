//#4
#include <stdio.h>  //Standard input and output import
#include <string.h> //String import
#include <stdlib.h> //Standard library import

int counter;


char* getString(char* string, int place, int strlength) {
    char* position = malloc(strlength + 1);
    for (counter = 0 ; counter < strlength; counter++) {
        *( position + counter ) = * ( string + place - 1);
        string++;
    }
    
    *(position + counter) = '\0';
    return position;
}

char* rotate(char* str, int position) {
    char* place1, *place2, *rotatedString;
    int length = strlen(str);
    if(length < position) {
        position = position%length;
    }
    int end = position, go_mem1 = 1, str_place = go_mem1+position;
    place1 = getString(str, str_place, length);
    place2 = getString(str, go_mem1, end);
    rotatedString =  malloc(strlen(place1)+strlen(place2));
    strcpy(rotatedString, place1);
    strcat(rotatedString, place2);
    return rotatedString;
    free(rotatedString);
}
//Got help with output
int main() {
  printf("%s\n", rotate("doghouse", 0));     // ⇒  "doghouse"
  printf("%s\n", rotate("doghouse", 1));     // ⇒  "oghoused"
  printf("%s\n", rotate("doghouse", 2));     // ⇒  "ghousedo"
  printf("%s\n", rotate("doghouse", 3));     // ⇒  "housedog"
  printf("%s\n", rotate("doghouse", 4));     // ⇒  "ousedogh"
  printf("%s\n", rotate("doghouse", 5));     // ⇒  "usedogho"
  printf("%s\n", rotate("doghouse", 10));     // ⇒ "ghousedo"
}
