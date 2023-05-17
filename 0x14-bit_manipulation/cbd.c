#include "main.h"
/**
 * cbd - counts the number of binary digits that can represent a decimal no
 * @decimal: the decimal number
 *
 * Return: number of binary digits
 */

int cbd(int decimal)
{
        int coun;

        if (decimal == 0)
        {
                return (1);
        }
        coun = 0;

        while (decimal > 0)
        {
                decimal >>= 1;
                coun++;
        }

        return (coun);
}
