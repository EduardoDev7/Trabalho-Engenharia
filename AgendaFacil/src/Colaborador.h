#ifndef COLABORADOR_H
#define COLABORADOR_H

#include <iostream>
#include <vector>
#include "sessao.h"
using namespace std;

class Colaborador {

public:
    virtual ~Colaborador() = default;

    virtual string getNome() const = 0;

    virtual void setNome(const string& nome) = 0;

    virtual vector<Sessao*>::iterator getSessaoInicio () = 0;

    virtual vector<Sessao*>::iterator getSessaoFim () = 0;
};

#endif
