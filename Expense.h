// Expense.h
#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

class Expense {
private:
    float amount;
    std::string category;
    std::string description;

public:
    Expense(float amt, const std::string& cat, const std::string& desc);
    Expense();
    ~Expense();
    float getAmount() const;
    std::string getCategory() const;
    std::string getDescription() const;
    Expense operator-() const;
    Expense operator+(const Expense& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Expense& exp);
    friend std::istream& operator>>(std::istream& is, Expense& exp);
};

#endif // EXPENSE_H