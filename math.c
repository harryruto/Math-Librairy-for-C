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
    if(number <  0)
    {
        return -1;
    }
    if(number == 0) {
        return 0;
    }
        double x = number;
    double tolerance = 0.00001;

    while(1) {
        double nextX = 0.5 * (x + number / x);

        double diff = nextX - x;

        if(diff < 0) {
            diff = -diff;
            }
        if(diff < tolerance) {
        return nextX;
        }
        x = nextX;
    }
}


