#include <xc.h>

void main(void)
{
    TRISCbits.TRISC0 = 0;   // RC0 as output

    while(1)
    {
        LATCbits.LATC0 = 1; // LED ON
    }
}
// Local vs Remote practice
// Fetch practice
// Pull practice