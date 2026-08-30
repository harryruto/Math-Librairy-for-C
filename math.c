#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <windows.h>

double mthadd(double number1, double number2) {
    return number1 + number2;
}

double mthsub(double number1, double number2) {
    return number1 - number2;
}

double mthmult(double number1, double number2) {
    return number1 * number2;
}

double mthdivd(double number1, double number2) {
    return number1 / number2;
}

double mthsq(double number1) {
    return number1 * number1;
}

double mthp(double number1, double exponent) {
    double startingNumber = number1;
    double currentPower = 0;

    while (currentPower != exponent - 1) {
        currentPower++;
        number1 = number1 * startingNumber;
    }
    return number1;
}

double mtharSR(double length, double width) {
    return length * width;
}

double mtharT(double length, double width) {
    return length * width / 2.0;
}

double mthsqr(double number) {
    if (number < 0) {
        return -1;
    }
    if (number == 0) {
        return 0;
    }

    double x = number;
    double tolerance = 0.00001;

    while (1) {
        double nextX = 0.5 * (x + number / x);
        double diff = nextX - x;

        if (diff < 0) {
            diff = -diff;
        }
        if (diff < tolerance) {
            return nextX;
        }
        x = nextX;
    }
}

double mthppct(double number, double type, double modification) {
    if (type == 1) {
        number = number * (1 + modification / 100);
        return number;
    }
    if (type = 2) {
        number = number * (1 - modification / 100);
    }
}
void color(int couleurDuTexte, int couleurDuFond) {
HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(H, couleurDuFond*16+couleurDuTexte);
}
