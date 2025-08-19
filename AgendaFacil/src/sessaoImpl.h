#ifndef SESSAO_IMPL_H
#define SESSAO_IMPL_H

#include "sessao.h"

/**
 * @brief Implementação concreta da interface Sessao.
 *
 * Armazena os participantes da sessão (paciente e fisioterapeuta),
 * além de data e horário da sessão.
 */
class SessaoImpl : public Sessao {
protected:
    /// Ponteiro para o paciente da sessão.
    Paciente* paciente;

    /// Ponteiro para o fisioterapeuta da sessão.
    Fisioterapeuta* fisio;

    /// Data da sessão (ex: dd/mm/aaaa).
    string data;

    /// Horário da sessão (ex: hh:mm).
    string horario;

public:
    /**
     * @brief Construtor padrão.
     */
    SessaoImpl() = default;

    /**
     * @brief Construtor que inicializa todos os atributos da sessão.
     * @param p Ponteiro para o paciente.
     * @param f Ponteiro para o fisioterapeuta.
     * @param d Data da sessão.
     * @param h Horário da sessão.
     */
    SessaoImpl(Paciente* p = nullptr, Fisioterapeuta* f = nullptr,
               string d = "", string h = "");

    /**
     * @brief Destrutor padrão.
     */
    virtual ~SessaoImpl() = default;

    /**
     * @copydoc Sessao::getPaciente
     */
    Paciente* getPaciente() const override;

    /**
     * @copydoc Sessao::setPaciente
     */
    void setPaciente(Paciente* paciente) override;

    /**
     * @copydoc Sessao::getFisioterapeuta
     */
    Fisioterapeuta* getFisioterapeuta() const override;

    /**
     * @copydoc Sessao::setFisioterapeuta
     */
    void setFisioterapeuta(Fisioterapeuta* fisio) override;

    /**
     * @copydoc Sessao::getData
     */
    string getData() const override;

    /**
     * @copydoc Sessao::setData
     */
    void setData(string data) override;

    /**
     * @copydoc Sessao::getHorario
     */
    string getHorario() const override;

    /**
     * @copydoc Sessao::setHorario
     */
    void setHorario(string horario) override;

private:
    /**
     * @brief Construtor de cópia protegido para impedir cópia direta.
     */
    SessaoImpl(const Sessao& s);

    /**
     * @brief Operador de atribuição protegido para impedir cópia direta.
     */
    Sessao& operator=(const Sessao& s);
};

#endif
