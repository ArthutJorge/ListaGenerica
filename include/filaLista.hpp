#ifndef FILA_EM_LISTA
#define FILA_EM_LISTA

#include "fila.hpp"
#include "listacpt.hpp"

class FilaEmLista : public Fila {
private:
    ListaCompleta Elems;
    unsigned int Tam;

public:
    FilaEmLista();
    void Enfileira(void*);
    void* Desenfileira();
    unsigned int Tamanho() const;
};

#endif
