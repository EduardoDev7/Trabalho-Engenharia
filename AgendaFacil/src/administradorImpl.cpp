#include "administradorImpl.h"

Paciente* AdministradorImpl::criarPaciente(const string& nome, const string& email) {
    return new PacienteImpl(nome, email);
}

Fisioterapeuta* AdministradorImpl::criarFisioterapeuta(const string& nome) {
    return new FisioterapeutaImpl(nome);
}

Recepcionista* AdministradorImpl::criarRecepcionista(const string& nome,
                                                     const string& cpf,
                                                     const string& dataNascimento,
                                                     const string& turnoTrabalho) {
    return new RecepcionistaImpl(nome, cpf, dataNascimento, turnoTrabalho);
}

Sessao* AdministradorImpl::criarSessao(Paciente* paciente,
                                       Fisioterapeuta* fisio,
                                       const string& data,
                                       const string& horario) {
    return new SessaoImpl(paciente, fisio, data, horario);
}
