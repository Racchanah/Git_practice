#include <xc.h>

void main(void)
{
    TRISCbits.TRISC0 = 0;   // RC0 as output

    while(1)
    {
        LATCbits.LATC0 = 1; // LED ON
    }
}
// Fetch practice
// Pull practice