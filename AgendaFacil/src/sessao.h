#ifndef SESSAO_H
#define SESSAO_H

#include <iostream>
#include "paciente.h"
#include "fisioterapeuta.h"

using namespace std;

class Sessao {
public:
    virtual ~Sessao() = default;

    // Corrigido: agora usa ponteiros
    virtual Paciente* getPaciente() const = 0;
    virtual void setPaciente(Paciente* paciente) = 0;

    virtual Fisioterapeuta* getFisioterapeuta() const = 0;
    virtual void setFisioterapeuta(Fisioterapeuta* fisio) = 0;

    virtual string getData() const = 0;
    virtual void setData(string data) = 0;

    virtual string getHorario() const = 0;
    virtual void setHorario(string horario) = 0;
};

#endif
