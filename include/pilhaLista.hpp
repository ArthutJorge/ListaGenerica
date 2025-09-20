#ifndef PILHA_EM_LISTA
#define PILHA_EM_LISTA

#include "pilha.hpp"
#include "listacpt.hpp"

class PilhaEmLista : public Pilha {
private:
    ListaCompleta Elems;
    unsigned int Tam;

public:
    PilhaEmLista();
    void Empilha(void*);
    void* Desempilha();
    unsigned int Tamanho() const;
};

#endif
