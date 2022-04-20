//
// Created by Jonathan Betancur on 19/04/2022.
//

#include "SistemaO.h"
#include <string>

string SistemaO::verificar() {
#ifdef _WIN32
    return "El SO es Windows\n";
#endif
#ifdef __APPLE__
    return "El SO es MacOs\n";
#endif
#ifdef __linux__
    return "El SO es Linux\n";
#endif
}

SistemaO ::SistemaO() = default;