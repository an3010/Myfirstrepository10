#include <stdio.h>
#include <stdlib.h>

// Function prototype for test_01
static int test_01(int test_int1, int test_int2);

int main() {
    // Calling test_01 with appropriate arguments
    int result = test_01(1, 2);
    printf("The result is: %d\n", result);
    return 0;
}

// Definition of test_01 function
static int test_01(int test_int1, int test_int2) {
    // Simple comparison logic
    if (test_int1 < test_int2) {
        return test_int2;  // Return the larger value
    } else {
        return test_int1;  // Return the larger value
    }
}
