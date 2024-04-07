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

    // Методи доступу до полів класу
    float getAmount() const;
    std::string getCategory() const;
    std::string getDescription() const;

    // Унарний оператор "-"
    Expense operator-() const;

    // Бінарний оператор "+"
    Expense operator+(const Expense& other) const;

    // Дружня функція для перевантаження оператора виводу в потік
    friend std::ostream& operator<<(std::ostream& os, const Expense& exp);

    // Дружня функція для перевантаження оператора вводу з потоку
    friend std::istream& operator>>(std::istream& is, Expense& exp);
};

#endif // EXPENSE_H
