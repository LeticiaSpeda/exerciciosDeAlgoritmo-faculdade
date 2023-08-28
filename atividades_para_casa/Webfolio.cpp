#include <stdio.h>
#include <cmath>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Inserir os coeficientes da equação: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equação possui duas raízes reais:\n");
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);

    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equação possui uma raiz real:\n");
        printf("x1 = %lf\n", x1);
    } else {
        printf("A equação não possui raízes reais.\n");
    }

    return 0;
}