//Gerardo Demian Mora Hernandez
//Fundamentos de base de datos 
//03-05-2021
//Elaborar un programa en C++ que permita dividir y unir archivos de texto
#include <iostream>
#include <stdio.h>
#include<string.h>
#include<math.h>
#include <direct.h>
using namespace std;
int main(){	
	FILE *arch;
	int opc,res;

	do{
		cout<<"\n1.-Hacer Respaldo del Archivo";
		cout<<"\n2.-Dividir el Archivo";
		cout<<"\n3.-Unir el Archivo";
		cout<<"\n4.-salir";
		cout<<"\nDigite la opcion: ";
		cin>>opc;
		
	switch(opc){
	case 1:
		printf("Respaldando en Multivolumenes....");
		res=system("tar -M Ejemplo para copiar.rar ");
		printf("Respaldo Hecho: ",res);
		system("pause");
		break;
	
	case 2: 
		cout<<" ";
		system("pause");
		break;
		
	case 3: 
		cout<<" ";
		system("pause");
		break;
	
	}
	}while(opc!=4);

	
}
