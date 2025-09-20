#include "include/pilha.hpp"
char Pilha::eValida()
{
    return Valida;
}
char Pilha::DeuOverflow()
{
    return OvrFlw;
}
char Pilha::DeuUnderflow()
{
    return UdrFlw;
}
Pilha::Pilha() : Valida(1),
                 OvrFlw(0),
                 UdrFlw(0)
{
}