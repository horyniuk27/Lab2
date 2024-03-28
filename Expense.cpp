//
// Created by G_I on 28.03.2024.
//

#include "Expense.h"
#include <iostream>
#include <string>

class Expense {
private:
    float amount;
    std::string category;
    std::string description;

public:
    // Конструктор
    Expense(float amt, const std::string& cat, const std::string& desc)
            : amount(amt), category(cat), description(desc) {
        std::cout << "Expense created." << std::endl;
    }

    // Перевантажений конструктор
    Expense() : Expense(0.0, "", "") {}

    // Деструктор
    ~Expense() {
        std::cout << "Expense destroyed." << std::endl;
    }
};
