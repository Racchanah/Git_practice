#include <xc.h>

void main(void)
{
    TRISCbits.TRISC0 = 0;   // RC0 as output

    while(1)
    {
        LATCbits.LATC0 = 2; // LED ON
    }
}
// Local vs Remote practice
// Push practice
// Fetch practice
// Pull practice