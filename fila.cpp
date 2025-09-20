#include "include/fila.hpp"

Fila::Fila() : Valida(1), OvrFlw(0), UdrFlw(0) {}

char Fila::eValida() { return Valida; }
char Fila::DeuOverflow() { return OvrFlw; }
char Fila::DeuUnderflow() { return UdrFlw; }
