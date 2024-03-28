#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

class Expense {
private:
    float amount;
    std::string category;
    std::string description;

public:
    // Конструктор
    Expense(float amt, const std::string& cat, const std::string& desc);

    // Перевантажений конструктор
    Expense();

    // Деструктор
    ~Expense();
};

#endif // EXPENSE_H
