
#include<stdlib.h>
#include"p.h"

#define high_nibble (0x0f)
#define low_nibble  (0xf0)

int swap_nibble(int a)
{


return (((a&low_nibble)>>4)|((a&high_nibble)<<4));

}
