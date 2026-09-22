// c_1k_1s.cpp: определяет точку входа для приложения.
//

#include "app.h"


int main()
{
    double a = 7.14, b = -1.92, x = 4.41;


    double t1 = (sqrt(sqrt(pow(x, 3))));

    printf("t1: %.3f\n", t1);

    double t2 = (a * x);

    printf("t2: %.3f\n", t2);

    double t3 = ((log10(x)) + b);

    printf("t3: %.3f\n", t3);

    double result = (t1 - t2) / t3;

    printf("Result: %.3f\n", result);

    return 0;
}
