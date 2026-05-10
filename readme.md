## CPP Module 00
 
> **Namespaces, classes, member functions, stdio streams, initialization lists, static, const**
 
### Exercices
 
| Exercice | Nom | Description |
|----------|-----|-------------|
| ex00 | **Megaphone** | Convertit les arguments en majuscules |
|nd (ADD, SEARCH, EXIT) : ADD
Enter the FirstName ex01 | **My Awesome PhoneBook** | Répertoire téléphonique avec 2 classes |
| ex02 | **The Job Of Your Dreams** | Recréation d'un fichier Account.cpp perdu |
 
### Concepts appris
 
- `std::cout` / `std::cin` / `std::getline`
- `std::string` et ses méthodes
- **Classes** : attributs privés, méthodes publiques
- **Constructeurs** et **destructeurs**
- **Getters** et **setters**
- **Variables static** partagées entre objets
- **Include guards** (`#ifndef / #define / #endif`)
- Formatage avec `<iomanip>` (`setw`, `setfill`)
- Timestamp avec `<ctime>`
- Séparation `.hpp` / `.cpp`
### ex00 — Megaphone
 
```bash
./megaphone "hello world"
# → HELLO WORLD
 
./megaphone
# → * LOUD AND UNBEARABLE FEEDBACK NOISE *
```
 
### ex01 — PhoneBook
 
```bash
./phonebook
Enter a command (ADD, SEARCH, EXIT) : ADD
Enter the FirstName : Alice
...
Enter a command (ADD, SEARCH, EXIT) : SEARCH
```
 
- Maximum **8 contacts** (le plus ancien est remplacé)
- Affichage en colonnes de **10 caractères** avec troncature
- Champs vides et espaces rejetés
### ex02 — Account
 
Recréation de `Account.cpp` à partir du header et d'un fichier log.
 
```
[20260420_204817] index:0;amount:42;created
[20260420_204817] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
[20260420_204817] index:0;amount:47;closed
```

---
*42 School — memillet*
