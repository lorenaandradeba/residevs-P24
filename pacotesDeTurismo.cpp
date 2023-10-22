#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Nas classes Evento, Roteiro, Deslocamento e Pernoite, foi utilizado herança. Onde Evento é a superclasse e as demais 
 * (Roteiro, Deslocamento e Pernoite), que são um tipo de evento, serão as subclasses que herdarão os métodos e atributos 
 * da superclasse. 
 * Entre as classes Pacote e Evento foi adotado o conceito de Agregação, pois uma não necessita da outra para existir. 
 * Já entre as classes Cliente e Dependente, como existe uma dependência entre elas (pois não faz sentido termos um 
 * dependente sem que exista um cliente), foi utilizada a estratégia de Composição.
*/

class Evento
{
    private:
        int duracao;

    public:
        Evento(/* args */);
        ~Evento();

        Evento(int _duracao);
};

Evento::Evento(/* args */)
{
}

Evento::~Evento()
{
}

Evento::Evento(int _duracao) {
    duracao = _duracao;
}

class Pacote
{
    private:
        string nome;
        vector<Evento*> listaEventos;

    public:
        Pacote(/* args */);
        ~Pacote();

        Pacote(string _nome);
        void adicionarEvento(Evento &_evento);
};

Pacote::Pacote(/* args */)
{
}

Pacote::~Pacote()
{
}

Pacote::Pacote(string _nome) {
    nome = _nome;
}

void Pacote::adicionarEvento(Evento &_evento) {
    listaEventos.push_back(&_evento);
}

class Cliente
{
    private:
        string nome, cpf;
        vector<Pacote> listaPacotes;
        vector<Dependente> listaDependentes;

    public:
        Cliente(/* args */);
        ~Cliente();

        Cliente(string _nome, string _cpf);
        void adicionaPacote(Pacote _pacote);
};

Cliente::Cliente(/* args */)
{
}

Cliente::~Cliente()
{
}

Cliente::Cliente(string _nome, string _cpf) {
    nome = _nome;
    cpf = _cpf;
}

void Cliente::adicionaPacote(Pacote _pacote) {
    listaPacotes.push_back(_pacote);
}

class Dependente
{
    private:
        string nome;
        Cliente *cliente;

    public:
        Dependente(/* args */);
        ~Dependente();

        Dependente(string _nome, Cliente _cliente);
};

Dependente::Dependente(/* args */)
{
}

Dependente::~Dependente()
{
}

Dependente::Dependente(string _nome, Cliente _cliente) {
    nome = _nome;
    cliente = &_cliente;
}

class Roteiro : public Evento
{
    private:
        /* data */
    public:
        Roteiro(/* args */);
        ~Roteiro();
};

Roteiro::Roteiro(/* args */)
{
}

Roteiro::~Roteiro()
{
}

class Deslocamento : public Evento
{
    private:
        /* data */
    public:
        Deslocamento(/* args */);
        ~Deslocamento();
};

Deslocamento::Deslocamento(/* args */)
{
}

Deslocamento::~Deslocamento()
{
}

class Pernoite : public Evento
{
    private:
        /* data */
    public:
        Pernoite(/* args */);
        ~Pernoite();
};

Pernoite::Pernoite(/* args */)
{
}

Pernoite::~Pernoite()
{
}
