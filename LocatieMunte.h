//
// Created by marius on 2021-04-01.
//

#ifndef TURISM_1511_2021_LOCATIEMUNTE_H
#define TURISM_1511_2021_LOCATIEMUNTE_H

#include "Locatie.h"

class LocatieMunte : public Locatie {
public:
    LocatieMunte(const std::string &nume, int pret);

//    LocatieMunte(const LocatieMunte& l) : Locatie(l.nume, l.pret) {}
    int getPret() const override;
    std::unique_ptr <Locatie> clone() override;
};

#endif //TURISM_1511_2021_LOCATIEMUNTE_H
