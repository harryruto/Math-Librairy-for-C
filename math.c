#include "math.h"

double addition(double number1, double number2) {
    return number1 + number2;
}

double subtraction(double number1, double number2) {
    return number1 - number2;
}

double multiplication(double number1, double number2) {
    return number1 * number2;
}

double division(double number1, double number2) {
    return number1 / number2;
}

double square(double number1) {
    return number1 * number1;
}

double power(double number1, double exponent) {
    double startingNumber = number1;
    double currentPower = 0;

    while (currentPower != exponent - 1) {
        currentPower++;
        number1 = number1 * startingNumber;
    }
    return number1;
}

double areaSR(double length, double width) {
    return length * width;
}

double areaT(double length, double width) {
    return length * width / 2;
}

double squareRoot(double number) {
    double testedNumber = 1;
    double obtainedNumber = 0;

    while (obtainedNumber != number) {
        testedNumber++;
        obtainedNumber = square(testedNumber);
    if (obtainedNumber > +number) {
        return -1;
    }
}

    return testedNumber;
}
