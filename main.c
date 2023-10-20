#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    long long n = 10000000000; // number of points to generate
    long long count = 0; // number of points within the circle
    double r = 1.0; // radius of the circle
    double x, y; // coordinates of each point
    double pi; // estimated value of pi

    // seed the random number generator
    srand(time(NULL));

    // generate n random points and count the number within the circle
    for (int i = 0; i < (n/4); i++) {
        // generate random coordinates within the square
        x = (double)rand() / RAND_MAX * 2 * r - r;
        y = (double)rand() / RAND_MAX * 2 * r - r;

        // check if the point is within the circle
        if (x * x + y * y <= r * r) {
            count++;
        }
    }

    // estimate pi as 4 times the ratio of points within the circle to total points
    //pi = 4.0 * count / n;

    // print the estimated value of pi
    printf("Estimated value of pi: %f\n", pi);
    printf("pi: %d\n", count);

    return 0;
}
