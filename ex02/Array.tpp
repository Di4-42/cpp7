template <typename T>
Array<T>::Array() : _data(0), _size(0)
{
    std::cout << "Empty array created" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n)
{
    std::cout << "Array off " << n << " elements created" << std::endl;
}

template <typename T>
Array<T>::Array(const Array& source) : _data(0), _size(0)
{
    *this = source;
    std::cout << "Array copy created" << std::endl;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& source)
{
    if (this != &source)
    {
        T* copy = new T[source._size]();    // tab qui a la mm taille que source 

        try
        {
            for(unsigned int i = 0; i < source._size; i++)  // *
                copy[i] = source._data[i];
        }
        catch(...)
        {
            delete[] copy;
            throw;
        }

        delete[] _data;
        _data = copy;
        _size = source._size;  // met 5 dans _size de b pour enregistrer sa nouvelle taille
    }
    std::cout << "Array assignement operator called" << std::endl;
    return *this;

}

template <typename T>
Array<T>::~Array()
{
    delete[] _data;
    std::cout << "Array destroyed" << std::endl;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::exception();
    return _data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw std::exception();
    return _data[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}


/*  *1 si source contient 10 20 30:
copy[0] = source._data[0]; copie 10
copy[1] = source._data[1]; copie 20
copy[2] = source._data[2]; copie 30 */

/*
    a contient : 10, 20, 30, 40, 50
    b contient : 8, 9
    
    b = a;

    b.operator=(a);

*/