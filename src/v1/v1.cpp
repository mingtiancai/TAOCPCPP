#include "v1.h"

static void exchange(unsigned int &m, unsigned int &n)
{
    unsigned int tmp;
    tmp = m;
    m = n;
    n = tmp;
}

unsigned int EuclidAlgorithm(unsigned int m, unsigned int n)
{
    if (m < n)
        exchange(m, n);

    unsigned int r = n;

    while (r != 0)
    {
        r = m % n;
        if (r == 0)
        {
            break;
        }
        else
        {
            m = n;
            n = r;
        }
    }
    return n;
}