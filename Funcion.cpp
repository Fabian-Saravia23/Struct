#include <iostream>
using namespace std;
// metodos y funciones = ejecutan una porcion de codigo N cantidad de veces segun se mande a llamar
// metodo = no retorna un valor 
// funcion  un tipo de dato determinado
// crean una funcion o un metodo 

int suma(int num1,int num2,int num3);
void suma(int &num1, int &num2);
main() {
	
	int a=10,b= 20;
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b; "<<b<<endl;
	
	
	
	
	system("pause");
}
// funcion que sume dos valores
int suma(int num1,int num2,int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
	
}
// Metodo
void suma(int &num1, int &num2){
	int resultado = 0;
	num1+=1;
	num2+=1;
	resultado = num1 + num2;
	cout<<resultado<<endl;
 }
