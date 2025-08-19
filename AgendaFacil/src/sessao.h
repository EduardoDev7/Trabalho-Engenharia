#ifndef SESSAO_H
#define SESSAO_H

#include <iostream>
#include "paciente.h"
#include "fisioterapeuta.h"

using namespace std;

/**
 * @brief Interface que representa uma sessão de fisioterapia.
 *
 * Define os métodos básicos para acessar e modificar os
 * participantes (paciente e fisioterapeuta), bem como a
 * data e horário da sessão.
 */
class Sessao {
public:
    /**
     * @brief Destrutor virtual padrão.
     */
    virtual ~Sessao() = default;

    /**
     * @brief Obtém o paciente associado à sessão.
     * @return Ponteiro para o paciente.
     */
    virtual Paciente* getPaciente() const = 0;

    /**
     * @brief Define o paciente da sessão.
     * @param paciente Ponteiro para o paciente.
     */
    virtual void setPaciente(Paciente* paciente) = 0;

    /**
     * @brief Obtém o fisioterapeuta associado à sessão.
     * @return Ponteiro para o fisioterapeuta.
     */
    virtual Fisioterapeuta* getFisioterapeuta() const = 0;

    /**
     * @brief Define o fisioterapeuta da sessão.
     * @param fisio Ponteiro para o fisioterapeuta.
     */
    virtual void setFisioterapeuta(Fisioterapeuta* fisio) = 0;

    /**
     * @brief Obtém a data da sessão.
     * @return Data no formato string (ex: dd/mm/aaaa).
     */
    virtual string getData() const = 0;

    /**
     * @brief Define a data da sessão.
     * @param data Nova data da sessão.
     */
    virtual void setData(string data) = 0;

    /**
     * @brief Obtém o horário da sessão.
     * @return Horário no formato string (ex: hh:mm).
     */
    virtual string getHorario() const = 0;

    /**
     * @brief Define o horário da sessão.
     * @param horario Novo horário da sessão.
     */
    virtual void setHorario(string horario) = 0;
};

#endif
