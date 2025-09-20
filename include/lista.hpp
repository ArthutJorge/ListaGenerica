#ifndef LISTA
#define LISTA

class Lista {
protected:
    typedef struct sNo {
        void* Info;
        struct sNo* Prox;
    } sNo;

    typedef sNo* pNo;

    static char Erro;
    char Valida;
    pNo Inicio;
    void DescarteTudo();

public:
    static char DeuErro();
    char eValida() const;

    Lista();
    Lista(const Lista& L);
    ~Lista();
    Lista& operator=(const Lista& L);

    void Incorpore(void* data, int (*cmp)(void*, void*));
    virtual int Contem(void* data, int (*cmp)(void*, void*)) const;
    virtual void Descarte(void* data, int (*cmp)(void*, void*));
    virtual char* NaFormaDeString(char* (*toStr)(void*)) const;
};

#endif
