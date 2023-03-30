#include "main.h"
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) 
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int len_res = len1 > len2 ? len1 + 1 : len2 + 1;

    if (len_res > size_r)
    {
        return 0; // result too big to fit in buffer
    }
    int carry = 0;
    int i, j, k;

    for (i = len1 - 1, j = len2 - 1, k = len_res - 1; k >= 0; i--, j--, k--) {
        int digit1 = i >= 0 ? n1[i] - '0' : 0;
        int digit2 = j >= 0 ? n2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit_res = sum % 10;
        r[k] = digit_res + '0';
    }
    if (carry > 0)
    {
        r[0] = carry + '0';
        return r; // carry is always a single digit
    }
    else
    {
        return r + 1; // skip leading zero if present
    }
}

