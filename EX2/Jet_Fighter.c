 #include <stdio.h>

int main()
{
    float speed, distance, v, a, t;

    printf("Enter takeoff speed (km/h): ");
    scanf("%f", &speed);

    printf("Enter distance (meters): ");
    scanf("%f", &distance);

    v = speed / 3.6;

    a = (v * v) / (2 * distance);

    t = v / a;

    printf("Acceleration: %.2f m/s2\n", a);
    printf("Time: %.2f seconds\n", t);

    return 0;
}
