#include <stdio.h>

void print_peak(int suite, char value);

int main(void)
{
    print_peak(5, 'A');
}

// Print peak
void print_peak(int suite, char value)
{
    printf("+----------+\n");
    printf("|-%c--------|\n", value);
    printf("|----/\\----|\n");
    printf("|---/  \\---|\n");
    printf("|--/ /\\ \\--|\n");
    printf("|--\\/  \\/--|\n");
    printf("|----||--%c-|\n", value);
    printf("+----------+\n");
}
