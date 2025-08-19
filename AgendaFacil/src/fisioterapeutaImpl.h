#include "fisioterapeuta.h"

/**
 * @brief Implementação concreta da interface Fisioterapeuta.
 *
 * Armazena o nome do fisioterapeuta e as sessões que ele conduz,
 * utilizando um vetor de ponteiros para Sessao.
 */
class FisioterapeutaImpl : public Fisioterapeuta {
protected:
    /// Nome do fisioterapeuta.
    string nome;

    /// Lista de sessões associadas ao fisioterapeuta.
    vector<Sessao*> sessoes;

public:
    /**
     * @brief Construtor padrão.
     */
    FisioterapeutaImpl() = default;

    /**
     * @brief Construtor que inicializa o fisioterapeuta com um nome.
     * @param nome Nome inicial do fisioterapeuta.
     */
    FisioterapeutaImpl(string nome);

    /**
     * @brief Destrutor padrão.
     */
    ~FisioterapeutaImpl() = default;

    /**
     * @copydoc Fisioterapeuta::getNome
     */
    string getNome() const override;

    /**
     * @copydoc Fisioterapeuta::setNome
     */
    void setNome(const string& nome) override;

     /**
     * @brief Adiciona uma sessao na agenda
     * @param nome Nova sessao a ser atribuído.
     */
    void setSessao(Sessao* sessao);

    /**
     * @brief Remove uma sessao da agenda
     * @param nome sessao a ser excluída.
     */
    void deleteSessao(Sessao* sessao);

    /**
     * @copydoc Fisioterapeuta::getSessaoInicio
     */
    vector<Sessao*>::iterator getSessaoInicio() override;

    /**
     * @copydoc Fisioterapeuta::getSessaoFim
     */
    vector<Sessao*>::iterator getSessaoFim() override;

private:
    /**
     * @brief Construtor privado para impedir cópia direta de objetos.
     */
    FisioterapeutaImpl(Fisioterapeuta& f);

    /**
     * @brief Operador de atribuição privado para impedir cópia.
     */
    Fisioterapeuta& operator=(Fisioterapeuta& f);
};
