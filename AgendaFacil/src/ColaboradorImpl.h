#ifndef COLABORADOR_IMPL_H
#define COLABORADOR_IMPL_H

#include "Colaborador.h"

class ColaboradorImpl : public Colaborador {
protected: 
    string nome;
    vector<Sessao*> sessoes;

public:
    ColaboradorImpl() = default;

    ColaboradorImpl(string nome);

    ~ColaboradorImpl() = default;

    string getNome() const override;

    void setNome(const string& nome) override;

    vector<Sessao*>::iterator getSessaoInicio () override;

    vector<Sessao*>::iterator getSessaoFim () override;

private: 
    ColaboradorImpl(Colaborador& c);

    Colaborador& operator=(Colaborador& c);
};

#endif

