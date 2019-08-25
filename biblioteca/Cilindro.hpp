//
// Created by fbeze on 24/08/2019.
//

#ifndef COMPUTACAOGRAFICA_CILINDRO_HPP
#define COMPUTACAOGRAFICA_CILINDRO_HPP
#include "biblioteca.hpp"

class Cilindro {
public:
    float altura;
    float raio;
    Ponto* centro;
    VectorXd normal;
    Cilindro(float pAltura, float pRaio, Ponto* pCentro, VectorXd pNormal);
    tuple<Ponto*,Ponto*> IntersecaoRetaCilindro(Ponto* pP0, VectorXd pVetor0, int pTamanho);
    bool ValidacaoPontoCilindro(Ponto* vertice, Ponto* p_int, int tamanho);


};


#endif //COMPUTACAOGRAFICA_CILINDRO_HPP