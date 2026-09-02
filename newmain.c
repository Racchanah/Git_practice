#include <xc.h>

void main(void)
{
    TRISCbits.TRISC0 = 0;   // RC0 as output

    while(1)
    {
        LATCbits.LATC0 = 0; // LED OFF
    }
}
// Local vs Remote practice
// Push practice
// Fetch practice
// Pull practice