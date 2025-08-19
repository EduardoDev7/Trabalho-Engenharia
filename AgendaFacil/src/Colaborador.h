#ifndef COLABORADOR_H
#define COLABORADOR_H

#include <iostream>
#include <vector>
#include "sessao.h"
using namespace std;

/**
 * @brief Classe abstrata que representa um colaborador do sistema.
 *
 * Define a interface mínima que todo colaborador deve implementar:
 * nome e o gerenciamento das sessões associadas a ele.
 */
class Colaborador {
public:
    /**
     * @brief Destrutor virtual padrão.
     */
    virtual ~Colaborador() = default;

    /**
     * @brief Obtém o nome do colaborador.
     * @return Nome do colaborador.
     */
    virtual string getNome() const = 0;

    /**
     * @brief Define o nome do colaborador.
     * @param nome Novo nome a ser atribuído.
     */
    virtual void setNome(const string& nome) = 0;

    /**
     * @brief Retorna um iterador para o início da lista de sessões associadas ao colaborador.
     * @return Iterador apontando para o início do vetor de sessões.
     */
    virtual vector<Sessao*>::iterator getSessaoInicio() = 0;

    /**
     * @brief Retorna um iterador para o fim da lista de sessões associadas ao colaborador.
     * @return Iterador apontando para o fim do vetor de sessões.
     */
    virtual vector<Sessao*>::iterator getSessaoFim() = 0;
};

#endif
