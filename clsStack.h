#pragma once
#include <iostream>
#include "clsQueue.h"

using namespace std;

template <class T>
class clsStack : public clsQueue<T>
{
public:
    void Push(T Value) { clsQueue<T>::InsertAtFront(Value); }
    T Top() { return clsQueue<T>::Front(); }
    T Bottom() { return clsQueue<T>::Back(); }
};

