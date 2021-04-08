//
// Created by marius on 2021-03-04.
//

#ifndef TURISM_1511_2021_TURIST_H
#define TURISM_1511_2021_TURIST_H

#include <string>
#include <ostream>
#include "Sejur.h"
#include "Obiectiv.h"

class Turist {
    std::string nume;
    int buget;
    std::vector <Obiectiv> obiective;
public:
    Turist(std::string nume, int buget);
    void planifica(const Sejur &sejur);
    void viziteaza(const Obiectiv &obiectiv);
    void adauga(const Obiectiv &obiectiv);
    friend std::ostream &operator<<(std::ostream &os, const Turist &turist);
};

#endif //TURISM_1511_2021_TURIST_H
