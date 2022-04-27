#include "pindll.h"

Pindll::Pindll()
{
   pengine = new engine;
}

Pindll::~Pindll()
{
    delete pengine;
}

void Pindll::login()
{
    pengine->show();
}
