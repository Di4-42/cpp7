#pragma once

#include <iostream>
#include <string>
#include <exception>

template <typename T> // T est un paramètre représentant un type
void	swap(T& a, T& b) // utilise ce type
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
const	T& min(const T& a, const T& b) 
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
const	T& max(const T& a, const T& b)
{
	if (a > b)
		return a;
	return b;
}
