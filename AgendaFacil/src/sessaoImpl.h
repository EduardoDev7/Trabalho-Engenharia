#ifndef SESSAO_IMPL_H
#define SESSAO_IMPL_H

#include "sessao.h"

class SessaoImpl : public Sessao {
protected:
    Paciente* paciente;
    Fisioterapeuta* fisio;
    string data;
    string horario;

public:
    SessaoImpl() = default;

    SessaoImpl(Paciente* p = nullptr, Fisioterapeuta* f = nullptr,
               string d = "", string h = "");

    virtual ~SessaoImpl() = default;

    // Agora marcados como override
    Paciente* getPaciente() const override;
    void setPaciente(Paciente* paciente) override;

    Fisioterapeuta* getFisioterapeuta() const override;
    void setFisioterapeuta(Fisioterapeuta* fisio) override;

    string getData() const override;
    void setData(string data) override;

    string getHorario() const override;
    void setHorario(string horario) override;

private:
    SessaoImpl(const Sessao& s);
    Sessao& operator=(const Sessao& s);
};

#endif
