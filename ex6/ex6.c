/*
 * Learn C the hard way
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 5678.4532;
    char initial = 'A';
    char letters[] = "AD";
    char first_name[] = "Aurélien";
    char last_name[] = "DESBRIÈRES";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s,\n", last_name);
    printf("My whole name is %s. %s %s.\n",
            letters, first_name, last_name);

    return 0;
}

