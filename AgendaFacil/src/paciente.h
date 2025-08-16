#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
using namespace std;

class Paciente {
public:
    virtual ~Paciente() = default;

    virtual string getNome() const = 0;

    virtual void setNome(const string& nome) = 0;

    virtual string getEmail() const = 0;

    virtual void setEmail(const string& email) = 0;
};

#endif
