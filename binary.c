#include <stdio.h>
 
const int ULL_SIZE = 8*sizeof(ull);
{
    ull b = ~a; 
    bool binary_a[ULL_SIZE] = { 0 }
    for (int i=0; a > 0; i++)
    {
        binary_a[i] = a % 2;
        a /= 2;
    }
    bool binary_b[ULL_SIZE] = { 0 };
    for (int i=0; b > 0; i++)
    {
        binary_b[i] = b % 2;
        b /= 2;
  }
    sort(binary_a, binary_a + ULL_SIZE);
   
    for (int i = 0; i < ULL_SIZE; i++)
        if (binary_a[i] != binary_b[i])
            return false;
 
    return 0;
}
