#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

using namespace std;

class Pessoa
{
    public:
        Pessoa();
        Pessoa(string n);
        Pessoa(string n, int i, string t);

        string getNome();
        void setNome(string n);
        int getIdade();
        void setIdade(int i);
        string getTelefone();
        void setTelefone(string t);

    private:
        string nome;
        string telefone;
        int idade;
};

#endif // PESSOA_H
