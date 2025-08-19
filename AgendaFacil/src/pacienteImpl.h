#ifndef PACIENTEIMPL_H
#define PACIENTEIMPL_H

#include <iostream>
#include "paciente.h"
using namespace std;

/**
 * @brief Implementação concreta da interface Paciente.
 *
 * Armazena os dados de um paciente (nome e e-mail),
 * fornecendo acesso e modificação dessas informações.
 */
class PacienteImpl : public Paciente {
protected:
    /// Nome do paciente.
    string nome;

    /// E-mail do paciente.
    string email;

public:
    /**
     * @brief Construtor padrão.
     */
    PacienteImpl() = default;

    /**
     * @brief Destrutor padrão.
     */
    virtual ~PacienteImpl() = default;

    /**
     * @brief Construtor que inicializa um paciente com nome e e-mail.
     * @param nome Nome do paciente.
     * @param email Endereço de e-mail do paciente.
     */
    PacienteImpl(const string& nome, const string& email);

    /**
     * @copydoc Paciente::getNome
     */
    string getNome() const override;

    /**
     * @copydoc Paciente::setNome
     */
    void setNome(const string& nome) override;

    /**
     * @copydoc Paciente::getEmail
     */
    string getEmail() const override;

    /**
     * @copydoc Paciente::setEmail
     */
    void setEmail(const string& email) override;

protected:
    /**
     * @brief Construtor protegido de cópia a partir de um Paciente.
     *
     * Mantido protegido para evitar cópia direta de objetos
     * da interface Paciente, preservando o polimorfismo.
     */
    PacienteImpl(const Paciente& p);

    /**
     * @brief Operador de atribuição protegido.
     *
     * Impede atribuição direta entre objetos Paciente
     * para garantir consistência em hierarquias polimórficas.
     */
    Paciente& operator=(const Paciente& p);
};

#endif
