#include <cassert>
#include <iostream>
#include <vector>
#include "../../src/administradorImpl.h"
#include "../../src/paciente.h"
#include "../../src/fisioterapeuta.h"
#include "../../src/recepcionista.h"
#include "../../src/sessao.h"

using namespace std;

// Função auxiliar para simular envio de e-mail
bool notificarPaciente(Paciente* p, Sessao* s) {
    if (!p || !s) return false;
    // Aqui só simulamos a notificação
    cout << "[Notificação] Paciente " << p->getNome() 
         << " notificado sobre sessão em " << s->getData() 
         << " às " << s->getHorario() << endl;
    return true;
}

int main() {
    cout << "Iniciando testes funcionais..." << endl;

    // Cadastrar Fisioterapeuta
    AdministradorImpl admin;
    Fisioterapeuta* fisio = admin.criarFisioterapeuta("Dr. João");
    assert(fisio != nullptr);
    assert(fisio->getNome() == "Dr. João");

    // Cadastrar Paciente
    Paciente* paciente = admin.criarPaciente("Ana Paula Silva", "ana@email.com");
    assert(paciente != nullptr);
    assert(paciente->getNome() == "Ana Paula Silva");
    assert(paciente->getEmail() == "ana@email.com");

    // Marcar Consulta
    Sessao* sessao = admin.criarSessao(paciente, fisio, "20/08/2025", "10:00");
    assert(sessao != nullptr);
    assert(sessao->getPaciente()->getNome() == "Ana Paula Silva");
    assert(sessao->getFisioterapeuta()->getNome() == "Dr. João");
    assert(sessao->getData() == "20/08/2025");
    assert(sessao->getHorario() == "10:00");
    assert(notificarPaciente(sessao->getPaciente(), sessao));

    // Remarcar Consulta
    sessao->setData("21/08/2025");
    sessao->setHorario("11:00");
    assert(sessao->getData() == "21/08/2025");
    assert(sessao->getHorario() == "11:00");
    assert(notificarPaciente(sessao->getPaciente(), sessao));

    // Visualizar Própria Agenda do Fisioterapeuta
    Sessao* s1 = admin.criarSessao(paciente, fisio, "22/08/2025", "09:00");
    Sessao* s2 = admin.criarSessao(paciente, fisio, "22/08/2025", "10:00");

    for (auto it = fisio->getSessaoInicio(); it != fisio->getSessaoFim(); it++) {
        assert((*it)->getFisioterapeuta()->getNome() == "Dr. João");
        cout << "[Agenda] " << (*it)->getData() << " " << (*it)->getHorario() << endl;
    }
    
    // Receber Notificação por E-mail
    assert(notificarPaciente(paciente, s1));

    cout << "Todos os testes funcionais passaram com sucesso!" << endl;
    return 0;
}
