#include <stdlib.h>
#include <stddef.h>
#include <math.h>


short mat_mult_c(short A00_80, short A01_80, short A02_80, short A03_80, short B00_80, short B01_80, short B02_80, short B03_80){
    volatile short result = round((A00_80*B00_80)/128.0)+round((A01_80*B01_80)/128.0)+round((A02_80*B02_80)/128.0)+round((A03_80*B03_80)/128.0);
    if(result > 2047){
        result = 2047;
    }
    return result;
}