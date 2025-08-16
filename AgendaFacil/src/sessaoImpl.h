#include "sessao.h"

class SessaoImpl : public Sessao{
protected:
    Paciente* paciente;
    Fisioterapeuta* fisio;
    string data;
    string horario;

public:
    SessaoImpl() = default;

    SessaoImpl(Paciente* p = nullptr, Fisioterapeuta* f = nullptr, string d  = "", string h = "");

    virtual ~SessaoImpl() = default;

    Paciente* getPaciente();

    void setPaciente(Paciente* paciente);

    Fisioterapeuta* getFisioterapeuta();

    void setFisioterapeuta(Fisioterapeuta* fisio);

    string getData() const;

    void setData(string data);

    string getHorario() const;

    void setHorario(string horario);

private: 
    SessaoImpl (const Sessao& s);

    Sessao& operator=(const Sessao& s);
};