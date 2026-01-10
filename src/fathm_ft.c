#include <stdio.h>

int main(void)
{
    int feet_u, fathom_u;

    fathom_u = 2;

    feet_u = 6 * fathom_u;
    printf("%d Fathoms is %d Feet\n", fathom_u, feet_u);

    return 0;
}
