
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	system("color 4f");
	float saldo = 0, ingresado, retirar, opc;
	
	cout<<"\t\t\t========================================="<<endl;
	cout<<"\t\t\tPrograma cajero automatico."<<endl;
	cout<<"\t\t\t========================================="<<endl<<endl;
	
	
	while(opc != 4){
		system("pause>null");
		system("cls");
	
			cout<<"\t\t\t================="<<endl;
			cout<<"\t\t\tCajero Automatico"<<endl;
			cout<<"\t\t\t================="<<endl;
		cout<<"\nQue operacion desea realizar."<<endl;
		cout<<"1. Ingresar dinero."<<endl;
		cout<<"2. Retirar dinero."<<endl;
		cout<<"3. Consultar."<<endl;
		cout<<"4. Salir."<<endl;
		cout<<"Seleccione una opcion: ";
		cin>>opc;
								
		switch(int (opc)){
			case 1:
				cout<<"Cuanto dinero desea depositar: ";
				cin>>ingresado;
				saldo += ingresado;
				if(ingresado < 0){
					cout<<"---------------------------------"<<endl;
					cout<<"No puede ingresar saldo negativo."<<endl;
					cout<<"---------------------------------"<<endl;
					saldo -= ingresado;
				}
				else{
				cout<<"#########################################################################"<<endl;
				cout<<"Su dinero en lacuenta bancaria es: "<<fixed<<setprecision(2)<<saldo<<endl;
				cout<<"#########################################################################"<<endl;					
				}
				break;		
			case 2:
				cout<<"Cuanto dinero desea retirar: ";
				cin>>retirar;
				if(retirar<0){
					cout<<"--------------------------------"<<endl;
					cout<<"No puede retirar saldo negativo ya que el systema no lo permite."<<endl;
					cout<<"--------------------------------"<<endl;			
				}
				else if(retirar>saldo){
					cout<<"--------------------------------"<<endl;
					cout<<"No tiene esa cantidad de dinero en la cuenta bancari."<<endl;
					cout<<"--------------------------------"<<endl;
				}
				else{
					saldo -= retirar;
					cout<<"---------------------------------"<<endl;
					cout<<"Su saldo restante es de: "<<fixed<<setprecision(2)<<saldo<<endl;
					cout<<"---------------------------------"<<endl;
				}
				break;
			case 3:
				cout<<"----------------------------------"<<endl;
				cout<<"Su saldo en la cuenta bancaria es de: "<<fixed<<setprecision(2)<<saldo<<endl;
				cout<<"----------------------------------"<<endl;
				break;
			case 4:
				cout<<"\nPreciona cualquier tecla para salir.";
				break;
			default :
			cout<<"--------------------------------------------------------------------------------------------------"<<endl;
			cout<<"Digite una opcion  [1-4] en caso de no respetar esta accion de regresara al menu anterior ."<<endl;	
			cout<<"--------------------------------------------------------------------------------------------------"<<endl;
			break;
		}
	}
	
	getch();
	return 0;	
}
