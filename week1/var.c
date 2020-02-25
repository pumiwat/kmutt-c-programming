#include <stdio.h>

int main () {

    int x = 'B';
    char y = -31;
    float f = 88.88888888888;
    double g = 88.88888888888;

    printf("%c\n", y);
    printf("%c\n", x);
    printf("%.10f\n", f);
    printf("%.10lf\n", g);

    return 0;
}