#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <iostream>
#include <string>
#include "paciente.h"
#include "fisioterapeuta.h"
#include "recepcionista.h"
#include "sessao.h"

using namespace std;

class Administrador {
public:
    virtual ~Administrador() = default;

    // Métodos de criação (Factory)
    virtual Paciente* criarPaciente(const string& nome, const string& email) = 0;
    virtual Fisioterapeuta* criarFisioterapeuta(const string& nome) = 0;
    virtual Recepcionista* criarRecepcionista(const string& nome,
                                              const string& cpf,
                                              const string& dataNascimento,
                                              const string& turnoTrabalho) = 0;
    virtual Sessao* criarSessao(Paciente* paciente,
                                Fisioterapeuta* fisio,
                                const string& data,
                                const string& horario) = 0;
};

#endif
