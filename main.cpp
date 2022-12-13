#include "class1.hpp"
#include "person.hpp"
#include "plural.hpp"
#include "student.hpp"
#include "teacher.hpp"

void menu();
void classManagment();
void studentManagment();
void teacherManagment();
void pluralManagment();

int main ()
{

    while (true)
    {
        menu();
        char option;
        cin >> option;

        if(option == '1')
        {
            classManagment();
            char classOption;
            cin >> classOption;
        }

        if(option == '2')
        {
            studentManagment();
            char studentOption;
            cin >> studentOption;
        }

        if(option == '3')
        {
            teacherManagment();
            char teacherOption;
            cin >> teacherOption;
            
        }
        if(option == '4')
        {
            pluralManagment();
            char pluralOption;
            cin >> pluralOption;
        }
        if(option == '0')
        {
            return false;
        }
        else
        {
            cout << "" << endl;
            cout << "\t* Opcao invalida, tente novamente! *";
        }
    }
    
    /*cout << "BEM VINDO AO SISTEMA PLURAL" << endl; 


    cout << "*** LOGIN *** " << endl;
    int login;
    cin >> login;
    cout << "SENHA:" << endl;
    int senha;
    cin >> senha;*/






    return 0;

}
   
   
void menu()
{
    cout << "" << endl;
    cout << "" << endl;
	cout << "\t\t\tMENU\t\t\t" << endl;
    cout << "" << endl;
    cout << "\t*****************************************\t" << endl;
    cout << "\t*\t                           \t*" << endl;
	cout << "\t*\t1.Gerenciamento Turmas     \t*" << endl; //mudar esses nomes depois
	cout << "\t*\t2.Gerenciamento Alunos     \t*" << endl;
	cout << "\t*\t3.Gerenciamento Professores\t*" << endl;
	cout << "\t*\t4.Gerenciamento do Curso  \t*" << endl;
	cout << "\t*\t0.Sair                     \t*" << endl;
    cout << "\t*\t                           \t*" << endl;
    cout << "\t*****************************************\t" << endl;
    cout << "" << endl;
    cout << "\tDigite sua escolha: ";
}

void classManagment()
{
    cout << "" << endl;
    cout << "" << endl;
	cout << "\t\tGERENCIAMENTO DAS TURMAS\t\t\t" << endl;
    cout << "" << endl;
    cout << "\t*****************************************\t" << endl;
    cout << "\t*\t                           \t*" << endl;
	cout << "\t*\t1.Extensivo Tarde          \t*" << endl; //mudar esses nomes depois
	cout << "\t*\t2.Extensivo Noite          \t*" << endl;
	cout << "\t*\t3.Turma Medicina           \t*" << endl;
	cout << "\t*\t0.Sair                     \t*" << endl;
    cout << "\t*\t                           \t*" << endl;
    cout << "\t*****************************************\t" << endl;
    cout << "" << endl;
    cout << "\tDigite sua escolha: ";
}

void studentManagment()
{
    cout << "" << endl;
    cout << "" << endl;
	cout << "\t\tGERENCIAMENTO DE ALUNOS\t\t\t" << endl;
    cout << "" << endl;
    cout << "\t*****************************************\t" << endl;
    cout << "\t*\t                           \t*" << endl;
	cout << "\t*\t1.Adicionar Aluno          \t*" << endl; //mudar esses nomes depois
	cout << "\t*\t2.Buscar Aluno             \t*" << endl;
	cout << "\t*\t3.Excluir Aluno            \t*" << endl;
	cout << "\t*\t4.Gerenciar Aluno          \t*" << endl;
	cout << "\t*\t0.Sair                     \t*" << endl;
    cout << "\t*\t                           \t*" << endl;
    cout << "\t*****************************************\t" << endl;
    cout << "" << endl;
    cout << "\tDigite sua escolha: ";

}

void teacherManagment()
{
    cout << "" << endl;
    cout << "" << endl;
	cout << "\t\tGERENCIAMENTO DE PROFESSORES\t\t\t" << endl;
    cout << "" << endl;
    cout << "\t*****************************************\t" << endl;
    cout << "\t*\t                           \t*" << endl;
	cout << "\t*\t1.Adicionar Professor      \t*" << endl; //mudar esses nomes depois
	cout << "\t*\t2.Buscar Professor         \t*" << endl;
	cout << "\t*\t3.Excluir Professor        \t*" << endl;
	cout << "\t*\t4.Gerenciar Professor      \t*" << endl;
	cout << "\t*\t4.Pagamentos               \t*" << endl;
	cout << "\t*\t0.Sair                     \t*" << endl;
    cout << "\t*\t                           \t*" << endl;
    cout << "\t*****************************************\t" << endl;
    cout << "" << endl;
    cout << "\tDigite sua escolha: ";
}

void pluralManagment()
{
    cout << "" << endl;
    cout << "" << endl;
	cout << "\t\tGERENCIAMENTO DO CURSO\t\t\t" << endl;
    cout << "" << endl;
    cout << "\t*****************************************\t" << endl;
    cout << "\t*\t                           \t*" << endl;
	cout << "\t*\t1.Pagamentos do mês        \t*" << endl; //mudar esses nomes depois
	cout << "\t*\t2.Entrada do mês           \t*" << endl;
	cout << "\t*\t3.Caixa                    \t*" << endl;
	cout << "\t*\t4.Contas                   \t*" << endl;
	cout << "\t*\t0.Sair                     \t*" << endl;
    cout << "\t*\t                           \t*" << endl;
    cout << "\t*****************************************\t" << endl;
    cout << "" << endl;
    cout << "\tDigite sua escolha: ";
}