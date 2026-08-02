#pragma once
#include <iostream>
#include "clsQueueArr.h"

using namespace std;

template <class T>
class clsStackArr : public clsQueueArr<T>
{
public:
    void Push(T Value) { clsQueueArr<T>::InsertAtFront(Value); }
    T Top() { return clsQueueArr<T>::Front(); }
    T Bottom() { return clsQueueArr<T>::Back(); }
};

