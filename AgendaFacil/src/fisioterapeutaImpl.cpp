#include "fisioterapeutaImpl.h"
#include <iostream>
#include <string>
#include <algorithm>

FisioterapeutaImpl::FisioterapeutaImpl(string nome) : nome(nome) {}

string FisioterapeutaImpl::getNome() const {
    return nome;
}

void FisioterapeutaImpl::setNome(const string& nome) {
    this->nome = nome;
}

void  FisioterapeutaImpl:: setSessao(Sessao* sessao){
    sessoes.push_back(sessao);
} 
void FisioterapeutaImpl:: deleteSessao(Sessao* sessao){
    for (auto it = sessoes.begin(); it!= sessoes.end(); it++)
    {
        if (*it == sessao)
        {
            sessoes.erase(it);
            return;
        }
    }
} 

vector<Sessao*>::iterator FisioterapeutaImpl::getSessaoInicio() {
    return sessoes.begin();
}

vector<Sessao*>::iterator FisioterapeutaImpl::getSessaoFim() {
    return sessoes.end();
}

FisioterapeutaImpl::FisioterapeutaImpl( Fisioterapeuta& f) {
    this->nome = f.getNome();
    for (auto it = f.getSessaoInicio(); it != f.getSessaoFim(); ++it) {
        sessoes.push_back(*it);
    }
}

Fisioterapeuta& FisioterapeutaImpl::operator=( Fisioterapeuta& f) {
    if (this != &f) {
        this->nome = f.getNome();
        sessoes.clear();
        for (auto it = f.getSessaoInicio(); it != f.getSessaoFim(); ++it) {
            sessoes.push_back(*it);
        }
    }
    return *this;
}
