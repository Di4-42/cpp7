#pragma once

#include <exception>
#include <iostream>
#include <string>

template <typename T>
class Array
{
    private:
        T*              _data;
        unsigned int    _size;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& source);
        Array& operator=(const Array& source);
        ~Array();

        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;

        unsigned int size() const;
};

#include "Array.tpp"
