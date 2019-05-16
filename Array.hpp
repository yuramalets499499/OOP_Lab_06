#pragma once
#include <iostream>

using namespace std;

template<typename T> class Array
{
private:
    int i;
    T arr[];
public:
    Array();
    ~Array();
    T GetArr(T arr);
    void SetArr(T arr);
};

template<typename T> Array<T>::Array()
{
}

template<typename T> Array<T>::~Array()
{
}

template<typename T> void Array<T>::SetArr(T arr)
{
    this->arr[i] = arr[i];
}

template<typename T> T Array<T>::GetArr(T arr)
{
    return this->arr[i];
}
