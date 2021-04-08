//
// Created by marius on 2021-04-01.
//

#ifndef TURISM_1511_2021_LOCATIEMARE_H
#define TURISM_1511_2021_LOCATIEMARE_H

#include "Locatie.h"

class LocatieMare : public Locatie {
public:
    LocatieMare(const std::string &nume, int pret);
//    LocatieMare(const LocatieMare& l) : Locatie(l.nume, l.pret) {}
    int getPret() const override;
    std::unique_ptr <Locatie> clone() override;
};

#endif //TURISM_1511_2021_LOCATIEMARE_H
