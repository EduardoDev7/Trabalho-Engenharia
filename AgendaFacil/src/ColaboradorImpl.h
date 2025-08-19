#ifndef COLABORADOR_IMPL_H
#define COLABORADOR_IMPL_H

#include "Colaborador.h"

/**
 * @brief Implementação concreta da classe Colaborador.
 *
 * Armazena o nome do colaborador e suas sessões em um vetor.
 * Essa implementação serve como base para classes derivadas
 * como FisioterapeutaImpl e RecepcionistaImpl.
 */
class ColaboradorImpl : public Colaborador {
protected: 
    /// Nome do colaborador.
    string nome;

    /// Lista de sessões associadas ao colaborador.
    vector<Sessao*> sessoes;

public:
    /**
     * @brief Construtor padrão.
     */
    ColaboradorImpl() = default;

    /**
     * @brief Construtor que inicializa o colaborador com um nome.
     * @param nome Nome inicial do colaborador.
     */
    ColaboradorImpl(string nome);

    /**
     * @brief Destrutor padrão.
     */
    ~ColaboradorImpl() = default;

    /**
     * @copydoc Colaborador::getNome
     */
    string getNome() const override;

    /**
     * @copydoc Colaborador::setNome
     */
    void setNome(const string& nome) override;

    /**
     * @copydoc Colaborador::getSessaoInicio
     */
    vector<Sessao*>::iterator getSessaoInicio() override;

    /**
     * @copydoc Colaborador::getSessaoFim
     */
    vector<Sessao*>::iterator getSessaoFim() override;

private: 
    /**
     * @brief Construtor privado de cópia a partir de Colaborador.
     *
     * Impede a cópia direta de objetos Colaborador
     * para preservar o polimorfismo.
     */
    ColaboradorImpl(Colaborador& c);

    /**
     * @brief Operador de atribuição privado.
     *
     * Impede a atribuição direta de objetos Colaborador,
     * garantindo consistência no uso polimórfico.
     */
    Colaborador& operator=(Colaborador& c);
};

#endif
