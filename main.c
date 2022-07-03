//a small program that calculates '+', '-', '/' and '*' of two numbers
//todo: first the users can choose if they want to calculate integers or floats
#include <stdio.h>
#include <stdlib.h>

long int calculate(long first, long second, char operation);

int main(void) {

    char line[256];

    long first, second;
    char* endPtr = NULL;
    int base = 10;

    char operation;


    //get the first number from input  
    printf("Type in the first number: ");
    
    while (fgets(line, sizeof(line), stdin)) {
		first = strtol(line, &endPtr, base);
		if (endPtr == line || *endPtr !='\n') {
			printf("Not recognised as an integer. Please enter an integer:\n");
		} else break;
	}

    printf("You entered: %ld\n", first);

    //get the second number from input 
    printf("Type in the second number: ");
    
    while (fgets(line, sizeof(line), stdin)) {
		second = strtol(line, &endPtr, base);
		if (endPtr == line || *endPtr !='\n') {
			printf("Not recognised as an integer. Please enter an integer:\n");
		} else break;
	}

    printf("You entered: %ld\n", second);
  
    //get which operation the user wants to do
    printf("Type in which operation you wanna perform on the two numbers you provided: \n");
    
    if(fgets(line, sizeof(line), stdin) == NULL) {
        printf("Input error!\n");
        exit(1);
    }

    operation = line[0];
    printf("Char you typed: %c\n", operation);

    printf("The calculated value is: %ld\n", calculate(first, second, operation));
    
    return 0;
}


//function to calculate the value based on the input
long int calculate(long first, long second, char operation) {

    switch (operation) {
        case '+':
            return first + second;
            break;

        case '-':
            return first - second;
            break;
    
        case '*':
            return first * second;
            break;

        case '/':
            return first / second;
            break;

        default:
            return -1;
            break;
    }

}