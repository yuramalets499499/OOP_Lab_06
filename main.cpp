/*31. Створити шаблонний клас – одновимірний масив. Тип елементів масиву визначається
параметром шаблона (цілі числа, дійсні числа, символи або символьні рядки). Передбачити
функції для виконання таких операцій: введення елементів у масив, сортування, виведення
елементів масиву на екран.
 */

#include "Array.cpp"
#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    system("color F0");
    system("cls");
    
    int IntArr[5] = { 2,4,6,0,8 };
    ArrayF<int> i;
    
    i.Input(IntArr);
    i.Sort(IntArr);
    cout << "Відсортований масив цілих чисел :" << endl;
    i.Output(IntArr);
    
    double DoubleArr[5] = { 2.256, 42.02, 6.122, 230.223, 823.22 };
    ArrayF<double> d;
    
    d.Input(DoubleArr);
    d.Sort(DoubleArr);
    cout << "Відсортований масив дробових чисел :" << endl;
    d.Output(DoubleArr);
    
    char CharArr[6] = "adbhb";
    ArrayF<char> c;
    
    c.Input(CharArr);
    c.Sort(CharArr);
    cout << "Відсортований масив символів :" << endl;
    c.Output(CharArr);
    
    system("pause");
    return 0;
}
