#ifndef RECEPCIONISTA_H
#define RECEPCIONISTA_H

#include <iostream>
using namespace std;

class Recepcionista {
public:
    virtual ~Recepcionista() = default;

    virtual string getNome() const = 0;
    virtual void setNome(const string& nome) = 0;

    virtual string getCpf() const = 0;
    virtual void setCpf(const string& cpf) = 0;

    virtual string getDataNascimento() const = 0;
    virtual void setDataNascimento(const string& dataNascimento) = 0;

    virtual string getTurnoTrabalho() const = 0;
    virtual void setTurnoTrabalho(const string& turnoTrabalho) = 0;
};

#endif
