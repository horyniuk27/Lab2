#include "expense.h"
#include <iostream>

Expense::Expense(float amt, const std::string& cat, const std::string& desc)
        : amount(amt), category(cat), description(desc) {
    std::cout << "Expense created." << std::endl;
}

Expense::Expense() : Expense(0.0, "", "") {}

Expense::~Expense() {
    std::cout << "Expense destroyed." << std::endl;
}

float Expense::getAmount() const {
    return amount;
}

std::string Expense::getCategory() const {
    return category;
}

std::string Expense::getDescription() const {
    return description;
}

Expense Expense::operator-() const {
    return Expense(-amount, category, description);
}

Expense Expense::operator+(const Expense& other) const {
    return Expense(amount + other.amount, category + " and " + other.category, description + " and " + other.description);
}

std::ostream& operator<<(std::ostream& os, const Expense& exp) {
    os << "Amount: " << exp.getAmount() << ", Category: " << exp.getCategory() << ", Description: " << exp.getDescription();
    return os;
}
