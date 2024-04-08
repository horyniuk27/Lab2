// Income.cpp
#include "income.h"
#include <iostream>

Income::Income(float amt, const std::string& src)
        : amount(amt), source(src) {
    std::cout << "Income created." << std::endl;
}

Income::Income() : Income(0.0, "") {}

Income::~Income() {
    std::cout << "Income destroyed." << std::endl;
}

float Income::getAmount() const {
    return amount;
}

std::string Income::getSource() const {
    return source;
}