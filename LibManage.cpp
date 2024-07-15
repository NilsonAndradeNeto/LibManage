#include <iostream>


using namespace std;

struct autor{

    string nome;
};

struct editora{
    string nome;
};

struct livros{
    string titulo;
    string autor;
    string assunto;
    string editora;
};

struct revistas{
    string titulo;
    string editora;
    string assunto;
};

struct pessoa{
    string nome;
};

struct retirada{

    string nome_livro;
    string nome_revista;


    string titulo_revista;
    string autor;
    string editora_revista;
    string assunto_revista;

    string titulo_livro;
    string editora_livro;
    string assunto_livro;

    bool verificador_revista=false;
    bool verificador_livro=false;

    int dia_emprestimo, mes_emprestimo, ano_emprestimo;

};

bool aux_geral;
bool aux_geral2=false;
bool aux_geral3=false;
int  aux_geral4;

static int contador =1;
static int contador2=1;
static int contador3=1;
static int contador4=1;
static int contador5=1;

int autor_selecionado;
int editora_selecionado;

template <typename T>

void realocarVetor(T *&vetor5, int &tamanho) {

    int novoTamanho = tamanho + 5;

    T *novoVetor5 = new T[novoTamanho];

    for (int i = 0; i < tamanho; i++) {
        novoVetor5[i] = vetor5[i];
    }

    delete[] vetor5;
    vetor5 = novoVetor5;
    tamanho = novoTamanho;

    cout<<""<<endl;
    cout<<" Vetor adicionado +5 "<<endl;
    system("pause");
}

void cadastro_autor(autor *&nome_autor,int &tam_autor){

    nome_autor =  new autor[tam_autor];

    if(contador == tam_autor){
        realocarVetor(nome_autor,tam_autor);
    }



    system("cls");
    cout<<"\t\t\t\t\t     _______________________________"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||  DIGITE O NOME DO AUTOR    ||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    |______________________________|"<<endl;
    cin.ignore();
    getline(cin,nome_autor[contador].nome);

    system("cls");
    cout<<"\t\t\t\t\t     _______________________________"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    || AUTOR:"<< nome_autor[contador].nome <<" CADASTRADO COM SUCESSO "<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    |______________________________|"<<endl;
    contador++;

    system("pause");
    system("cls");
    aux_geral2=true;
}

void cadastro_editora(editora *&nome_editora, int &tam_editora){

    nome_editora = new editora[tam_editora];

    if(contador2 == tam_editora){
        realocarVetor(nome_editora,tam_editora);
    }



    system("cls");
    cout<<"\t\t\t\t\t     _______________________________"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||  DIGITE O NOME DA EDITORA  ||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    |______________________________|"<<endl;
    cin.ignore();
    getline(cin,nome_editora[contador2].nome);

    system("cls");
    cout<<"\t\t\t\t\t     _______________________________"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    || EDITORA: " << nome_editora[contador2].nome << " CADASTRADO COM SUCESSO "<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    |______________________________|"<<endl;

    system("pause");
    system("cls");
    aux_geral3=true;

    contador2++;
}

void cadastro_pessoa(pessoa *&nome_usuario, int &tam_usuario){


    nome_usuario = new pessoa[tam_usuario];
    if(contador3 == tam_usuario){
        realocarVetor(nome_usuario,tam_usuario);
    }


    system("cls");
    cout<<"\t\t\t\t\t     _______________________________"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    || DIGITE O NOME DA PESSOA    ||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    |______________________________|"<<endl;

    cin.ignore();
    getline(cin,nome_usuario[contador3].nome);

    system("cls");
    cout<<"\t\t\t\t\t     _______________________________"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||  PESSOA " << nome_usuario[contador3].nome << " Cadastrado Com Sucesso COD: "<< contador3 <<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    |______________________________|"<<endl;
    cout<< " pessoa " << nome_usuario[contador3].nome << " Cadastrado Com Sucesso Seja bem vindo o seu codigo e "<< contador3 <<endl;

    system("pause");
    system("cls");
    contador3++;
}

void imprimir_autor(autor nome_autor[]){

    for(int i=0;i<contador;i++){
        if(i>=1){

            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||"<<i<<" - Autor "<<nome_autor[i].nome<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;
        }
    }
}

void imprimir_editora(editora nome_editora[]){

    for(int i=0;i<contador2;i++){
        if(i>=1){

            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||"<<i<<"- Editora "<<nome_editora[i].nome<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;
        }
    }
}

void imprimir_pessoa(pessoa nome_usuario[]){

    for(int i=0;i<contador3;i++){
        if(i>=1){
            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||"<<i<<" - Pessoa "<<nome_usuario[i].nome<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;
        }
    }
}

void alterar_autor(autor nome_autor[], int TAM){

    system("cls");
    string alterar;
    int codigo;

    if(aux_geral2==true){
        cout<<"\t\t\t\t\t     _______________________________"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||    DIGITE O COD DO AUTOR   ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    |______________________________|"<<endl;

        cout<< " Digite o codigo do Autor " <<endl;
        cin>> codigo;

        for(int i=codigo;i<TAM;i++){

            system("cls");
            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||DIGITE O NOME DO NOVO AUTOR ||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;

            cin>>alterar;
            nome_autor[codigo].nome = alterar;

            system("cls");
            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||   ALTERADO COM SUCESSO     ||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;

            system("break");
            system("cls");
            break;
        }
    }

    else{
        system("cls");
        cout<<"\t\t\t\t\t     _______________________________"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||  CADASTRE UM AUTOR ANTES   ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    |______________________________|"<<endl;
    }
}

void alterar_editora(editora nome_editora[], int TAM){

    string alterar;
    int codigo;

    if(aux_geral3==true){

        system("cls");
        cout<<"\t\t\t\t\t     _______________________________"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||  DIGITE O COD DA EDITORA   ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    |______________________________|"<<endl;

        cin>> codigo;

        for(int i=codigo;i<TAM;i++){

            system("cls");
            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||   DIGITE A NOVA EDITORA    ||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;
            cin>>alterar;
            nome_editora[codigo].nome=alterar;

            system("cls");
            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||   ALTERADO COM SUCESSO     ||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;

            system("break");
            system("cls");
            break;
        }
    }


    else{
        system("cls");
        cout<<"\t\t\t\t\t     _______________________________"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    || CADASTRE UMA EEDITORA ANTES||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    |______________________________|"<<endl;

    }
}

void cadastro_livro(livros *&book,autor nome_autor[], editora nome_editora[], int &tam_book){

    string cadastro;
    int opcao,OPCAO;
    int aux;

    if(contador4 == tam_book){
        realocarVetor(book,tam_book);
    }

    for(int i=contador4;i<tam_book;i++){

        aux_geral=true;

        system("cls");
        cout<<"----livro-codigo-"<<i<<endl;
        cout<<"\t\t\t\t\t     _______________________________"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||      NOME DO LIVRO"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    |______________________________|"<<endl;

        cin.ignore();
        getline(cin, book[i].titulo);

        system("cls");
        cout<<" assunto do livro " <<endl;
        cout<<"\t\t\t\t\t     _______________________________"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||     ASSUNTO DO LIVRO       ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    |______________________________|"<<endl;

        getline(cin, book[i].assunto);

        system("cls");

        cout<<"\t\t\t\t\t     _______________________________"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    || SELECIONE O AUTOR DO LIVRO"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    |______________________________|"<<endl;

        imprimir_autor(nome_autor);
        cin>>autor_selecionado;
        book[i].autor=nome_autor[autor_selecionado].nome;
        system("cls");

        cout<<"\t\t\t\t\t     _______________________________"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    || SELECIONE A EDITORA DO LIVRO"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    |______________________________|"<<endl;
        imprimir_editora(nome_editora);
        cin>>editora_selecionado;
        book[i].editora = nome_editora[autor_selecionado].nome;
        system("break");
        system("cls");
        break;
    }
    contador4++;
}

void imprimir_livro(livros book[], autor nome_autor[]){

    for(int i=0;i<contador4;i++){
        if(i>=1){
            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||________________LIVRO"<<i<<"_______||"<<endl;
            cout<<"\t\t\t\t\t    ||   TITULO "<<book[i].titulo <<endl;
            cout<<"\t\t\t\t\t    ||   assunto "<<book[i].assunto<<endl;
            cout<<"\t\t\t\t\t    ||   autor "<<book[i].autor<<endl;
            cout<<"\t\t\t\t\t    ||   editora"<<book[i].editora<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;
        }
    }
}

void cadastro_revista(revistas *&magazine, editora nome_editora[], int &tam){

    static int contador=0;
    contador ++;


    if(contador == tam){
        realocarVetor(magazine,tam);
    }

    for(int i=contador5;i<tam;i++){

        system("cls");
        aux_geral=true;
        cout<<"----livro-revista-"<<i<<endl;
        cout<<"\t\t\t\t\t     _______________________________"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||        NOME TITULO         ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    |______________________________|"<<endl;

        cin.ignore();
        getline(cin, magazine[i].titulo);

        cout<<"\t\t\t\t\t     _______________________________"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||      ASSUNTO REVISTA       ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    |______________________________|"<<endl;
        getline(cin, magazine[i].assunto);
        system("cls");
        cout<<"\t\t\t\t\t     _______________________________"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||     SELECIONE A EDITORA    || "<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
        cout<<"\t\t\t\t\t    |______________________________|"<<endl;


        imprimir_editora(nome_editora);
        cin>>editora_selecionado;
        magazine[i].editora=nome_editora[editora_selecionado].nome;

        system("break");
        system("cls");
        break;
    }
    contador5++;
}

void imprimir_revista(revistas magazine[], editora nome_editora[]){

    for(int i=0;i<contador5;i++){
        if(i>=1){
            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||________________REVISTA"<<i<<"_____||"<<endl;
            cout<<"\t\t\t\t\t    ||   TITULO "<<magazine[i].titulo <<endl;
            cout<<"\t\t\t\t\t    ||   assunto "<<magazine[i].assunto<<endl;
            cout<<"\t\t\t\t\t    ||   editora "<<magazine[i].editora<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;

        }
    }
}

void alterar_livro_revista(livros book[],revistas magazine[],autor nome_autor[],editora nome_editora[], int tam_book, int tam_magazine){

    string alterar;
    int codigo;
    if(aux_geral==true)

    system("cls");
    cout<<"\t\t\t\t\t     _______________________________"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    || Alterar livro ou revista   ||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    |______________________________|"<<endl;

    cin>>alterar;

    system("cls");
    cout<<"\t\t\t\t\t     _______________________________"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||     DIGITE O CODIGO        ||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    |______________________________|"<<endl;

    cin>>codigo;

    if(alterar=="livro"){
        for(int i=codigo;i<tam_book;i++){

            system("cls");
            cout<<"----livro-codigo--("<<i<<")"<<endl;

            cout<<" nome titulo "<<endl;
            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||        NOME DO TITULO      ||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;
            cin.ignore();
            getline(cin,book[i].titulo);

            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||     ASSUNTO DO LIVRO       ||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;
            cin.ignore();
            getline(cin,book[i].assunto);

            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    || SELECIONE O AUTOR DO LIVRO ||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;


            imprimir_autor(nome_autor);
            cin>>autor_selecionado;
            book[i].autor=nome_autor[autor_selecionado].nome;

            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    || SELECIONE A EDITORA DO LIVRO|"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;


            imprimir_editora(nome_editora);
            cin>>editora_selecionado;
            book[i].editora=nome_editora[editora_selecionado].nome;

            cout<<"";
            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||    ALTERADO COM SUCESSO    ||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;

            system("break");
            system("cls");
            break;
        }

    }

    else if(alterar=="revista"){

        for(int i=codigo;i<tam_magazine;i++){
            system("cls");

            cout<<"----revista-codigo--("<<i<<")"<<endl;


            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||       NOME DO TITULO       ||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;
            cin.ignore();
            getline(cin,magazine[i].titulo);

            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||     ASSUNTO DA REVISTA     ||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;
            cin.ignore();
            getline(cin,magazine[i].assunto);

            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||SELECIONE A EDITORA DO LIVRO||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;

            imprimir_editora(nome_editora);

            cin>>editora_selecionado;
            magazine[i].editora=nome_editora[editora_selecionado].nome;

            cout<<"\t\t\t\t\t     _______________________________"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||    ALTERADO COM SUCESSO    ||"<<endl;
            cout<<"\t\t\t\t\t    ||                            ||"<<endl;
            cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
            cout<<"\t\t\t\t\t    |______________________________|"<<endl;

            system("break");
            system("cls");
            break;
        }
    }



    else{
        cout<< " cadastre antes de alterar " <<endl;
    }
}

void pesquisa(livros book[],revistas magazine[],string pesquisar, int tam_book, int tam_magazine){

    system("cls");
    for(int i=0;i<tam_book;i++){
        if(book[i].assunto==pesquisar ||book[i].autor==pesquisar || book[i].titulo==pesquisar || book[i].editora==pesquisar){
            system("cls");

            cout<<"\t\t\t\t\t------ Sessao livros ---"<< pesquisar<<endl;
            cout<<"\t\t\t\t\t       ___________________   ___________________    "<<endl;
            cout<<"\t\t\t\t\t    -/|  78   ~~**~~      \ /      ~~**~~   79  |\-."<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||        Titulo: "<<book[i].titulo<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||         Autor: "<<book[i].autor<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||       Assunto: "<<book[i].assunto<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||      Editora: "<<book[i].editora<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||Cod: ("<<i<<")_______________ : _____________  |||"<<endl;
            cout<<"\t\t\t\t\t   ||/====================\:/====================\||"<<endl;
            cout<<"\t\t\t\t\t   `---------------------~___~--------------------'' "<<endl;
            cout<<"";
            system("pause");

        }
    }
    for(int i=0;i<tam_magazine;i++){
        if(magazine[i].assunto==pesquisar ||magazine[i].editora==pesquisar|| magazine[i].titulo==pesquisar){


            system("cls");

            cout<<"\t\t\t\t\t------ Sessao revistas ---"<< pesquisar<<endl;
            cout<<"\t\t\t\t\t       ___________________   ___________________    "<<endl;
            cout<<"\t\t\t\t\t    -/|  78   ~~**~~      \ /      ~~**~~   79  |\-."<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||        Titulo: "<<magazine[i].titulo<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||         Autor: "<<magazine[i].editora<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||       Assunto: "<<magazine[i].assunto<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||Cod: ("<<i<<")_______________ : _____________  |||"<<endl;
            cout<<"\t\t\t\t\t   ||/====================\:/====================\||"<<endl;
            cout<<"\t\t\t\t\t   `---------------------~___~--------------------'' "<<endl;
            cout<<"";
            system("pause");



        }
    }
}

void retirada_usuario(retirada *&remove,livros book[],revistas magazine[],pessoa nome_usuario[],autor nome_autor[], editora nome_editora[], int &tam){

    static int contador5=0;
    contador5++;

    int aux;

    int pessoa_selecionada;
    int livro_selecionada;
    int revista_selecionada;

    remove= new retirada[tam];


    if(contador5 == tam){
        realocarVetor(remove,tam);

        cout<<" entrou no if " <<endl;
        system("pause");
    }

    for(int i=contador5;i<tam;i++){
        cout<< " Quem esta retirando " <<endl;
        imprimir_pessoa(nome_usuario);
        cin>>pessoa_selecionada;

        cout<< " Oque vai ser retirado 1-livro 2-revista "<<endl;
        cin>>aux;
        if(aux==1){

            system("cls");
            cout<<" Codigo do Livro Emprestado " <<endl;

            imprimir_livro(book,nome_autor);
            cin>>livro_selecionada;

            if(remove[livro_selecionada].verificador_livro==false){

                remove[i].verificador_livro=true;

                remove[i].nome_livro=    nome_usuario[pessoa_selecionada].nome;
                remove[i].titulo_livro=  book[livro_selecionada].titulo;
                remove[i].autor=         book[livro_selecionada].autor;
                remove[i].assunto_livro= book[livro_selecionada].assunto;
                remove[i].editora_livro= book[livro_selecionada].editora;

                cout<<"\t\t\t\t\t     _______________________________"<<endl;
                cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
                cout<<"\t\t\t\t\t    ||                            ||"<<endl;
                cout<<"\t\t\t\t\t    ||      Emprestimo dd/mm/aa   ||"<<endl;
                cout<<"\t\t\t\t\t    ||                            ||"<<endl;
                cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
                cout<<"\t\t\t\t\t    |______________________________|"<<endl;

                scanf("%d/%d/%d", &remove[i].dia_emprestimo , &remove[i].mes_emprestimo, &remove[i].ano_emprestimo);


                system("pause");
                system("cls");
                cout<<"\t\t\t\t\t-----------LIVRO COD:"<<livro_selecionada<<endl;
                cout<<"\t\t\t\t\t       ___________________   ___________________    "<<endl;
                cout<<"\t\t\t\t\t    -/|  78   ~~**~~      \ /      ~~**~~   79  |\-."<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||        Titulo: "<<remove[i].titulo_livro<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||         Autor: "<<remove[i].autor<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||       Editora: "<<remove[i].editora_livro<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||                                          ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||       Assunto "<<remove[i].assunto_livro<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||Cod: ("<<i<<")_______________ : _____________  |||"<<endl;
                cout<<"\t\t\t\t\t   ||/====================\:/====================\||"<<endl;
                cout<<"\t\t\t\t\t   `---------------------~___~--------------------'' "<<endl;

                system("pause");
                system("cls");
                break;
            }
            else{
                system("cls");
                cout<<"\t\t\t\t\t     _______________________________"<<endl;
                cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
                cout<<"\t\t\t\t\t    ||                            ||"<<endl;
                cout<<"\t\t\t\t\t    || REVISTA JA FOI EMPRESTADA  ||"<<endl;
                cout<<"\t\t\t\t\t    ||                            ||"<<endl;
                cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
                system("pause");
                break;
            }
        }
        else if(aux==2){

            system("cls");
            cout<<" Codigo do revista Emprestada " <<endl;

            imprimir_revista(magazine,nome_editora);
            cin>>revista_selecionada;

            if(remove[revista_selecionada].verificador_revista==false){

                remove[i].verificador_revista=true;

                remove[i].nome_revista=            nome_usuario[pessoa_selecionada].nome;
                remove[i].titulo_revista=          magazine[revista_selecionada].titulo;
                remove[i].editora_revista=         magazine[revista_selecionada].editora;
                remove[i].assunto_revista=         magazine[revista_selecionada].assunto;

                system("pause");
                system("cls");

                cout<<"\t\t\t\t\t--------revista cod:"<<revista_selecionada<<endl;
                cout<<"\t\t\t\t\t       ___________________   ___________________    "<<endl;
                cout<<"\t\t\t\t\t    -/|  78   ~~**~~      \ /      ~~**~~   79  |\-."<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||        Titulo: "<<remove[i].titulo_revista<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||         editora: "<<remove[i].editora_revista<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||       Assunto: "<<remove[i].assunto_revista<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
                cout<<"\t\t\t\t\t   ||||Cod: ("<<i<<")_______________ : _____________  |||"<<endl;
                cout<<"\t\t\t\t\t   ||/====================\:/====================\||"<<endl;
                cout<<"\t\t\t\t\t   `---------------------~___~--------------------'' "<<endl;

                cout<<" Emprestimo dd/mm/aa "<<endl;
                scanf("%d/%d/%d", &remove[i].dia_emprestimo , &remove[i].mes_emprestimo, &remove[i].ano_emprestimo);
                cout<<""<<endl;

                system("pause");
                system("cls");
                break;
            }
            else{
                system("cls");
                cout<<"\t\t\t\t\t     _______________________________"<<endl;
                cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
                cout<<"\t\t\t\t\t    ||                            ||"<<endl;
                cout<<"\t\t\t\t\t    || REVISTA JA FOI EMPRESTADA  ||"<<endl;
                cout<<"\t\t\t\t\t    ||                            ||"<<endl;
                cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
                cout<<"\t\t\t\t\t    |______________________________|"<<endl;
                system("pause");
                break;
            }
        }
    }
}

void verificar_usuario(retirada remove[], int aux, int TAM) {
    static int contador=0;
    contador++;
    bool atrasado = false;

    int dia=9;
    int mes=5;
    int ano=2023;

    for(int i=aux;i<TAM;i++){


        remove[i].dia_emprestimo += 7;
        if ( remove[i].dia_emprestimo> 31) {
            remove[i].dia_emprestimo -= 31;
            remove[i].mes_emprestimo++;
        }
        if (  remove[i].mes_emprestimo > 12) {
            remove[i].mes_emprestimo = 1;
            remove[i].ano_emprestimo++;
        }

        if (remove[i].ano_emprestimo < ano) {
            atrasado = true;
        } else if (remove[i].ano_emprestimo == ano && remove[i].mes_emprestimo < mes) {
            atrasado = true;
        } else if (remove[i].ano_emprestimo == ano &&remove[i].mes_emprestimo == mes && remove[i].dia_emprestimo< dia) {
            atrasado = true;
        }
        if (atrasado) {

            cout << "Esta pessoa esta com o livro em atraso." << endl;
            cout<<""<<endl;
            break;
        }
        else {
            cout << "Data de Vencimento: " << remove[i].dia_emprestimo << "/" << remove[i].mes_emprestimo << "/" << remove[i].ano_emprestimo << endl;
            cout<<""<<endl;
            break;
        }
    }
}

void pesquisar_usuario(retirada remove[], livros book[], pessoa nome_usuario[], int TAM){
    string pesquisa_pessoa;


    system("cls");
    cout<<"\t\t\t\t\t     _______________________________"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||   DIGITE O NOME DA PESSOA  ||"<<endl;
    cout<<"\t\t\t\t\t    ||                            ||"<<endl;
    cout<<"\t\t\t\t\t    ||____________________________||"<<endl;
    cout<<"\t\t\t\t\t    |______________________________|"<<endl;
    imprimir_pessoa(nome_usuario);
    cin.ignore();
    getline(cin,pesquisa_pessoa);

    for(int i=0;i<TAM;i++){
        if(pesquisa_pessoa==remove[i].nome_livro){


            cout<<"\t\t\t\t\t------------- Nome:"<<remove[i].nome_livro<<endl;
            cout<<"\t\t\t\t\t       ___________________   ___________________    "<<endl;
            cout<<"\t\t\t\t\t    -/|  78   ~~**~~      \ /      ~~**~~   79  |\-."<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||        Titulo: "<<remove[i].titulo_livro<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||        Autor: "<<remove[i].autor<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||       Editora: "<< remove[i].editora_livro<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||       Assunto: "<<remove[i].assunto_livro<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||Cod: ("<<i<<")_______________ : _____________  |||"<<endl;
            cout<<"\t\t\t\t\t   ||/====================\:/====================\||"<<endl;
            cout<<"\t\t\t\t\t   `---------------------~___~--------------------'' "<<endl;

            aux_geral4=i;
            verificar_usuario(remove,aux_geral4,TAM);
            system("pause");
        }
        else if (pesquisa_pessoa==remove[i].nome_revista){
            cout<<"\t\t\t\t\t------------- Nome:"<<remove[i].nome_revista<<endl;
            cout<<"\t\t\t\t\t       ___________________   ___________________    "<<endl;
            cout<<"\t\t\t\t\t    -/|  78   ~~**~~      \ /      ~~**~~   79  |\-."<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||        Titulo: "<<remove[i].titulo_revista<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||         Autor: "<<remove[i].editora_revista<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||       Assunto: "<<remove[i].assunto_revista<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||                                         ||||"<<endl;
            cout<<"\t\t\t\t\t   ||||Cod: ("<<i<<")_______________ : _____________  |||"<<endl;
            cout<<"\t\t\t\t\t   ||/====================\:/====================\||"<<endl;
            cout<<"\t\t\t\t\t   `---------------------~___~--------------------'' "<<endl;

            aux_geral4=i;
            verificar_usuario(remove,aux_geral4,TAM);
            system("pause");

        }

    }
}

int main()
{    system("COLOR F");

    int tam_autor=3,tam_editora=3,tam_usuario=3,tam_remove=3,tam_magazine=3,tam_book=3;
    int tamanho=3;
    int contador_case_selecinado=1;


    livros   *book         = new livros[tam_book];
    revistas *magazine     = new revistas[tam_magazine];
    retirada *remove       = new retirada[tam_remove];
    pessoa   *nome_usuario = new pessoa[tam_usuario];
    autor    *nome_autor   = new autor[tam_autor];
    editora  *nome_editora = new editora[tam_editora];

    int opcao;
    string pesquisar;
    int resposta_case1,resposta_case2;

    do{

        system("cls");
        cout<<"\t\t\t\t\t     _______________________________ "<<endl;
        cout<<"\t\t\t\t\t    |\_________LIVRARIA____________/|"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    || 1-Cadastro/alterar autor   ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    || 2-Cadastro/alterar editora ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    || 3-Cadastrar livro          ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    || 4-Cadastro revista         ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    || 5-Cadastrar pessoa         ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    || 6-Pesquisar                ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    || 7-Historico pessoa         ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    || 8-Altera livro e revista   ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    || 9-Retirar livro/revista    ||"<<endl;
        cout<<"\t\t\t\t\t    ||                            ||"<<endl;
        cout<<"\t\t\t\t\t    || 10- sair                   ||"<<endl;
        cout<<"\t\t\t\t\t    ||jgs__________________________||"<<endl;
        cout<<"\t\t\t\t\t    |/_____________________________\|"<<endl;

        cin>>opcao;

        switch(opcao){

        case 1:
            system("cls");
            cout<< " 1-cadastrar autor  2-alterar autor  "<<endl;
            cin>>resposta_case1;

            if(resposta_case1==1){
                contador_case_selecinado++;
                cadastro_autor(nome_autor,tam_autor);
            }
            else if(resposta_case1==2){
                alterar_autor(nome_autor,tam_autor);
            }
            break;

        case 2:
            system("cls");

            cout<< " 1-cadastrar editora  2-alterar editora  "<<endl;
            cin>>resposta_case2;

            if(resposta_case2==1){
                cadastro_editora(nome_editora,tam_editora);
                contador_case_selecinado++;
            }
            else if(resposta_case2==2){
                alterar_editora(nome_editora,tam_editora);
            }
            break;

        case 3:
            contador_case_selecinado++;
            system("cls");
            cadastro_livro(book,nome_autor,nome_editora,tam_book);
            break;

        case 4:
            contador_case_selecinado++;
            system("cls");
            cadastro_revista(magazine,nome_editora,tam_magazine);
            break;

        case 5:
            contador_case_selecinado++;
            cadastro_pessoa(nome_usuario,tam_usuario);
            break;

        case 6:
            system("cls");

            cout<< " oque voce desejar pesquisar " <<endl;
            cin.ignore();
            getline(cin,pesquisar);
            pesquisa(book,magazine,pesquisar,tam_book,tam_magazine);
            break;

        case 7:
            pesquisar_usuario(remove,book,nome_usuario,tam_usuario);
            break;
        case 8:
            alterar_livro_revista(book,magazine,nome_autor,nome_editora,tam_book,tam_magazine);
            break;

        case 9:
            system("cls");
            contador_case_selecinado++;
            retirada_usuario(remove,book,magazine,nome_usuario,nome_autor,nome_editora,tam_remove);
            break;

        case 10:
            cout<<" saindo " <<endl;
            break;
        default:
            cout<< " Opcao invalida " <<endl;

        }

    }while(opcao!=10);

    delete[] book;
    delete[] magazine;
    delete[] remove;
    delete[] nome_usuario;
    delete[] nome_editora;
    delete[] nome_autor;

    return 0;
}
