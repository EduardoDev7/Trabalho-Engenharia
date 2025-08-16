#include "pacienteImpl.h"

PacienteImpl :: PacienteImpl(const string& nome, const string& email)
{
    this->nome = nome;
    this->email = email;
}

string PacienteImpl :: getNome() const
{
    return nome;
}

void PacienteImpl :: setNome(const string& nome)
{
    this->nome = nome;
}

string PacienteImpl :: getEmail() const
{
    return email;
}

void PacienteImpl :: setEmail(const string& email)
{
    this->email = email;
}

PacienteImpl::PacienteImpl(const Paciente& p) {
    nome = p.getNome();
    email = p.getEmail();
}

// Operador de atribuição
Paciente& PacienteImpl::operator=(const Paciente& p) {
    if (this != &p) { 
        nome = p.getNome();
        email = p.getEmail();
    }
    return *this;
}