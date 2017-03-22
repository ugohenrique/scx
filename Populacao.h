/* 
 * File:   Populacao.h
 * Author: ugohenrique
 *
 * Created on 22 de Março de 2017, 11:40
 */

#ifndef POPULACAO_H
#define	POPULACAO_H

class Populacao {
public:
    Populacao(int n);
    Populacao(int n, int i);
    void setPopulacao(int n);
    void setPopulacao(int n,int i);
    int getN();
    int getT1();
    int getT2();
    void update();
    void updateRelative(double r);
    void moran();
    void moranRelative(double r);
    void showPopulacao();
    virtual ~Populacao();
private:
    int n;
    int t1,t2;
    int * populacao;
    
};

#endif	/* POPULACAO_H */

