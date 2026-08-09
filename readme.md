# CPP Module 00 — Namespaces, Classes & I/O Streams

![C++](https://img.shields.io/badge/C%2B%2B-98-00599C?style=flat&logo=cplusplus&logoColor=white)
![42](https://img.shields.io/badge/42-School-000000?style=flat)
![Status](https://img.shields.io/badge/status-complete-success?style=flat)

> Part of the 42 School C++ Piscine. The first step from C into C++: classes, member functions, stdio streams, initialization lists, `static`, and `const`.

---

## Overview

This module is the entry point into Object-Oriented Programming. Coming from a C background, it replaces familiar tools (`printf`, `char[]`, `malloc`) with their C++ counterparts (`std::cout`, `std::string`, and classes) and introduces the fundamental building block of everything that follows: the **class**.

All code compiles under the C++98 standard with no external libraries.

---

## Concepts Covered

| Concept | Description |
|---------|-------------|
| I/O streams | `std::cout`, `std::cin`, `std::getline` |
| `std::string` | Dynamic strings replacing C-style `char[]` |
| Classes | Encapsulating data (attributes) and behavior (methods) |
| Access specifiers | `private` vs `public` (encapsulation) |
| Constructors / destructors | Object lifecycle management |
| Getters / setters | Controlled access to private data |
| Scope operator `::` | Defining methods outside the class |
| Include guards | Preventing double inclusion |
| `static` members | Data shared across all instances |
| `const` correctness | Methods that don't modify the object |
| Stream formatting | `<iomanip>` — `setw`, `setfill` |

---

## Exercises

### ex00 — Megaphone

A short warm-up. Takes command-line arguments and prints them back in **uppercase**.

```bash
./megaphone "hello world"       # HELLO WORLD
./megaphone                     # * LOUD AND UNBEARABLE FEEDBACK NOISE *
```

Focus: `std::string`, `std::cout`, iterating over `argv`.

### ex01 — My Awesome PhoneBook

A contact book split into **two classes**:

- `Contact` — five string fields (first name, last name, nickname, phone number, darkest secret) with getters/setters
- `PhoneBook` — stores up to **8 contacts**, replacing the oldest when full

Commands: `ADD`, `SEARCH`, `EXIT`. The search view prints a formatted table with 10-character columns, truncating longer values. Empty and whitespace-only fields are rejected, and end-of-file (Ctrl+D) is handled gracefully.

Focus: classes, encapsulation, `<iomanip>` formatting, input validation.

### ex02 — The Job Of Your Dreams

Reconstruction of a lost `Account.cpp` from its header and an execution log. The class tracks bank accounts using **static members** shared across all instances (total accounts, total amount, total deposits, total withdrawals).

Focus: `static` attributes and methods, timestamps with `<ctime>`, matching an exact output format.

---

## Build & Run

Each exercise is self-contained in its own directory.

```bash
cd ex01
make
./phonebook       # executable name may differ per exercise
```

Available Makefile rules:

```bash
make        # compile
make clean  # remove object files
make fclean # remove object files and executable
make re     # rebuild from scratch
```

### Compilation flags

```
c++ -Wall -Wextra -Werror -std=c++98
```

---

## Key Takeaways

- A **class** bundles data and the functions that operate on it; keeping attributes `private` and exposing `public` methods is the essence of encapsulation.
- **`static`** members belong to the class itself, not to any single object — perfect for counters and shared totals.
- The `::` **scope operator** ties a method definition in the `.cpp` back to its class declaration in the `.hpp`.

---

## Author

**memillet** — 42 School