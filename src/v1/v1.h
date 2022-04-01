#ifndef V1_H
#define v1_H

#include <base.h>

// 欧几里得算法
template <typename T>
T EuclidAlgorithm(T m, T n)
{

    if (m < n)
        exchange<T>(m, n);

    T r = n;

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

#endif