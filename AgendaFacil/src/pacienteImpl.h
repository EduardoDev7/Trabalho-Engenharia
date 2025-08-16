#ifndef PACIENTEIMPL_H
#define PACIENTEIMPL_H

#include <iostream>
#include "paciente.h"
using namespace std;

class PacienteImpl : public Paciente{
protected:
    string nome;
    string email;

public:
    PacienteImpl() = default;

    virtual ~PacienteImpl() = default;

    PacienteImpl(const string& nome, const string& email);

    string getNome() const;

    void setNome(const string& nome);

    string getEmail() const;

    void setEmail(const string& email);

protected:

    PacienteImpl (const Paciente& p);

    Paciente& operator=(const Paciente& p);
};

#endif
