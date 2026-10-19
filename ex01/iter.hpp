#pragma once

#include <iostream>
#include <string>

template <typename T>
void iter(T* array, const int length, void (*func)(T&))
{
    for (int i = 0; i < length; ++i)
        func(array[i]);
}

template <typename T>
void iter(const T* array, const int length, void(*func)(const T&))
{
    for (int i = 0; i < length; ++i)
        func(array[i]);
}
