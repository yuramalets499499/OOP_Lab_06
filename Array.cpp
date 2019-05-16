#pragma once
#include "Array.hpp"
#include <iostream>

using namespace std;

template<typename T> class ArrayF
{
public:
    ArrayF();
    ~ArrayF();
    T Input(T *mas)const;
    T Sort(T *mas);
    T Output(T *mas);
};

template<typename T> ArrayF<T>::ArrayF()
{
}

template<typename T> ArrayF<T>::~ArrayF()
{
}

template<typename T> T ArrayF<T>::Sort(T *mas)
{
    T temp;
    for (int i = 0; i < 5; i++)
    {
        int k = i;
        while (k > 0 && mas[k - 1] > mas[k])
        {
            temp = mas[k - 1];
            mas[k - 1] = mas[k];
            mas[k] = temp;
            k -= 1;
        }
    }
    return 0;
}

template<typename T> T ArrayF<T>::Input(T *mas) const
{
    for (int i = 0; i < 5; i++)
    {
        mas[i] = mas[i];
    }
    return 0;
}

template<typename T> T ArrayF<T>::Output(T *mas)
{
    for (int i = 0; i < 5; i++)
    {
        cout << i+1 << " : " << mas[i] << endl;
    }
    return 0;
}
