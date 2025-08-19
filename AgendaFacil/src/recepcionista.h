#ifndef RECEPCIONISTA_H
#define RECEPCIONISTA_H

#include <iostream>
using namespace std;

/**
 * @brief Interface que representa um recepcionista do sistema.
 *
 * Define os métodos básicos para manipulação das informações
 * de um recepcionista, como nome, CPF, data de nascimento
 * e turno de trabalho.
 */
class Recepcionista {
public:
    /**
     * @brief Destrutor virtual padrão.
     */
    virtual ~Recepcionista() = default;

    /**
     * @brief Obtém o nome do recepcionista.
     * @return Nome do recepcionista.
     */
    virtual string getNome() const = 0;

    /**
     * @brief Define o nome do recepcionista.
     * @param nome Novo nome a ser atribuído.
     */
    virtual void setNome(const string& nome) = 0;

    /**
     * @brief Obtém o CPF do recepcionista.
     * @return CPF no formato de string.
     */
    virtual string getCpf() const = 0;

    /**
     * @brief Define o CPF do recepcionista.
     * @param cpf Novo CPF a ser atribuído.
     */
    virtual void setCpf(const string& cpf) = 0;

    /**
     * @brief Obtém a data de nascimento do recepcionista.
     * @return Data de nascimento no formato string (ex: dd/mm/aaaa).
     */
    virtual string getDataNascimento() const = 0;

    /**
     * @brief Define a data de nascimento do recepcionista.
     * @param dataNascimento Nova data a ser atribuída.
     */
    virtual void setDataNascimento(const string& dataNascimento) = 0;

    /**
     * @brief Obtém o turno de trabalho do recepcionista.
     * @return Turno no formato string (ex: manhã/tarde/noite).
     */
    virtual string getTurnoTrabalho() const = 0;

    /**
     * @brief Define o turno de trabalho do recepcionista.
     * @param turnoTrabalho Novo turno a ser atribuído.
     */
    virtual void setTurnoTrabalho(const string& turnoTrabalho) = 0;
};

#endif
