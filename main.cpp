#include <iostream>
#include <cstring>
#include "include/pilhaLista.hpp"
#include "include/filaLista.hpp"
#include "include/listacpt.hpp" 

struct Pessoa {
    char nome[20];
    int idade;
};

int cmpPessoa(void* a, void* b) {
    Pessoa* pa = (Pessoa*)a;
    Pessoa* pb = (Pessoa*)b;
    if (pa->idade < pb->idade) return -1;
    if (pa->idade > pb->idade) return 1;
    return 0;
}

char* pessoaToStr(void* p) {
    static char buf[64];
    Pessoa* pessoa = (Pessoa*)p;
    sprintf(buf, "%s(%d)", pessoa->nome, pessoa->idade);
    return buf;
}

int main() {
    Pilha* P = new PilhaEmLista();
    std::cout << "Teste PilhaEmLista:\n";

    Pessoa pessoas[3] = { {"Valderrara!", -15}, {"Ionico", 25}, {"TaCancado", 931} };

    for (int i = 0; i < 3; i++) {
        Pessoa* p = new Pessoa(pessoas[i]);
        P->Empilha(p);
        std::cout << p->nome << " ";
    }

    std::cout << "\nDesempilhando: ";
    while (P->Tamanho() > 0) {
        Pessoa* p = (Pessoa*)P->Desempilha();
        std::cout << p->nome << " ";
        delete p;
    }
    delete P;

    Fila* F = new FilaEmLista();
    std::cout << "\n\nTeste FilaEmLista:\n";

    for (int i = 0; i < 3; i++) {
        Pessoa* p = new Pessoa(pessoas[i]);
        F->Enfileira(p);
        std::cout << p->nome << " ";
    }

    std::cout << "\nDesenfileirando: ";
    while (F->Tamanho() > 0) {
        Pessoa* p = (Pessoa*)F->Desenfileira();
        std::cout << p->nome << " ";
        delete p;
    }
    delete F;

    ListaCompleta L;
    std::cout << "\n\nTeste ListaCompleta:\n";

    for (int i = 0; i < 3; i++) {
        Pessoa* p = new Pessoa(pessoas[i]);
        L.Incorpore(p, cmpPessoa);  // insere em ordem
    }

    std::cout << "ListaCompleta:\n";
    std::cout << L.NaFormaDeString(pessoaToStr) << "\n";

    Pessoa alvo;
    strcpy(alvo.nome, "Ionico");
    alvo.idade = 25;
    L.Descarte(&alvo, cmpPessoa);

    std::cout << "ListaCompleta apos remocao:\n";
    std::cout << L.NaFormaDeString(pessoaToStr) << "\n";

    return 0;
}
