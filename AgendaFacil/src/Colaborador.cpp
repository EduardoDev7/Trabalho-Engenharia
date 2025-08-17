#include "ColaboradorImpl.h"

ColaboradorImpl::ColaboradorImpl(string nome) : nome(nome) {}

string ColaboradorImpl::getNome() const {
    return nome;
}

void ColaboradorImpl::setNome(const string& nome) {
    this->nome = nome;
}

vector<Sessao*>::iterator ColaboradorImpl::getSessaoInicio() {
    return sessoes.begin();
}

vector<Sessao*>::iterator ColaboradorImpl::getSessaoFim() {
    return sessoes.end();
}

ColaboradorImpl::ColaboradorImpl(Colaborador& c) {
    this->nome = c.getNome();
    for (auto it = c.getSessaoInicio(); it != c.getSessaoFim(); ++it) {
        sessoes.push_back(*it);
    }
}

Colaborador& ColaboradorImpl::operator=(Colaborador& c) {
    if (this != &c) {
        this->nome = c.getNome();
        sessoes.clear();
        for (auto it = c.getSessaoInicio(); it != c.getSessaoFim(); ++it) {
            sessoes.push_back(*it);
        }
    }
    return *this;
}

