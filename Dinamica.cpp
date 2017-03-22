/* 
 * File:   Dinamica.cpp
 * Author: ugohenrique
 * 
 * Created on 22 de Março de 2017, 12:15
 */

#include <stdlib.h>

#include "Dinamica.h"
#include "Populacao.h"

Dinamica::Dinamica() {
   
}

Dinamica::Dinamica(const Dinamica& orig) {
}

Dinamica::~Dinamica() {
    
}
int Dinamica::executar(){
     Populacao pop(40,15);
     pop.moran();
     Populacao poprel(40,15);
     poprel.moranRelative(0.02);
    
     return EXIT_SUCCESS;
}
