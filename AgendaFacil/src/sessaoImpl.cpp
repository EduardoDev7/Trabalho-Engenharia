#include "sessaoImpl.h"

SessaoImpl::SessaoImpl(Paciente* p, Fisioterapeuta* f, string d, string h) {
    paciente = p;
    fisio = f;
    data = d;
    horario = h;
}

Paciente* SessaoImpl::getPaciente() const {
    return paciente;
}

void SessaoImpl::setPaciente(Paciente* paciente) {
    this->paciente = paciente;
}

Fisioterapeuta* SessaoImpl::getFisioterapeuta() const {
    return fisio;
}

void SessaoImpl::setFisioterapeuta(Fisioterapeuta* fisio) {
    this->fisio = fisio;
}

string SessaoImpl::getData() const {
    return data;
}

void SessaoImpl::setData(string data) {
    this->data = data;
}

string SessaoImpl::getHorario() const {
    return horario;
}

void SessaoImpl::setHorario(string horario) {
    this->horario = horario;
}

// Cópia a partir de Sessao
SessaoImpl::SessaoImpl(const Sessao& s) {
    this->paciente = s.getPaciente();
    this->fisio = s.getFisioterapeuta();
    this->data = s.getData();
    this->horario = s.getHorario();
}

Sessao& SessaoImpl::operator=(const Sessao& s) {
    if (this != &s) {
        this->paciente = s.getPaciente();
        this->fisio = s.getFisioterapeuta();
        this->data = s.getData();
        this->horario = s.getHorario();
    }
    return *this;
}
