#ifndef LISTA_COMPLETA
#define LISTA_COMPLETA

#include "lista.hpp"

class ListaCompleta : public Lista {
public:
    void IncorporeNoInicio(void* data);
    void* DescarteDoInicio();

    void IncorporeNoFinal(void* data);
    void* DescarteDoFinal();

    int Contem(void* data, int (*cmp)(void*, void*)) const;
    void Descarte(void* data, int (*cmp)(void*, void*));

    char* NaFormaDeString(char* (*toStr)(void*)) const;
};

#endif
