#ifndef PILHA
#define PILHA

class Pilha {
protected:
    char Valida, OvrFlw, UdrFlw;

public:
    char eValida();
    char DeuOverflow();
    char DeuUnderflow();
    Pilha();

    virtual void Empilha(void*) = 0;
    virtual void* Desempilha() = 0;
    virtual unsigned int Tamanho() const = 0;
};

#endif
