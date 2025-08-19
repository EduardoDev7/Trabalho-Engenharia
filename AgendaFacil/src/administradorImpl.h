#ifndef ADMINISTRADOR_IMPL_H
#define ADMINISTRADOR_IMPL_H

#include "administrador.h"
#include "pacienteImpl.h"
#include "fisioterapeutaImpl.h"
#include "recepcionistaImpl.h"
#include "sessaoImpl.h"

/**
 * @brief Implementação concreta da classe Administrador.
 *
 * Essa classe cria instâncias específicas de PacienteImpl, 
 * FisioterapeutaImpl, RecepcionistaImpl e SessaoImpl.
 */
class AdministradorImpl : public Administrador {
public:
    /**
     * @brief Construtor padrão.
     */
    AdministradorImpl() = default;

    /**
     * @brief Destrutor padrão.
     */
    ~AdministradorImpl() override = default;

    /**
     * @copydoc Administrador::criarPaciente
     */
    Paciente* criarPaciente(const string& nome, const string& email) override;

    /**
     * @copydoc Administrador::criarFisioterapeuta
     */
    Fisioterapeuta* criarFisioterapeuta(const string& nome) override;

    /**
     * @copydoc Administrador::criarRecepcionista
     */
    Recepcionista* criarRecepcionista(const string& nome,
                                      const string& cpf,
                                      const string& dataNascimento,
                                      const string& turnoTrabalho) override;

    /**
     * @copydoc Administrador::criarSessao
     */
    Sessao* criarSessao(Paciente* paciente,
                        Fisioterapeuta* fisio,
                        const string& data,
                        const string& horario) override;
};

#endif
