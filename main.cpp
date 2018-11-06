#include <iostream>
#include "employee.h"
#include "date.h"
#include "doctor.h"
#include "nurse.h"
#include "paciente.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib> // exit function prototype

using namespace std;

int request = 1;
int rq1 = 0;
int i = 3;
int tipo;
string nome;
string endereco;
string rg;
string disease;
string cargo;

int main(){

    date m1(2000, 9, 29, 1, 34);
    date m2(2004, 9, 19, 22, 12);
    date m3(2025, 1, 5, 2, 11);

    paciente p1("Fernando ALvarenga", "Rua Albergue, 1231", "20064054781", m1, "Gripe");
    paciente e1("Pedro Bundinha", "Rua Albergue, 1231", "20064054781", m1, "Gonorreia");
    paciente h1("Halison Roludo", "Rua Albergue, 1231", "20064054781", m1, "AIDS");

    vector<paciente> jj;

    jj.push_back(e1);
    jj.push_back(p1);
    jj.push_back(h1);

    nurse n2("Jurema assis", "rua bilubilu", "425641685", m1, 2145, 50, m2, "qualquercoisa", "limpamerda", 2, jj);

    cout << n2 << endl;

    doctor d1("Gabriel Toledo", "Rua Almirante, 1212", "201948592", m2, 12300, 100, m3, "Clinico Geral", 24, jj);

    vector<employee>qq;
    qq.push_back(n2);
    qq.push_back(d1);


    employee *ptr;
    ptr = &d1;

    e1.setDoctorName(d1.getNome());
    p1.setDoctorName(d1.getNome());
    h1.setDoctorName(d1.getNome());

    e1.setNurseName(n2.getNome());
    p1.setNurseName(n2.getNome());
    h1.setNurseName(n2.getNome());

    cout << d1;

    cout << e1;

    while(request != 0){
    cout << "1- Gravar" << endl
    << "2- Ler" << endl
    << "3- SAIR"<<endl;
    cin >> request;
    if(request == 1){
            while(rq1 !=1){
            cout << "Registrar paciente ou funcionário:" << endl
            << "1 - Paciente" << endl
            << "2 - Funcionario"<< endl;
            cin >> rq1;
            if(rq1 == 1){
               ofstream outClientFile( "paciente.txt", ios::out );
                jj[i];
                cout <<"Nome:";
                cin >> nome;
                cout << endl <<"Endereco:";
                cin >> endereco;
                cout << endl  <<"Rg:";
                cin >> rg ;
                cout << endl  <<"Doenca:";
                cin >> disease;
                cout << "Nome do Medico:" << d1.getNome()<<endl;
                jj[i].setDoctorName(d1.getNome());
                cout << "Nome do Enfermeiro:" << n2.getNome()<<endl;
                jj[i].setNurseName(n2.getNome());
                jj[i].setNome(nome);
                jj[i].setEndereco(endereco);
                jj[i].setRg(rg);
                jj[i].setDisease(disease);
                outClientFile << nome << ' ' << endereco << ' ' <<  rg << ' ' << disease << ' ' << d1.getNome() << ' ' << n2.getNome() <<  endl;
                i++;
                break;
            }
            if(rq1 == 2) {
                 ofstream outClientFile( "funcionario.txt", ios::out );
                 qq[i];
                cout <<"Nome:";
                cin >> nome;
                cout << endl <<"Endereco:";
                cin >> endereco;
                cout << endl  <<"Rg:";
                cin >> rg ;
                cout << endl << "Cargo:";
                cin >> cargo;



            }
            }
            }
            if(request == 2){
                    cout << "1 - Ler Paciente" << endl
                    << "2 - Ler Funcionario" << endl;
                    cin >> tipo;
                    if(tipo == 1){
            ifstream inClientFile("paciente.txt", ios::in );
            while(inClientFile >> nome >> endereco >> rg >> disease)
            paciente(nome,endereco,rg,m1,disease);
                    }
            void paciente(string nome,string endereco,string rg,string disease);

                {
        cout << nome << " " << endereco << " " << rg << " " << disease << endl;

                }

            }
            if(request == 3){
                break;
            }








            }
/*
cout <<"nome:";
cin >> nome;
cout <<"endereco:";
cin >> endereco;
cout <<"rg:";
cin >> rg ;
cout <<"doenca:";
cin >> disease;

jj[i].setNome(nome);
jj[i].setEndereco(endereco);
jj[i].setRg(rg);
jj[i].setDisease(disease);
cout << jj[i];
*/

return 0;
}

