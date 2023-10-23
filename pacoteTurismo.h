#ifndef PACOTETURISMO_H
#define PACOTETURISMO_H
#include <string>
#include <vector>
using namespace std;
class Evento {
private:
    string nome;
    int vagas;

public:
    ~Evento();
    Evento();
    Evento(string _nome, int _vagas);
    string getNome();
    // Adicione métodos relevantes para a classe Evento, caso necessário.
};

class Roteiro {
private:
    string descricao;

public:
    ~Roteiro();
    Roteiro();
    Roteiro(string _descricao);

    // Adicione métodos relevantes para a classe Roteiro, caso necessário.
};

class Deslocamento {
private:
    string meioDeTransporte;

public:
    ~Deslocamento();
    Deslocamento();
    Deslocamento(string _meioDeTransporte);

    // Adicione métodos relevantes para a classe Deslocamento, caso necessário.
};

class Pernoite {
private:
    string hotel;

public:
    ~Pernoite();
    Pernoite();
    Pernoite(std::string _hotel);

    // Adicione métodos relevantes para a classe Pernoite, caso necessário.
};

class PacoteTurismo {
private:
    string nome;
    Roteiro roteiro;
    Deslocamento deslocamento;
    Pernoite pernoite;

public:
    Evento evento;
    ~PacoteTurismo();
    PacoteTurismo();
    PacoteTurismo(
        string _nome,
        Evento _evento,
        Roteiro _roteiro,
        Deslocamento _deslocamento,
        Pernoite _pernoite);
    string getNome();
    // Adicione métodos relevantes para a classe PacoteTurismo, caso necessário.
};

class Pessoa {
protected:
    string nome;
    int idade;

public:
    ~Pessoa();
    Pessoa();
    Pessoa(string _nome, int _idade);

    // Adicione métodos relevantes para a classe Pessoa, caso necessário.
};

class Dependente : public Pessoa {
public:
    ~Dependente();
    Dependente();
    Dependente(string _nome, int _idade);

    // Adicione métodos relevantes para a classe Dependente, caso necessário.
};
class Cliente : public Pessoa {
private:
    vector<Dependente> dependentes;
public:
    vector<PacoteTurismo> pacotes;
    ~Cliente();
    Cliente();
    Cliente(string _nome, int _idade);
    string getNome();
    int getIdade();
    void adicionarPacote(PacoteTurismo pacote);
    void adicionarDependente(Dependente dependente);
    
};
#endif
