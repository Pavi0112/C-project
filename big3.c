#include <stdio.h>

void biggest3() {
    double n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%.2f is the largest.", n1);
    else if (n2 >= n1 && n2 >= n3)
        printf("%.2f is the largest.", n2);
    else
        printf("%.2f is the largest.", n3);

   //return 0;
}

