#ifndef BASE_H
#define BASE_H
#include <type_traits>

template <typename T>
void exchange(T &m, T &n)
{
    T tmp;
    tmp = m;
    m = n;
    n = tmp;
}

template <typename T>
bool checkNatureNumber()
{
    return (std::is_integral<T>::value) && (std::is_unsigned<T>::value);
}

#endif