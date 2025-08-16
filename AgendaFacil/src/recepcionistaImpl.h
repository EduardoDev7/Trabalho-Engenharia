#ifndef RECEPCIONISTAIMPL_H
#define RECEPCIONISTAIMPL_H

#include "recepcionista.h"
#include <string>

class RecepcionistaImpl : public Recepcionista {
private:
    std::string nome;
    std::string cpf;
    std::string dataNascimento;
    std::string turnoTrabalho;

public:

    RecepcionistaImpl() = default;
    RecepcionistaImpl(const std::string& nome,
                      const std::string& cpf,
                      const std::string& dataNascimento,
                      const std::string& turnoTrabalho);
    
    RecepcionistaImpl(const RecepcionistaImpl& other) = default;
    RecepcionistaImpl& operator=(const RecepcionistaImpl& other) = default;

    ~RecepcionistaImpl() override = default;

    std::string getNome() const override;
    void setNome(const std::string& nome) override;

    std::string getCpf() const override;
    void setCpf(const std::string& cpf) override;

    std::string getDataNascimento() const override;
    void setDataNascimento(const std::string& dataNascimento) override;

    std::string getTurnoTrabalho() const override;
    void setTurnoTrabalho(const std::string& turnoTrabalho) override;
};

#endif
