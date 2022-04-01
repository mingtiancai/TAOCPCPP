#ifndef BASE_H
#define BASE_H
#include <type_traits>

template <typename T>
bool checkNatureNumber1()
{
    return (std::is_integral<T>::value) && (std::is_unsigned<T>::value);
}

#endif