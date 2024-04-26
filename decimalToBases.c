#include <stdio.h>          //for printing to stdio
#include <stdlib.h>         //TODO: Fill in the rest of these
#include <math.h>           //
#include <string.h>         //
#include "decimalToBases.h" //

#define NDEBUG      /*This will make sure the tests don't stop   \
                    / execution. Comment it out to see the tests \
                    / fail and stop execution.*/
#include <assert.h> //

// This function just contains our unit tests.
void testRunner()
{
    assert(decimalToBinary("10") == 1);
}

// Convert a binary string to decimal
// Input: String containing a binary representations
// Output: integer value of the binary number converted to decimal
// Notes: TODO: explain anything interesting or confusing about
// the function
int decimalToBinary(char *decimal)
{
    int result = 0, i = 0;
    int length = strlen(decimal);
    for (i; i < length; i++)
    {
        result = result + (decimal[length - i - 1] - '0') * pow(2, i);
    }
    return result;
}

// The main function of the program that will drive execution.
// TODO: Set this up to consume user input (hint: argc, argv)
int main()
{
    testRunner(); // first, we run our tests
    char input[] = "011101";
    int x = decimalToBinary(input);
    printf("The result is: %d\n", x);
    return 0;
}