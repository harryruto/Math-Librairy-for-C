
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
