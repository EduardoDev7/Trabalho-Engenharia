#include "recepcionistaImpl.h"

RecepcionistaImpl::RecepcionistaImpl()
    : nome(""), cpf(""), dataNascimento(""), turnoTrabalho("") {}

RecepcionistaImpl::RecepcionistaImpl(const std::string& nome,
                                     const std::string& cpf,
                                     const std::string& dataNascimento,
                                     const std::string& turnoTrabalho)
    : nome(nome), cpf(cpf), dataNascimento(dataNascimento), turnoTrabalho(turnoTrabalho) {}

RecepcionistaImpl::RecepcionistaImpl(const RecepcionistaImpl& other)
    : nome(other.nome),
      cpf(other.cpf),
      dataNascimento(other.dataNascimento),
      turnoTrabalho(other.turnoTrabalho) {}

RecepcionistaImpl::~RecepcionistaImpl() {
}

RecepcionistaImpl& RecepcionistaImpl::operator=(const RecepcionistaImpl& other) {
    if (this != &other) {
        nome = other.nome;
        cpf = other.cpf;
        dataNascimento = other.dataNascimento;
        turnoTrabalho = other.turnoTrabalho;
    }
    return *this;
}

std::string RecepcionistaImpl::getNome() const {
    return nome;
}

std::string RecepcionistaImpl::getCpf() const {
    return cpf;
}

std::string RecepcionistaImpl::getDataNascimento() const {
    return dataNascimento;
}

std::string RecepcionistaImpl::getTurnoTrabalho() const {
    return turnoTrabalho;
}

void RecepcionistaImpl::setNome(const std::string& n) {
    nome = n;
}

void RecepcionistaImpl::setCpf(const std::string& c) {
    cpf = c;
}

void RecepcionistaImpl::setDataNascimento(const std::string& data) {
    dataNascimento = data;
}

void RecepcionistaImpl::setTurnoTrabalho(const std::string& turno) {
    turnoTrabalho = turno;
}
