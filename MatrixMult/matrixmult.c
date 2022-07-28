#include <stdlib.h>
#include <stddef.h>
#include <math.h>

short rounded(short prod){
    volatile short prod_rounded;
    prod_rounded = prod >> 7;
    if((prod & 0x40) != 0){
        prod_rounded +=1;
    }
    return prod_rounded;
}

short mat_mult_c(short A00_80, short A01_80, short A02_80, short A03_80, short B00_80, short B01_80, short B02_80, short B03_80){
    //volatile short result = round((A00_80*B00_80)/128.0)+round((A01_80*B01_80)/128.0)+round((A02_80*B02_80)/128.0)+round((A03_80*B03_80)/128.0);

    volatile short result = rounded(A00_80*B00_80)+rounded(A01_80*B01_80)+rounded(A02_80*B02_80)+rounded(A03_80*B03_80);
    
    //volatile short result = (A00_80*B00_80)/128+(A01_80*B01_80)/128+(A02_80*B02_80)/128+(A03_80*B03_80)/128;

    return result;
}

