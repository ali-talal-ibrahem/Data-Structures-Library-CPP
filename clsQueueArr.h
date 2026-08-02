#pragma once
#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

template <class T>
class clsQueueArr {
protected:
    clsDynamicArray<T> _MyList;

public:
    void Push(T Value) { _MyList.InsertAtEnd(Value); }
    void Pop() { _MyList.DeleteFirstItem(); }
    int Size() { return _MyList.Size(); }
    bool IsEmpty() { return _MyList.IsEmpty(); }
    T Front() { return _MyList.GetItem(0); }
    T Back() { return _MyList.GetItem(Size() - 1); }
    T GetItem(int Index) { return _MyList.GetItem(Index); }
    void Revers() { return _MyList.Revers(); }
    void UpdateItem(int Index, T NewValue) { _MyList.SetItem(Index, NewValue); }
    void InsertAtAfter(T Index, T NewValue) { _MyList.InsertAfter(Index, NewValue); }
    void InsertAtFront(T Value) { _MyList.InsertAtBegining(Value); }
    void InsertAtBack(T Value) { _MyList.InsertAtEnd(); }
    void Clear() { _MyList.Clear(); }
    void Print() { _MyList.PrintList(); }
};