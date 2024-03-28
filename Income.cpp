//
// Created by G_I on 28.03.2024.
//

#include "Income.h"
class Income {
private:
    float amount;
    std::string source;

public:
    // Конструктор
    Income(float amt, const std::string& src)
            : amount(amt), source(src) {
        std::cout << "Income created." << std::endl;
    }

    // Перевантажений конструктор
    Income() : Income(0.0, "") {}

    // Деструктор
    ~Income() {
        std::cout << "Income destroyed." << std::endl;
    }
};
