#ifndef FISIOTERAPEUTA_H
#define FISIOTERAPEUTA_H

#include <iostream>
#include <vector>
#include "sessao.h"
using namespace std;

class Fisioterapeuta{

public:
    virtual ~Fisioterapeuta() = default;

    virtual string getNome() const = 0;

    virtual void setNome(const string& nome) = 0;

    virtual vector<Sessao*>::iterator getSessaoInicio () = 0;

    virtual vector<Sessao*>::iterator getSessaoFim () = 0;
};

#endif