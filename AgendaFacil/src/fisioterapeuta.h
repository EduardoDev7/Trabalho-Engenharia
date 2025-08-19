#ifndef FISIOTERAPEUTA_H
#define FISIOTERAPEUTA_H

#include <iostream>
#include <vector>
#include "sessao.h"
using namespace std;

class Sessao;

/**
 * @brief Interface que representa um fisioterapeuta do sistema.
 *
 * Define a estrutura básica de um fisioterapeuta, permitindo
 * acesso e modificação do nome, além do gerenciamento de
 * sessões de fisioterapia associadas a ele.
 */
class Fisioterapeuta {
public:
    /**
     * @brief Destrutor virtual padrão.
     */
    virtual ~Fisioterapeuta() = default;

    /**
     * @brief Obtém o nome do fisioterapeuta.
     * @return Nome do fisioterapeuta.
     */
    virtual string getNome() const = 0;

    /**
     * @brief Define o nome do fisioterapeuta.
     * @param nome Novo nome a ser atribuído.
     */
    virtual void setNome(const string& nome) = 0;

    /**
     * @brief Adiciona uma sessao na agenda
     * @param nome Nova sessao a ser atribuído.
     */
    virtual void setSessao(Sessao* sessao) = 0;

    /**
     * @brief Remove uma sessao da agenda
     * @param nome sessao a ser excluída.
     */
    virtual void deleteSessao(Sessao* sessao) = 0;

    /**
     * @brief Retorna um iterador para o início da lista de sessões do fisioterapeuta.
     * @return Iterador apontando para o início do vetor de sessões.
     */
    virtual vector<Sessao*>::iterator getSessaoInicio() = 0;

    /**
     * @brief Retorna um iterador para o fim da lista de sessões do fisioterapeuta.
     * @return Iterador apontando para o fim do vetor de sessões.
     */
    virtual vector<Sessao*>::iterator getSessaoFim() = 0;
};

#endif
