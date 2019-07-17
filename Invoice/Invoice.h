#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>

using namespace std;

class Invoice
{
    public:
        Invoice();

        int getNumitem();
        string getDescricao();
        int getQuantidade();
        float getPreco();
        double getInvoiceAmount();

        void setNumitem(int n);
        void setDescricao(string d);
        void setQuantidade(int q);
        void setPreco(float p);

    private:

        int numitem;
        string descricao;
        int quantidade;
        float preco;

};

#endif // INVOICE_H
