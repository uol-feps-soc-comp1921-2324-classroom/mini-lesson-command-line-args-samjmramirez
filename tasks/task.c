#include <stdio.h>
#include <stdlib.h>

/**
 * argv[1] - num1
 * argv[2] - num2
*/

int main(int argc, char *argv[]) 
{
    // Output if given incorrect number of arguments
    if (argc !=3)
    {
        printf("Usage: ./task <num1> <num2>\n");
        return 0;
    }

    // Check both inputs are valid integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
