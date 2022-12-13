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

void classManagment_lvl_2(char option);
void studentManagment_lvl_2(char option);
void teacherManagment_lvl_2(char option);
void pluralManagment_lvl_2(char option);


int main ()
{
    /*
    cout << "BEM VINDO AO SISTEMA PLURAL" << endl; 


    cout << "*** LOGIN *** " << endl;
    int login;
    cin >> login;
    cout << "SENHA:" << endl;
    int senha;
    cin >> senha;*/

    //tela de bem vindo com tempo e apagando coisas

    while (true)
    {
        //login
    }

    while (true)
    {
        menu();
        char option;
        cin >> option;

        if(option == '1')
        {
            classManagment();
        }

        if(option == '2')
        {
            studentManagment();
            
        }

        if(option == '3')
        {
            teacherManagment();
            
            
        }
        if(option == '4')
        {
            pluralManagment();
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

//---------------GERENCIAMENTO DAS TURMAS------------------
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
    char option;
    cin >> option;
    classManagment_lvl_2(option);
    
}

void classManagment_lvl_2(char option)
{

        if(option == '1')
        {
          
        }

        if(option == '2')
        {
            
        }

        if(option == '3')
        {
            
        }
        if(option == '0')
        {
            
        }
        else
        {
            cout << "" << endl;
            cout << "\t* Opcao invalida, tente novamente! *";
        }
}

//---------------GERENCIAMENTO DE ALUNOS------------------

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
    char option;
    cin >> option;
    studentManagment_lvl_2(option);

}

void studentManagment_lvl_2(char option)
{

        if(option == '1')
        {
            cout << "\tNome do aluno: ";
            string name;
            cin >> name;
            cout << "\tIdade: ";
            size_t age;
            cin >> age;
            cout << "\tNúmero de telefone: "; //proibir telefones invalidos
            size_t number;
            cin >> number;
            cout << "\tTurma: "; 
            string classType;
            cin >> classType;

            Student aluno(name, age, number, classType);

        }

        if(option == '2')
        {
            
        }

        if(option == '3')
        {
            
        }
        if(option == '4')
        {
            
        }
        if(option == '0')
        {
            
        }
        else
        {
            cout << "" << endl;
            cout << "\t* Opcao invalida, tente novamente! *";
        }
}

//---------------GERENCIAMENTO DE PROFESSORES------------------

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
    char option;
    cin >> option;
    teacherManagment_lvl_2(option);
}

void teacherManagment_lvl_2(char option)
{

        if(option == '1')
        {
          
        }

        if(option == '2')
        {
            
        }

        if(option == '3')
        {
            
        }
        if(option == '4')
        {
            
        }
        if(option == '0')
        {
            
        }
        else
        {
            cout << "" << endl;
            cout << "\t* Opcao invalida, tente novamente! *";
        }
}


//---------------GERENCIAMENTO DO CURSO------------------

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
    char option;
    cin >> option;
    pluralManagment_lvl_2(option);
}

void pluralManagment_lvl_2(char option)
{

        if(option == '1')
        {
          
        }

        if(option == '2')
        {
            
        }

        if(option == '3')
        {
            
        }
        if(option == '4')
        {
            
        }
        if(option == '0')
        {
            
        }
        else
        {
            cout << "" << endl;
            cout << "\t* Opcao invalida, tente novamente! *";
        }
}