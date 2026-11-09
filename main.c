#include <stdio.h>

int main(void)
{
    double ylimit;
    if (scanf("%lf", &ylimit) != 1)
    {
        return 0;
    }

    if (ylimit < 0.0)
    {
        printf("NG");
        return 0;
    }

    const double g = 3.71;
    double y = 0.0;
    double v = 0.0;

    for (double t = 0.0; y < ylimit; t += 0.1)
    {
        v = g * t;
        y = g * t * t / 2.0;
    }

    printf("%.3f", v);
    return 0;
}