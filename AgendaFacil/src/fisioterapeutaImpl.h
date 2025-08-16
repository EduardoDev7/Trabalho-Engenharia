#include "fisioterapeuta.h"

class FisioterapeutaImpl : public Fisioterapeuta{
protected: 
    string nome;
    vector<Sessao*> sessoes;

public:
    FisioterapeutaImpl ()  =default;

    FisioterapeutaImpl (string nome);

    ~FisioterapeutaImpl() = default;

    string getNome() const;

    void setNome(const string& nome);

    vector<Sessao*>::iterator getSessaoInicio ();

    vector<Sessao*>::iterator getSessaoFim ();

private: 
    FisioterapeutaImpl (Fisioterapeuta& f);

    Fisioterapeuta& operator=(Fisioterapeuta& f);
};