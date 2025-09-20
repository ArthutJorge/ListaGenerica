#include "include/filaLista.hpp"
#include <cstddef>

FilaEmLista::FilaEmLista() : Fila(), Tam(0) {}

void FilaEmLista::Enfileira(void* E) {
    OvrFlw = 0;
    Elems.IncorporeNoFinal(E);
    Tam++;
}

void* FilaEmLista::Desenfileira() {
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

unsigned int FilaEmLista::Tamanho() const {
    return Tam;
}
