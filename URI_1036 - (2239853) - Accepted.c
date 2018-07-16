#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float a, b, c, R1, R2, delta;

    scanf("%f %f %f", &a, &b, &c);

    delta = ((b * b) - 4*(a * c));

    if (delta > 0 && a != 0)
    {
        delta = sqrt(delta);
        R1 = (- b + delta) / (2 * a);
        R2 = (- b - delta) / (2 * a);
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}
