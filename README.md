# 📉 C++ Base Class Pointers & Early Binding

## 📖 About the Project
This project explores the strict rules of inheritance and pointers in C++. It demonstrates the default compiler behavior known as **Early Binding** (Compile-Time Binding), where a pointer's declared type dictates which member functions and variables can be accessed, regardless of the actual object type instantiated in heap/stack memory.

## ✨ Features
*   **Pointer Downgrading:** Successfully points a Base Class pointer (`StandardPlayer*`) to a Derived Class object (`ProPlayer`).
*   **Scope Limitation:** Proves via compiler error isolation that a Base pointer cannot access Derived-specific members (e.g., `dashSpeed`), enforcing strict memory access rules.
*   **Early Binding Demonstration:** Validates that when overridden functions (like `display()`) are called via a Base pointer, the compiler binds the Base class's function version prior to runtime.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Inheritance, Pointers to Derived Classes, Compile-Time Binding, Method Overriding constraints.

## 🛠️ How to Run
1. Clone this repository and compile:
   ```bash
   g++ base_pointers.cpp -o base_pointers
