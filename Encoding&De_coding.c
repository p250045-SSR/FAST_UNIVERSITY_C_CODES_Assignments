#include <stdio.h>
int main()
{
    char first_letter, encoded_letter, decoded_letter;
    int num, d1, d2, d3, new1, new2, new3;
    int encoded1, encoded2, encoded3;
    int decoded1, decoded2, decoded3;

    printf("Enter first_letter of your name: ");
    scanf("%c", &first_letter);
    printf("Enter 3 digit identity number: ");
    scanf("%d", &num);

    d1 = num / 100;          //Extracting digits
    d2 = (num / 10) % 10;
    d3 = num % 10;
    new1 = d1;               //Assigning digits to new variables for manipulation
    new2 = d2;
    new3 = d3;

    //Encoding process: Step 1: Checking vowel or consonant

    if (first_letter == 'a' || first_letter == 'e' || first_letter == 'i' || first_letter == 'o' || first_letter == 'u' ||
        first_letter == 'A' || first_letter == 'E' || first_letter == 'I' || first_letter == 'O' || first_letter == 'U')
    {
        new1 += 5;
        new2 += 5;
        new3 += 5;  
      
}
    else{
        new1 -= 2;
        new2 -= 2;
        new3 -= 2;
    }

    //Step 2: Handle Special cases (nested if-else ladder)
    if (new1 > 9)            //If greater than 9, subtract 10
     new1 -= 10;
    else if (new1 < 0)       //If less than 0, add 10
     new1 += 10;

    if (new2 > 9) 
     new2 -= 10;
    else if (new2 < 0)
     new2 += 10; 
     
    if (new3 > 9) 
     new3 -= 10;
    else if (new3 < 0)
     new3 += 10; 


    //Step 3: Encoding the letter by reversing the alphabet
    switch(first_letter){
        case 'A': encoded_letter = 'Z'; break; case 'a': encoded_letter = 'z'; break;
        case 'B': encoded_letter = 'Y'; break; case 'b': encoded_letter = 'y'; break;
        case 'C': encoded_letter = 'X'; break; case 'c': encoded_letter = 'x'; break;
        case 'D': encoded_letter = 'W'; break; case 'd': encoded_letter = 'w'; break;
        case 'E': encoded_letter = 'V'; break; case 'e': encoded_letter = 'v'; break;
        case 'F': encoded_letter = 'U'; break; case 'f': encoded_letter = 'u'; break;
        case 'G': encoded_letter = 'T'; break; case 'g': encoded_letter = 't'; break;
        case 'H': encoded_letter = 'S'; break; case 'h': encoded_letter = 's'; break;
        case 'I': encoded_letter = 'R'; break; case 'i': encoded_letter = 'r'; break;
        case 'J': encoded_letter = 'Q'; break; case 'j': encoded_letter = 'q'; break;
        case 'K': encoded_letter = 'P'; break; case 'k': encoded_letter = 'p'; break;
        case 'L': encoded_letter = 'O'; break; case 'l': encoded_letter = 'o'; break;
        case 'M': encoded_letter = 'N'; break; case 'm': encoded_letter = 'n'; break;
        case 'N': encoded_letter = 'M'; break; case 'n': encoded_letter = 'm'; break;
        case 'O': encoded_letter = 'L'; break; case 'o': encoded_letter = 'l'; break;
        case 'P': encoded_letter = 'K'; break; case 'p': encoded_letter = 'k'; break;
        case 'Q': encoded_letter = 'J'; break; case 'q': encoded_letter = 'j'; break;
        case 'R': encoded_letter = 'I'; break; case 'r': encoded_letter = 'i'; break;
        case 'S': encoded_letter = 'H'; break; case 's': encoded_letter = 'h'; break;
        case 'T': encoded_letter = 'G'; break; case 't': encoded_letter = 'g'; break;
        case 'U': encoded_letter = 'F'; break; case 'u': encoded_letter = 'f'; break;
        case 'V': encoded_letter = 'E'; break; case 'v': encoded_letter = 'e'; break;
        case 'W': encoded_letter = 'D'; break; case 'w': encoded_letter = 'd'; break;
        case 'X': encoded_letter = 'C'; break; case 'x': encoded_letter = 'c'; break;
        case 'Y': encoded_letter = 'B'; break; case 'y': encoded_letter = 'b'; break;
        case 'Z': encoded_letter = 'A'; break; case 'z': encoded_letter = 'a'; break;
        default: encoded_letter = first_letter;                     //Non-alphabetical characters remain unchanged
        break;
    }
    encoded1 = new1;         //Assigning new values to encoded variables
    encoded2 = new2;
    encoded3 = new3;
    
    printf("Encoded Letter: %c%d%d%d\n", encoded_letter, encoded1, encoded2, encoded3);
    decoded_letter = encoded_letter;         //Assigning encoded letter to decoded letter for manipulation

    //Decoding process: Step 1: Reversing the alphabet again
    switch(decoded_letter){
        case 'A': decoded_letter = 'Z'; break; case 'a': decoded_letter = 'z'; break;
        case 'B': decoded_letter = 'Y'; break; case 'b': decoded_letter = 'y'; break;
        case 'C': decoded_letter = 'X'; break; case 'c': decoded_letter = 'x'; break;
        case 'D': decoded_letter = 'W'; break; case 'd': decoded_letter = 'w'; break;
        case 'E': decoded_letter = 'V'; break; case 'e': decoded_letter = 'v'; break;
        case 'F': decoded_letter = 'U'; break; case 'f': decoded_letter = 'u'; break;
        case 'G': decoded_letter = 'T'; break; case 'g': decoded_letter = 't'; break;
        case 'H': decoded_letter = 'S'; break; case 'h': decoded_letter = 's'; break;
        case 'I': decoded_letter = 'R'; break; case 'i': decoded_letter = 'r'; break;
        case 'J': decoded_letter = 'Q'; break; case 'j': decoded_letter = 'q'; break;
        case 'K': decoded_letter = 'P'; break; case 'k': decoded_letter = 'p'; break;
        case 'L': decoded_letter = 'O'; break; case 'l': decoded_letter = 'o'; break;
        case 'M': decoded_letter = 'N'; break; case 'm': decoded_letter = 'n'; break;
        case 'N': decoded_letter = 'M'; break; case 'n': decoded_letter = 'm'; break;
        case 'O': decoded_letter = 'L'; break; case 'o': decoded_letter = 'l'; break;
        case 'P': decoded_letter = 'K'; break; case 'p': decoded_letter = 'k'; break;
        case 'Q': decoded_letter = 'J'; break; case 'q': decoded_letter = 'j'; break;
        case 'R': decoded_letter = 'I'; break; case 'r': decoded_letter = 'i'; break;
        case 'S': decoded_letter = 'H'; break; case 's': decoded_letter = 'h'; break;
        case 'T': decoded_letter = 'G'; break; case 't': decoded_letter = 'g'; break;
        case 'U': decoded_letter = 'F'; break; case 'u': decoded_letter = 'f'; break;
        case 'V': decoded_letter = 'E'; break; case 'v': decoded_letter = 'e'; break;
        case 'W': decoded_letter = 'D'; break; case 'w': decoded_letter = 'd'; break;
        case 'X': decoded_letter = 'C'; break; case 'x': decoded_letter = 'c'; break;
        case 'Y': decoded_letter = 'B'; break; case 'y': decoded_letter = 'b'; break;
        case 'Z': decoded_letter = 'A'; break; case 'z': decoded_letter = 'a'; break;
        default: decoded_letter = encoded_letter;                     //Non-alphabetical characters remain unchanged
    }

        decoded1 = encoded1;         //Assigning encoded digits to decoded digits for manipulation
        decoded2 = encoded2;
        decoded3 = encoded3;

     //Step 2: Reverse ID digit manipulation based on vowel or consonant
        //If vowel:
        if (decoded_letter == 'a' || decoded_letter == 'e' || decoded_letter == 'i' || decoded_letter == 'o' || decoded_letter == 'u' ||
            decoded_letter == 'A' || decoded_letter == 'E' || decoded_letter == 'I' || decoded_letter == 'O' || decoded_letter == 'U')
            {
                decoded1 -= 5;
                decoded2 -= 5;
                decoded3 -= 5;
            }

        //If consonant:
        else{                             
                decoded1 += 2;
                decoded2 += 2;
                decoded3 += 2;
            }

    //Step 3: Handling ID digits ranges (0-9)
    if (decoded1 > 9)           //If greater than 9, subtract 10
     decoded1 -= 10;   
    else if (decoded1 < 0)      //If less than 0, add 10
     decoded1 += 10;

    if (decoded2 > 9) 
     decoded2 -= 10;
    else if (decoded2 < 0)
     decoded2 += 10;

    if (decoded3 > 9) 
     decoded3 -= 10;
    else if (decoded3 < 0)
     decoded3 += 10;

     

    printf("Decoded Letter: %c%d%d%d\n", decoded_letter, decoded1, decoded2, decoded3);
    return 0;

}   //End of program
                           
                                           