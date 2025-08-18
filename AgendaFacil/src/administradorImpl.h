#ifndef ADMINISTRADOR_IMPL_H
#define ADMINISTRADOR_IMPL_H

#include "administrador.h"
#include "pacienteImpl.h"
#include "fisioterapeutaImpl.h"
#include "recepcionistaImpl.h"
#include "sessaoImpl.h"

class AdministradorImpl : public Administrador {
public:
    AdministradorImpl() = default;
    ~AdministradorImpl() override = default;

    // Implementação da fábrica
    Paciente* criarPaciente(const string& nome, const string& email) override;
    Fisioterapeuta* criarFisioterapeuta(const string& nome) override;
    Recepcionista* criarRecepcionista(const string& nome,
                                      const string& cpf,
                                      const string& dataNascimento,
                                      const string& turnoTrabalho) override;
    Sessao* criarSessao(Paciente* paciente,
                        Fisioterapeuta* fisio,
                        const string& data,
                        const string& horario) override;
};

#endif
