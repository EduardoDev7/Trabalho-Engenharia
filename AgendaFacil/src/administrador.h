#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <iostream>
#include <string>
#include "paciente.h"
#include "fisioterapeuta.h"
#include "recepcionista.h"
#include "sessao.h"

using namespace std;

/**
 * @brief Classe abstrata responsável pela criação de entidades do sistema.
 *
 * A classe Administrador segue o padrão Factory Method,
 * delegando a subclasses concretas a responsabilidade de instanciar
 * pacientes, fisioterapeutas, recepcionistas e sessões.
 */
class Administrador {
public:
    /**
     * @brief Destrutor virtual padrão.
     */
    virtual ~Administrador() = default;

    /**
     * @brief Cria um novo paciente.
     * @param nome Nome completo do paciente.
     * @param email Endereço de e-mail do paciente.
     * @return Ponteiro para o paciente criado.
     */
    virtual Paciente* criarPaciente(const string& nome, const string& email) = 0;

    /**
     * @brief Cria um novo fisioterapeuta.
     * @param nome Nome completo do fisioterapeuta.
     * @return Ponteiro para o fisioterapeuta criado.
     */
    virtual Fisioterapeuta* criarFisioterapeuta(const string& nome) = 0;

    /**
     * @brief Cria um novo recepcionista.
     * @param nome Nome do recepcionista.
     * @param cpf CPF do recepcionista.
     * @param dataNascimento Data de nascimento do recepcionista.
     * @param turnoTrabalho Turno em que o recepcionista trabalha (ex: manhã/tarde/noite).
     * @return Ponteiro para o recepcionista criado.
     */
    virtual Recepcionista* criarRecepcionista(const string& nome,
                                              const string& cpf,
                                              const string& dataNascimento,
                                              const string& turnoTrabalho) = 0;

    /**
     * @brief Cria uma nova sessão de fisioterapia.
     * @param paciente Paciente vinculado à sessão.
     * @param fisio Fisioterapeuta responsável pela sessão.
     * @param data Data da sessão (formato: dd/mm/aaaa).
     * @param horario Horário da sessão (formato: hh:mm).
     * @return Ponteiro para a sessão criada.
     */
    virtual Sessao* criarSessao(Paciente* paciente,
                                Fisioterapeuta* fisio,
                                const string& data,
                                const string& horario) = 0;
};

#endif
