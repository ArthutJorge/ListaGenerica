#include "include/pilhaLista.hpp"
#include <cstddef>

PilhaEmLista::PilhaEmLista() : Pilha(), Tam(0) {}

void PilhaEmLista::Empilha(void* E) {
    UdrFlw = 0;
    Elems.IncorporeNoInicio(E);
    Tam++;
}

void* PilhaEmLista::Desempilha() {
    if (!Valida)
        return NULL;

    if (Tamanho() == 0) {
        UdrFlw = 1;
        return NULL;
    }

    UdrFlw = 0;
    Tam--;
    return Elems.DescarteDoInicio();
}

unsigned int PilhaEmLista::Tamanho() const {
    return Tam;
}
