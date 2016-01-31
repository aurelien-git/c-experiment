#include <stdio.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n",
            bugs, bug_rate);

    long univers_of_defects = 2.5 * 5 * 23 * 31 * 21 * 5.7 * 333;
    printf("The entire universe has %ld bugs.\n",
            univers_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n",
            expected_bugs);

    double part_of_universe = expected_bugs / univers_of_defects;
    printf("That i only a %e portion of the universe.\n",
            part_of_universe);

    // This make no sense, just a demo of something weird
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n",
            care_percentage);

    return 0;
}

