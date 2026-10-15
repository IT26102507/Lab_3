#include <stdio.h>

int main()
{
    float height, water, mass, work, power;
    float g = 9.8;
    float efficiency = 0.9;

    printf("Enter height of dam: ");
    scanf("%f", &height);

    printf("Enter water flow rate: ");
    scanf("%f", &water);

    mass = water * 1000;
    work = mass * g * height;
    power = efficiency * work;

    power = power / 1000000;

    printf("Power generated: %.2f MW\n", power);

    return 0;
}
