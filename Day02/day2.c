#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Pring output to STDOUT */
    double mealCost;
    int tipPercent;
    int taxPercent;
    float totalCost;

    scanf("%lf",&mealCost);
    scanf("%d", &tipPercent);
    scanf("%d", &taxPercent);

    totalCost = mealCost + (mealCost * (tipPercent/100.0)) +
        (mealCost * (taxPercent/100.0));
    printf("The total meal cost is %.0lf dollars.\n", totalCost);

    return 0;
}
