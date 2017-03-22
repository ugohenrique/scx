/* 
 * File:   main.cpp
 * Author: ugohenrique
 *
 * Created on 22 de Março de 2017, 11:40
 */

#include <cstdlib>
#include <iostream>

#include "Populacao.h"
#include "Dinamica.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Populacao pop1(10,4);
    Populacao pop2(5);
    pop1.showPopulacao();
    cout << endl << endl;
    pop2.showPopulacao();
    Dinamica dinamica;
    cout << "Result: " << dinamica.executar() << endl;
    
    return 0;
}

