#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    double x = 6.251;
    double y = 0.827;
    double z = 25.001;
    
    double cube_x = cbrt(x);
    
    double term1 = pow(y, cube_x);
    double term2 = pow(cos(y), 3);

    double abs_xy = fabs(x - y);
    double sin_z_sq = pow(sin(z), 2);
    double sqrt_x = sqrt(x+y);
    double drob = 1 + (sin_z_sq / sqrt_x);
    double num = abs_xy * drob;
    
    double e = exp(abs_xy) + x / 2.0;
    
    double term3 = num / e;

    double b = term1 + term2 * term3;

    printf("x = %.3f, y = %.3f, z = %.3f\n", x, y, z);
    printf("Результат: %.4f\n", b);

    return 0;
}