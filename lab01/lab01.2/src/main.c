// c_1k_1s.cpp: определяет точку входа для приложения.
//

#include "app.h"


int main()
{
    double a, b, x ;

    printf("enter a, b, x:");

	int r = scanf("%lf %lf %lf", &a, &b, &x);

    if (r < 3) {
		printf("Error: Invalid input. Please enter three numbers.\n");
		return -1;
	}

    double t1 = pow(x, 3/4.0);

    double t2 = (a * x);
    
    double t3 = ((log10(x)) + b);

    double result = (t1 - t2) / t3;

    printf("Result: %.3f\n", result);

    return 0;
}
