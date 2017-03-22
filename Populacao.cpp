/* 
 * File:   Populacao.cpp
 * Author: ugohenrique
 * 
 * Created on 22 de Março de 2017, 11:40
 */

#include "Populacao.h"
#include <iostream>
#include <cstdlib>
using namespace std;
Populacao::Populacao(int n) {
    this->setPopulacao(n);
}

Populacao::Populacao(int n, int i) {
    this->setPopulacao(n,i);
}

Populacao::~Populacao() {
    delete this->populacao;
}
void Populacao::setPopulacao(int n) {
    this->n = n;
    this->populacao = new int[n];
    this->t1 = n;
    this->t2 = n - this->t1;
    for (int i = 0; i < this->getN(); i++) {
        this->populacao[i] = 0;
    }    
}

void Populacao::setPopulacao(int n, int i) {
    this->setPopulacao(n);
    this->t1 = i;
    this->t2 = n - i;
    for (int i = this->t1; i < this->n; i++) {
        this->populacao[i] = 1;
    }
}
int Populacao::getN(){
    return this->n;
}
int Populacao::getT1(){
    return this->t1;
}
int Populacao::getT2(){
    return this->t2;
}
void Populacao::update(){
    int repro, elim;
    repro = rand() % this->getN();
    elim = rand() % this->getN();
    this->populacao[elim] = this->populacao[repro];
    if(populacao[elim]== 0){
        this->t1++;
        this->t2--;
    }else{
        this->t1--;
        this->t2++;
    }
}
void Populacao::updateRelative(double r){
    int repro, elim;
    repro = r*(rand() % this->getN());
    elim =(1 - (r * (rand() % this->getN())));
    this->populacao[elim] = this->populacao[repro];
    if(populacao[elim]== 0){
        this->t1++;
        this->t2--;
    }else{
        this->t1--;
        this->t2++;
    }
}

void Populacao::showPopulacao(){
    for (int i = 0; i < this->getN(); i++) {
        cout << i << '\t' << this->populacao[i] << endl;
    }

}
void Populacao::moran(){
    int i = 1;
    cout << "i\t t1 \t t2 " << endl;
    while(this->getT1() != 0 && this->getT1() != this->getN()){
        this->update();
        cout << i << '\t' << this->getT1() << '\t' << this->getT2() << endl;
        i++;
    }
}
void Populacao::moranRelative(double r){
    int i = 1;
    cout << "i\t t1 \t t2 " << endl;
    while(this->getT1() != 0 && this->getT1() != this->getN()){
        this->updateRelative(r);
        cout << i << '\t' << this->getT1() << '\t' << this->getT2() << endl;
        i++;
    }
    
}