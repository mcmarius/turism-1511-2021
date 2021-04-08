//
// Created by marius on 2021-04-01.
//

#ifndef TURISM_1511_2021_FONDURI_INSUFICIENTE_H
#define TURISM_1511_2021_FONDURI_INSUFICIENTE_H

#include <stdexcept>

class fonduri_insuficiente : public std::runtime_error {
public:
    fonduri_insuficiente(int actual, int necesar) noexcept;
};

#endif //TURISM_1511_2021_FONDURI_INSUFICIENTE_H
