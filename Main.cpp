#include"Estudiante.cpp"
#include<iostream>
using namespace std;
int main(){
	string carne,nombres,apellidos;
	int telefono;
	cout<<"Ingrese Numero de Carne: ";
	cin>>carne;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	
		Estudiante objeto = Estudiante(nombres,apellidos,telefono,carne);
	objeto.mostrar();
	
	cout<<"--------- Modificar ------------"<<endl;
	cout<<"Ingrese carne: ";
	cin>>carne;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	objeto.setNit(carne);
	objeto.setNombres(nombres);
	objeto.setApellidos(apellidos);
	objeto.setTelefono(telefono);

	cout<<objeto.getNit()<<endl;
	cout<<objeto.getNombres()<<endl;
	cout<<objeto.getApellidos()<<endl;
	cout<<objeto.getTelefono()<<endl;
	
	
}