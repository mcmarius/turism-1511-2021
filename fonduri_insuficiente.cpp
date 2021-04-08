//
// Created by marius on 2021-04-01.
//

#include "fonduri_insuficiente.h"

using namespace std::string_literals;

fonduri_insuficiente::fonduri_insuficiente(int actual, int necesar) noexcept
: runtime_error("Fonduri insuficiente: "s +
                "ati incercat sa platiti "s +
                std::to_string(necesar)
                + ", dar aveti doar "s +
                std::to_string(actual)) {}
