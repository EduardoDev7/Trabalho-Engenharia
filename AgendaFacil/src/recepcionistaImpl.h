#ifndef RECEPCIONISTAIMPL_H
#define RECEPCIONISTAIMPL_H

#include "recepcionista.h"
#include <string>

/**
 * @brief Implementação concreta da interface Recepcionista.
 *
 * Armazena as informações de um recepcionista: nome, CPF,
 * data de nascimento e turno de trabalho.
 */
class RecepcionistaImpl : public Recepcionista {
private:
    /// Nome do recepcionista.
    std::string nome;

    /// CPF do recepcionista.
    std::string cpf;

    /// Data de nascimento do recepcionista.
    std::string dataNascimento;

    /// Turno de trabalho do recepcionista.
    std::string turnoTrabalho;

public:
    /**
     * @brief Construtor padrão.
     */
    RecepcionistaImpl() = default;

    /**
     * @brief Construtor que inicializa um recepcionista com todos os dados.
     * @param nome Nome do recepcionista.
     * @param cpf CPF do recepcionista.
     * @param dataNascimento Data de nascimento (dd/mm/aaaa).
     * @param turnoTrabalho Turno de trabalho (ex: manhã/tarde/noite).
     */
    RecepcionistaImpl(const std::string& nome,
                      const std::string& cpf,
                      const std::string& dataNascimento,
                      const std::string& turnoTrabalho);

    /**
     * @brief Construtor de cópia padrão.
     */
    RecepcionistaImpl(const RecepcionistaImpl& other) = default;

    /**
     * @brief Operador de atribuição padrão.
     */
    RecepcionistaImpl& operator=(const RecepcionistaImpl& other) = default;

    /**
     * @brief Destrutor padrão.
     */
    ~RecepcionistaImpl() override = default;

    /**
     * @copydoc Recepcionista::getNome
     */
    std::string getNome() const override;

    /**
     * @copydoc Recepcionista::setNome
     */
    void setNome(const std::string& nome) override;

    /**
     * @copydoc Recepcionista::getCpf
     */
    std::string getCpf() const override;

    /**
     * @copydoc Recepcionista::setCpf
     */
    void setCpf(const std::string& cpf) override;

    /**
     * @copydoc Recepcionista::getDataNascimento
     */
    std::string getDataNascimento() const override;

    /**
     * @copydoc Recepcionista::setDataNascimento
     */
    void setDataNascimento(const std::string& dataNascimento) override;

    /**
     * @copydoc Recepcionista::getTurnoTrabalho
     */
    std::string getTurnoTrabalho() const override;

    /**
     * @copydoc Recepcionista::setTurnoTrabalho
     */
    void setTurnoTrabalho(const std::string& turnoTrabalho) override;
};

#endif
