#include <stdio.h>
int logicAND(int a, int b) {
    return a & b;
}
int logicOR(int a, int b) {
    return a | b;
}
int logicNOT(int a) {
    return !a;
}
int dAlgorithm(int inputA, int inputB) {
    int a, b, c, d, e, f, g;
    a = logicAND(inputA, inputB);
    b = logicOR(inputA, inputB);
    c = logicNOT(inputA);
    d = logicNOT(inputB);
    e = logicAND(c, d);
    f = logicOR(b, e);
    g = logicOR(a, f);
    return g;
}
int main() {
    int inputA, inputB;
    int output;
    printf("Enter the values for input A (0 or 1): ");
    scanf("%d", &inputA);
    printf("Enter the values for input B (0 or 1): ");
    scanf("%d", &inputB);

    if (inputA != 0 && inputA != 1 && inputB != 0 && inputB != 1) {
        printf("Invalid input values. Please enter 0 or 1.\n");
        return 1;
    }
    output = dAlgorithm(inputA, inputB);
    printf("Output of the circuit: %d\n", output);
    if (output == 0) {
        printf("Fault Detected: The circuit is not functioning correctly.\n");
    } else {
        printf("No fault detected: The circuit is functioning correctly.\n");
    }
    return 0;
}
