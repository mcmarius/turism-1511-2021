//
// Created by marius on 2021-03-04.
//

#include <iostream>
#include "Obiectiv.h"

Obiectiv::Obiectiv(const Obiectiv &ob) : nume(ob.nume) {
    std::cout << "cc obiectiv " << nume << "\n";
}

Obiectiv::Obiectiv(const std::string &nume) : nume(nume) {}

std::ostream &operator<<(std::ostream &os, const Obiectiv &obiectiv) {
    os << "nume: " << obiectiv.nume << "\n";
    return os;
}

Obiectiv &Obiectiv::operator=(const Obiectiv &ob) {
    if(this != &ob) {  /// beware of self assignment
        nume = ob.nume;
    }
    std::cout << "op= obiectiv " << nume << "\n";
    return *this;
}

Obiectiv::~Obiectiv() {
    std::cout << "destructor obiectiv " + nume + "\n";
}
