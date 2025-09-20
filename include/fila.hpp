#ifndef FILA
#define FILA

class Fila {
protected:
    char Valida, OvrFlw, UdrFlw;

public:
    Fila();
    char eValida();
    char DeuOverflow();
    char DeuUnderflow();

    virtual void Enfileira(void*) = 0;
    virtual void* Desenfileira() = 0;
    virtual unsigned int Tamanho() const = 0;
};

#endif
