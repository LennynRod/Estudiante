#include "Persona.cpp"
#include<iostream>

using namespace std;
class Estudiante:Persona{
	// Atributos
	private : string carne;
	public: 
	//Constructor
		Estudiante(string nom,string ape,int tel,string n):Persona(nom,ape,tel){
			carne=n;
		}
	//modificar (set)
	void setNit(string n){carne=n;}	
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}	 
	void setTelefono(int tel){telefono=tel;}	 
	 //mostrar (get) 
	 	string getNit(){return carne;}
	 	string getNombres(){return nombres;}
	 	string getApellidos(){return apellidos;}
	 	int getTelefono(){return telefono;}	
	// Metodos
		void mostrar(){
cout<<"-----------------------------------------------"<<endl;
cout<<carne<<","<<nombres<<", "<<apellidos<<", "<<telefono<<endl;
}
};