# Grade Check Program (Python Version) — Explanation

This Python program is a direct translation of the original **C++ Grade Check program**. The goal is to take the same logic used in C++ and rewrite it using Python syntax and conventions.

---

## 🔹 What This Program Does

- Prompts the user to enter **five numeric grades**
- Stores these values in a **list** (instead of an array)
- Calculates:
  - **Total score** by summing all grades
  - **Average score** by dividing the total by the number of grades
- Determines a **letter grade** based on the average:
  - 90+ → A  
  - 80–89 → B  
  - 70–79 → C  
  - 60–69 → D  
  - Below 60 → F

---

## 🔹 What Changed From C++ to Python

| Feature | C++ Approach | Python Equivalent |
|---------|-------------|------------------|
| Arrays | `float grades[5];` | `grades = []` (dynamic list) |
| Console Input | `cin >> value` | `input()` + type casting |
| Loops | `for(int i=0...)` | `for i in range()` |
| Printing | `cout` and `printf` | `print()` |
| No header files needed | `#include <iostream>` | Built-in functions |

---

## 🔹 Why This Translation Matters

This exercise helps students:

- Compare C++ and Python syntax side-by-side
- Understand how logic remains the same across languages
- Practice rewriting programs instead of starting from scratch
- Learn Python fundamentals while reinforcing C++ concepts

---

## 🧠 Key Concepts Practiced

- Lists and iteration
- User input handling
- Mathematical operations
- Conditional statements
- Output formatting

---

## 🎯 Summary

This program performs the same grading logic as the original C++ version, but rewritten using Python syntax. It helps students recognize that while programming languages differ, core logic and algorithms remain transferable.
