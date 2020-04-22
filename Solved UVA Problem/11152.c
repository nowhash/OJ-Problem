#include <stdio.h>
#include <math.h>

#define PI 2 * acos(0.0)

int main()
{
    int a, b, c;
    double s, x, areaCircle, roses, violates, yellow;

    while (scanf("%lld %lld %lld", &a, &b, &c) != EOF)
    {
        s = (a + b + c) / 2.0;

        x = sqrt(s * ((s - a) * (s - b) * (s - c)));

        areaCircle = PI * (pow(((a * b * c) / (4 * x)), 2));

        roses = PI * (pow((x / s), 2));

        violates = x - roses;

        yellow = areaCircle - (violates + roses);

        printf("%.4lf %.4lf %.4lf\n", yellow, violates, roses);
    }
    return 0;
}
