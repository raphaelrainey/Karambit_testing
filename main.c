#include <stdio.h>

// Function that performs the operation using a while loop
int performOperationWhileLoop(int (i)) {
    int result = 0;
    i = i % 10;
    //int x = 100;
    //Result using while loop: 5050
    //Result using if statements: 3
    //Result using for loop: 50004997
    
    //int x = 99;
    //Result using while loop: 4950
    //Result using if statements: 3
    //Result using for loop: 50004997

    while (i <= 60) {
        result += i;
        i++;
    }

    printf("Result using while loop: %d\n", result);
    return result;
}

// Function that performs the operation using a for loop
int performOperationForLoop(int i) {
    int result = 0;
    i = i % 10;
    for (; i <= 10000; i++) {
        result += i;
    }

    printf("Result using for loop: %d\n", result);
    return result;
}

// Function that performs the operation using if statements
int performOperationIfStatements(int i) {
    //int x = performOperationForLoop(1);
    //int result = 0;
    //i = x % 10;
    //Result using while loop: 1830
    //Result using for loop: 50005000
    //Result using if statements: 3
    //Result using for loop: 50004997

    int result = 0;
    i = i % 10;
    if (i <= 2000) {
        result += i;
        i++;
    }
    if (i <= 2000) {
        result += i;
        i++;
    }
    if (i <= 2000) {
        result += i;
    }

    // Continue this pattern until i <= 1000

    printf("Result using if statements: %d\n", result);

    //result = result * result;
    //Result using while loop: 1830
    //Result using if statements: 3
    //Result using for loop: 50004964
    
    return result;
    //return i;
    //Result using while loop: 1830
    //Result using if statements: 3
    //Result using for loop: 50004999
}

int main() {
    int i = 1;
    //Origin Result using while loop: 1830
    //Result using if statements: 3
    //Result using for loop: 50004997
    performOperationForLoop(performOperationIfStatements(performOperationWhileLoop(i)));

    //While(If(For(While())))
    //performOperationForLoop(performOperationIfStatements(performOperationWhileLoop(performOperationForLoop(i))));
    //Result using for loop: 50005000
    //Result using while loop: 1830
    //Result using if statements: 3
    //Result using for loop: 50004997

    //While(If(For()))
    //Result using for loop: 50005000
    //Result using if statements: 3
    //Result using while loop: 1827
    //performOperationWhileLoop(performOperationIfStatements(performOperationForLoop(i)));
    return 0;
}