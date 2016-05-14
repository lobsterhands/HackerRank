#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int userI;
    double userD;
    char userS[99];

    // Read and save an integer, double, and String to your variables.
    scanf("%d\n", &userI);
    scanf("%lf\n", &userD);
    scanf("%[^\n]", userS);

    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + userI);

    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d + userD); // "%f" vs "%.1f": explicit decimal nums

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s\n", s, userS);

    return 0;
}
