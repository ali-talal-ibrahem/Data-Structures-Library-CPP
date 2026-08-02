# 📚 Data Structures Library for C++

> 📖 **Detailed Documentation & Tutorials**  
> For full explanations, code walkthroughs, and easy navigation between topics, please visit the **[Project Wiki](https://github.com/ali-talal-ibrahem/#/wiki)**.
>

<div align="center">

![C++](https://img.shields.io/badge/C%2B%2B-17%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Template](https://img.shields.io/badge/Pattern-Template%20Library-FF6B6B?style=for-the-badge)
![Learning](https://img.shields.io/badge/Focus-Data%20Structures-4EAA25?style=for-the-badge)
![Open%20Source](https://img.shields.io/badge/License-Open%20Source-4EAA25?style=for-the-badge)

</div>


## 🧩 Project Overview

This repository brings together a set of reusable C++ data structure libraries in a single place. Each library is implemented as a clean header-based class and is designed to help students, beginners, and developers understand the logic behind common data structures and their practical use in real projects.

The goal of this repo is simple: provide ready-to-use, easy-to-understand building blocks for:

- dynamic arrays
- queues
- stacks
- linked lists
- string-state management
- basic queue-line simulation

Each class is designed to be lightweight, easy to include, and easy to extend for your own applications.

---

## 📚 Included Libraries

| Library | Description | Notes |
|---|---|---|
| `clsDynamicArray` | A dynamic array implementation with resizing and insertion/deletion support | Base container used by other structures |
| `clsMyString` | A string wrapper with undo/redo behavior | Uses `std::stack` |
| `clsQueueArr` | Queue built on a dynamic array | FIFO implementation |
| `clsStackArr` | Stack built on an array-based queue structure | LIFO implementation |
| `clsQueueLine` | Service line / ticket management system | Uses queue and date/time data |
| `clsStack` | Stack interface built on queue-based logic | Depends on the embedded queue layer |
| `clsDblLinkedList` | Doubly linked list with insertion, deletion, search, and reversal | Core linked-list structure |

---

## 🏗️ Why This Repo Exists

This library collection is useful when you want to:

- learn data structures in C++ without needing large external frameworks
- reuse tested template classes in small personal projects
- build custom containers while keeping the code understandable
- practice object-oriented programming and abstraction

Instead of rewriting common structures every time, you can include the relevant header in your project and start using it immediately.

---

## 🚀 How to Use It in Your Projects

### 1. Copy the repository or add it to your include path

You can either:

- clone this repo into your project folder, or
- add the folder containing the headers to your compiler include path

### 2. Include the header you want

```cpp
#include "clsDynamicArray.h"
#include "clsQueueArr.h"
#include "clsStackArr.h"
#include "clsDblLinkedList.h"
```

### 3. Create an instance of the class

```cpp
#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main() {
    clsDynamicArray<int> arr(3);

    arr.SetItem(0, 10);
    arr.SetItem(1, 20);
    arr.SetItem(2, 30);

    arr.InsertAtEnd(40);
    arr.PrintList();

    return 0;
}
```

### 4. Use the library methods

Examples:

```cpp
clsQueueArr<int> q;
q.Push(5);
q.Push(10);
q.Pop();

clsStackArr<int> st;
st.Push(1);
st.Push(2);
int top = st.Top();

clsDblLinkedList<int> list;
list.InsertAtBeginning(8);
list.InsertAtEnd(15);
list.PrintList();
```

---

## 🔗 Dependency Notes

Some of the libraries in this repo depend on others:

- `clsQueueArr` depends on `clsDynamicArray`
- `clsStackArr` depends on `clsQueueArr`
- `clsStack` depends on the queue-based implementation it is embedded in
- `clsQueueLine` depends on external utilities such as date/time helpers and standard C++ containers

This structure follows a clean layered design where lower-level storage implementations support higher-level abstract structures.

---

## 🧠 Example Use Cases

This project can be used for:

- learning how arrays and linked lists work internally
- implementing queue-based task handling
- building stack-based expression processing
- managing waiting lines or ticket systems
- experimenting with generic C++ templates

Examples of practical usage include:

- command processing systems
- task scheduling
- undo/redo interfaces
- simple simulation programs
- competitive programming practice

---

## 🛠️ Project Structure

```text
Data-Structres-Library-CPP/
├── clsDynamicArray.h
├── clsMyString.h
├── clsQueueArr.h
├── clsQueueLine.h
├── clsStack.h
├── clsStackArr.h
├── clsDblLinkedList.h
├── README.md
└── ...
```

---

## ✅ Recommendation

If you are learning C++ data structures, this repository is a great starting point because it gives you:

- reusable code
- easy-to-read implementations
- header-only templates
- a practical project structure
- a clear path to understanding how common structures work

You can use these classes directly in your own code or adapt them as a base for larger projects.

---

## 📌 Summary

This repository is a compact C++ data structures library collection that gathers reusable implementations in one place. It is designed to help you understand, learn, and apply common structures in real software projects with minimal setup and maximum clarity.

If you want to build on it, simply include the relevant header and start using the class in your application.

---

<div align="center">

Made with ❤️ for learning and building with C++.

</div>
