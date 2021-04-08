//
// Created by marius on 2021-03-04.
//

#ifndef TURISM_1511_2021_SEJUR_H
#define TURISM_1511_2021_SEJUR_H

#include <vector>
#include <memory>
#include "Locatie.h"

class Sejur {
    std::vector <std::unique_ptr <Locatie>> locatii;
    bool ghid = false;
public:
    Sejur(std::vector <std::unique_ptr <Locatie>> &&locatii);
    void adauga_ghid();
    double pret_total();
};

#endif //TURISM_1511_2021_SEJUR_H
