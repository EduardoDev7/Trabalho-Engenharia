#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
using namespace std;

/**
 * @brief Interface que representa um paciente do sistema.
 *
 * Define os métodos básicos para manipulação das informações
 * de um paciente, como nome e endereço de e-mail.
 */
class Paciente {
public:
    /**
     * @brief Destrutor virtual padrão.
     */
    virtual ~Paciente() = default;

    /**
     * @brief Obtém o nome do paciente.
     * @return Nome do paciente.
     */
    virtual string getNome() const = 0;

    /**
     * @brief Define o nome do paciente.
     * @param nome Novo nome a ser atribuído.
     */
    virtual void setNome(const string& nome) = 0;

    /**
     * @brief Obtém o e-mail do paciente.
     * @return Endereço de e-mail do paciente.
     */
    virtual string getEmail() const = 0;

    /**
     * @brief Define o e-mail do paciente.
     * @param email Novo e-mail a ser atribuído.
     */
    virtual void setEmail(const string& email) = 0;
};

#endif
