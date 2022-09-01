#include<iostream>
#include<math.h>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<fstream>

using namespace std;

fstream archivo("Aerolinea.txt");
char nombre[100], numero1[100], apellido[100], maletas[100], edad[100], origen[100], destino[100], pasajeros[100], horario[100];
char clase[100], volver[100];
int numero, edad1, maleta, origen1, destino1, pasajero, volver1;
string impresion1, impresion2;

int membrete(){
	
SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),6);	
cout<<"\t\t\t\t\t     .oo                     8  o                    "<<endl;
cout<<"\t\t\t\t\t    .P 8                     8                       "<<endl;
cout<<"\t\t\t\t\t   .P  8 .oPYo. oPYo. .oPYo. 8  8 odYo. .oPYo. .oPYo."<<endl;
cout<<"\t\t\t\t\t  oPooo8 8oooo8 8  `' 8    8 8  8 8' `8 8oooo8 .oooo8"<<endl;
cout<<"\t\t\t\t\t .P    8 8.     8     8    8 8  8 8   8 8.     8    8"<<endl;
cout<<"\t\t\t\t\t.P     8 `Yooo' 8     `YooP' 8  8 8   8 `Yooo' `YooP8"<<endl<<endl;
SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
	
}

int lugar_salida(){
	
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),5);
	cout<<"\t\t\t\t\t\t ______________________________"<<endl;
	cout<<"\t\t\t\t\t\t|       Lugar de origen        |"<<endl;
	cout<<"\t\t\t\t\t\t|______________________________|"<<endl<<endl;
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
	
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
	cout<<"\t\t\t|--------------------------------------------------------------------------------|"<<endl;
	cout<<"\t\t\t|1- Aeropuerto Las Americas(RD)     |16- Aeropuerto Monsenor Arnulfo Romero(ESA) |"<<endl;
	cout<<"\t\t\t|2- Aeropuerto de Punta Cana(RD)    |17- Aeropuerto de Bluefields(NIC)           |"<<endl;
	cout<<"\t\t\t|3- Aeropuerto de Jacmel(HAI)       |18- Aeropuerto de Bilwi(NIC)                |"<<endl;
	cout<<"\t\t\t|4- Aeropuerto de Port de Paix(HAI) |19- Aeropuerto de Tocumen(PAN)              |"<<endl;
	cout<<"\t\t\t|5- Aeropuerto Jose Marti(CUB)      |20- Aeropuerto Toncontin(HON)               |"<<endl;
	cout<<"\t\t\t|6- Aeropuerto de Santiago(CUB)     |21- Aeropuerto Goloson(HON)                 |"<<endl;
	cout<<"\t\t\t|7- Aeropuerto de Cancun(MEX)       |22- Aereopuerto Ezeizac(ARG)                |"<<endl;
	cout<<"\t\t\t|8- Aeropuerto de Mexico(MEX)       |23- Aereopuerto Jorge Nerwbery(ARG)         |"<<endl;
	cout<<"\t\t\t|9- Aereopuerto de Coatepeque(GUA)  |24- Aeropuerto de Sao Paulo(BRA)            |"<<endl;
	cout<<"\t\t\t|10- Aeropuerto Mundo Maya(GUA)     |25- Aeropuerto de Galeao(BRA)               |"<<endl;
	cout<<"\t\t\t|11- Aeropuerto Diego Aracena(CHI)  |26- Aeropuerto El Dorado(COL)               |"<<endl;
	cout<<"\t\t\t|12- Aeropuerto Mataveri(CHI)       |27- Aeropuerto Palonegro(COL)               |"<<endl;
	cout<<"\t\t\t|13- Aeropuerto de Carrasco(URU)    |28- Aeropuerto Simon Bolivar(VEN)           |"<<endl;
	cout<<"\t\t\t|14- Aeropuerto de Paysandu(URU)    |29- Aeropuerto Nueva Loja(ECU)              |"<<endl;
	cout<<"\t\t\t|15- Aeropuerto Guarani(PAR)        |30- Aeropuerto Jorge Chavez(PER)            |"<<endl;
	cout<<"\t\t\t|--------------------------------------------------------------------------------|"<<endl;
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
	
	cout<<"\nElija un origen: "; 
	cin.getline(origen, 100);

	origen1 = atoi(origen);

}

int preguntas(){
	
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),5);
	cout<<"\t\t\t\t\t\t ______________________________"<<endl;
	cout<<"\t\t\t\t\t\t|       Ingrese sus datos      |"<<endl;
	cout<<"\t\t\t\t\t\t|______________________________|"<<endl<<endl;
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
	
	cout<<"\nNombre: ";
	cin.getline(nombre, 100);
	
	for (int i = 0; i < strlen(nombre); i++){
				             					
		while(!isalpha(nombre[i]) && !isspace(nombre[i])){
			
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
			cout<<"\nERROR, no se aceptan numeros\n";	
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
			
			cout<<"\nNombre: ";			
			gets(nombre);	
		}
		
	}
	
	cout<<"\nApellido: ";
	cin.getline(apellido, 100);
	
		for (int i = 0; i < strlen(apellido); i++){
		
		             					
		while(!isalpha(apellido[i]) && !isspace(apellido[i])){
			
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
			cout<<"\nERROR, no se aceptan numeros\n";	
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
		
			cout<<"\nApellido: ";
			cin.getline(apellido, 100);	
		}
		
	}
	
	cout<<"\nTelefono: ";
	cin.getline(numero1, 100);
	
	numero = atoi(numero1);
			
	for (int i = 0; i < strlen(numero1); i++){
		
		             					
		while(isalpha(numero1[i]) && !isspace(numero1[i])){
			
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
			cout<<"\nERROR, no se aceptan letras\n";	
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
		
			cout<<"\nTelefono: ";
			cin.getline(numero1, 100);	
		}
	}
	
		cout<<"\nCantidad de maletas: ";
		cin.getline(maletas, 100);	
		
		for (int i = 0; i < strlen(maletas); i++){
		
		             					
		while(isalpha(maletas[i]) && !isspace(maletas[i])){
			
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
			cout<<"\nERROR, no se aceptan letras\n";	
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
		
			cout<<"\nCantidad de maletas: ";
			cin.getline(maletas, 100);		
		}
		
	}
		
		maleta = atoi(maletas);
		
		if(maleta <2){
		
		cout<<"\nSu maleta es 1 y es gratis \n";	
			
		}
		
		else if (maleta >=2){
		
		cout<<"\nLas maletas extras valen 10 dolares cada una \n";
		
		}	
	
		cout<<"\nCantidad de Pasajeros: ";
		cin.getline(pasajeros, 100);
		
		for (int i = 0; i < strlen(pasajeros); i++){
		
		             					
		while(isalpha(pasajeros[i]) && !isspace(pasajeros[i])){
			
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
			cout<<"\nERROR, no se aceptan letras\n";	
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
		
			cout<<"\nCantidad de Pasajeros: ";
			cin.getline(pasajeros, 100);
		}
	  }
		
		pasajero = atoi(pasajeros);
		
		if(pasajero >5){
		
		cout<<"\nNo pueden ser mas de 5 pasajeros\n";	
			
		cout<<"\nCantidad de Pasajeros: ";
		cin.getline(pasajeros, 100);	
		
		}
		
		cout<<"\nEdad: ";
		cin.getline(edad, 100);
		
		for (int i = 0; i < strlen(edad); i++){
		
		             					
		while(isalpha(edad[i]) && !isspace(edad[i])){
			
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
			cout<<"\nERROR, no se aceptan letras\n";	
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
		
			cout<<"\nEdad: ";
			cin.getline(edad, 100);
		}
	  }
		
		edad1 = atoi(edad);
		
		if(edad1 >=18){
		
		cout<<"\nUsted es mayor de edad su boleto cuesta 75 dolares\n\n";	
			
		}
		
		else if( edad1 <18){
		
		cout<<"\nUsted es un menor de edad su boleto cuesta 25 dolares\n\n";
		
		}
		
	    archivo.open("Aerolinea.txt", ios::out);
	    archivo<<"\nNombre: "<<nombre<<endl;
		archivo<<"\nApellido: "<<apellido<<endl;
	    archivo<<"\nTelefono: "<<numero1<<endl;
		archivo<<"\nCantidad de maletas: "<<maletas<<endl;
		archivo<<"\nEdad: "<<edad1<<endl;
		archivo<<"\nOrigen: "<<impresion1<<endl;
		archivo<<"\nDestino: "<<impresion2<<endl;
		archivo<<"\nPasajeros: "<<pasajeros<<endl;
		archivo.close();
		
		system("pause");
		
		system("cls");
		
		membrete();
		
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),5);
		cout<<"\t\t\t\t\t\t ______________________________"<<endl;
		cout<<"\t\t\t\t\t\t|            Clase             |"<<endl;
		cout<<"\t\t\t\t\t\t|______________________________|"<<endl<<endl;
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
		
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
		cout<<"\t\t\t\t|----------------------------------------------------------------------------|"<<endl;
		cout<<"\t\t\t\t|1)Clase Economica                                                           |"<<endl;
		cout<<"\t\t\t\t|Esta incluye bebida y comida y la tenemos a un precio de 500 dolares.       |"<<endl;
		cout<<"\t\t\t\t|Ojo ese es el precio estandar puede cambiar debido a las opciones ingresadas|"<<endl;
		cout<<"\t\t\t\t|----------------------------------------------------------------------------|"<<endl<<endl;
		
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
		cout<<"\t\t\t\t|----------------------------------------------------------------------------|"<<endl;
		cout<<"\t\t\t\t|2)Clase VIP                                                                 |"<<endl;
		cout<<"\t\t\t\t|Esta incluye bebida y comida y la tenemos a un precio de 1,000 dolares.     |"<<endl;
		cout<<"\t\t\t\t|Contienen mejores asientos y la comida que prefieras ademas de internet     |"<<endl;
		cout<<"\t\t\t\t|Ojo ese es el precio estandar puede cambiar debido a las opciones ingresadas|"<<endl;
		cout<<"\t\t\t\t|----------------------------------------------------------------------------|"<<endl<<endl;
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
		
		cout<<"Elija una clase: ";
	    cin.getline(clase,100);
		for (int i=0; i<strlen(clase); i++)
		{
		while (!isdigit(clase[i])&& !isspace(clase[i]))
		{
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
			cout<<"\nERROR, no se aceptan letras\n";	
			SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
			cout<<"\nElija una clase: ";
			cin.getline(clase,100);
		}
	}
		cout<<""<<endl;
		system("pause");
		
		system("cls");
	 	
	 	membrete();
	 
	 	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),5);
		cout<<"\t\t\t\t\t\t ______________________________"<<endl;
		cout<<"\t\t\t\t\t\t|           Horarios           |"<<endl;
		cout<<"\t\t\t\t\t\t|______________________________|"<<endl<<endl;
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
		
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
		cout<<"\t\t\t\t|----------------------------------------------------------------|"<<endl;
		cout<<"\t\t\t\t|              1)Horario 7:00 AM                                 "<<endl;
		cout<<"\t\t\t\t|				Asiento: 3B                                     "<<endl;
		cout<<"\t\t\t\t|		Disponible en clase Economica y clase VIP               "<<endl;
		cout<<"\t\t\t\t|----------------------------------------------------------------|"<<endl<<endl;
		
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
		cout<<"\t\t\t\t|----------------------------------------------------------------|"<<endl;
		cout<<"\t\t\t\t|	          2)Horario 8:00 AM                                 "<<endl;
		cout<<"\t\t\t\t|				Asiento: 5C                                     "<<endl;
		cout<<"\t\t\t\t|		Disponible en clase Economica y clase VIP               "<<endl;
		cout<<"\t\t\t\t|----------------------------------------------------------------|"<<endl<<endl;
       	
        SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
        cout<<"\t\t\t\t|----------------------------------------------------------------|"<<endl;
		cout<<"\t\t\t\t|	          3)Horario: 3:30 PM                                "<<endl;
		cout<<"\t\t\t\t| 				Asiento: 7D                                     "<<endl;
		cout<<"\t\t\t\t|		Disponible en clase Economica y clase VIP               "<<endl;
		cout<<"\t\t\t\t|----------------------------------------------------------------|"<<endl<<endl;
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
		
        cout<<"Elija un horario: ";
        cin.getline(horario,100);
		for (int i=0; i<strlen(horario); i++)
		{
		while (!isdigit(horario[i])&& !isspace(horario[i]))
		{
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
		cout<<"\nERROR, no se aceptan letras\n";	
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
		cout<<"\nElije un horario: ";
		cin.getline(horario,100);
		}
		}
		cout<<""<<endl;
		system("pause");
		
		system("cls");
		
		membrete();	
		
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),5);
		cout<<"\t\t\t\t\t\t ______________________________"<<endl;
		cout<<"\t\t\t\t\t\t|         Confirmacion         |"<<endl;
		cout<<"\t\t\t\t\t\t|______________________________|"<<endl<<endl;
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
		
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
		cout<<"\t\t\t\t\t|----------------------------------"<<endl;
		cout<<"\t\t\t\t\t|Nombre: "<<nombre<<endl;
		cout<<"\t\t\t\t\t|Apellido: "<<apellido<<endl;
	    cout<<"\t\t\t\t\t|Telefono: "<<numero1<<endl;
		cout<<"\t\t\t\t\t|Cantidad de maletas: "<<maletas<<endl;
		cout<<"\t\t\t\t\t|Edad: "<<edad1<<endl;
		cout<<"\t\t\t\t\t|Origen: "<<impresion1<<endl;
		cout<<"\t\t\t\t\t|Destino: "<<impresion2<<endl;
		cout<<"\t\t\t\t\t|Pasajeros: "<<pasajeros<<endl;	           
		cout<<"\t\t\t\t\t|----------------------------------"<<endl;
		SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);

		cout<<"\nQue tenga buen viaje "<<endl;
		cout<<"\nRecuerde que puede ver en un documento de texto su informacion "<<endl;
}


int lugar_llegada(){
	
	membrete();
	
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),5);
	cout<<"\t\t\t\t\t\t ______________________________"<<endl;
	cout<<"\t\t\t\t\t\t|       Lugar de llegada       |"<<endl;
	cout<<"\t\t\t\t\t\t|______________________________|"<<endl<<endl;
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
	
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),2);
	cout<<"\t\t\t|--------------------------------------------------------------------------------|"<<endl;
	cout<<"\t\t\t|1- Aeropuerto Las Americas(RD)     |16- Aeropuerto Monsenor Arnulfo Romero(ESA) |"<<endl;
	cout<<"\t\t\t|2- Aeropuerto de Punta Cana(RD)    |17- Aeropuerto de Bluefields(NIC)           |"<<endl;
	cout<<"\t\t\t|3- Aeropuerto de Jacmel(HAI)       |18- Aeropuerto de Bilwi(NIC)                |"<<endl;
	cout<<"\t\t\t|4- Aeropuerto de Port de Paix(HAI) |19- Aeropuerto de Tocumen(PAN)              |"<<endl;
	cout<<"\t\t\t|5- Aeropuerto Jose Marti(CUB)      |20- Aeropuerto Toncontin(HON)               |"<<endl;
	cout<<"\t\t\t|6- Aeropuerto de Santiago(CUB)     |21- Aeropuerto Goloson(HON)                 |"<<endl;
	cout<<"\t\t\t|7- Aeropuerto de Cancun(MEX)       |22- Aereopuerto Ezeizac(ARG)                |"<<endl;
	cout<<"\t\t\t|8- Aeropuerto de Mexico(MEX)       |23- Aereopuerto Jorge Nerwbery(ARG)         |"<<endl;
	cout<<"\t\t\t|9- Aereopuerto de Coatepeque(GUA)  |24- Aeropuerto de Sao Paulo(BRA)            |"<<endl;
	cout<<"\t\t\t|10- Aeropuerto Mundo Maya(GUA)     |25- Aeropuerto de Galeao(BRA)               |"<<endl;
	cout<<"\t\t\t|11- Aeropuerto Diego Aracena(CHI)  |26- Aeropuerto El Dorado(COL)               |"<<endl;
	cout<<"\t\t\t|12- Aeropuerto Mataveri(CHI)       |27- Aeropuerto Palonegro(COL)               |"<<endl;
	cout<<"\t\t\t|13- Aeropuerto de Carrasco(URU)    |28- Aeropuerto Simon Bolivar(VEN)           |"<<endl;
	cout<<"\t\t\t|14- Aeropuerto de Paysandu(URU)    |29- Aeropuerto Nueva Loja(ECU)              |"<<endl;
	cout<<"\t\t\t|15- Aeropuerto Guarani(PAR)        |30- Aeropuerto Jorge Chavez(PER)            |"<<endl;
	cout<<"\t\t\t|--------------------------------------------------------------------------------|"<<endl;
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
	
	cout<<"\nElija un destino: "; 
	cin.getline(destino, 100);
	
	destino1 = atoi(destino);
	
	if(destino1 == origen1){
	
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),4);
	cout<<"\nERROR, el aeropuerto de destino debe ser distinto al de origen\n";	
	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),7);
		
	cout<<"\nElija un destino: "; 
	cin.getline(destino, 100);	

	}
		
	switch(destino1){
	
	case 1:{ system("cls");
		
		impresion2 = "Republica Dominicana";
		
		membrete();	
		
		preguntas();
		
			break;
		}	
		
		case 2:{ system("cls");
		
		impresion2 = "Republica Dominicana";
		
		membrete();	
		
		preguntas();
			
			break;
		}	
		
		case 3:{ system("cls");
		
		impresion2 = "Haiti";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 4:{ system("cls");
		
		impresion2 = "Haiti";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 5:{ system("cls");
		
		impresion2 = "Cuba";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 6:{ system("cls");
		
		impresion2 = "Cuba";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 7:{ system("cls");
		
		impresion2 = "Mexico";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 8:{ system("cls");
		
		impresion2 = "Mexico";
		
		membrete();	
			
		preguntas();
		
			break;
		}	
		
		case 9:{ system("cls");
		
		impresion2 = "Guatemala";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 10:{ system("cls");
		
		impresion2 = "Guatemala";
		
		membrete();	
		
		preguntas();
			
			break;
		}	
		
		case 11:{ system("cls");
		
		impresion2 = "Chile";
			
		membrete();
		
		preguntas();
			
			break;
		}	
		
		case 12:{ system("cls");
		
		impresion2 = "Chile";
		
		membrete();	
		
		preguntas();
			
			break;
		}	
		
		case 13:{ system("cls");
		
		impresion2 = "Uruguay";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 14:{ system("cls");
		
		impresion2 = "Uruguay";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 15:{ system("cls");
		
		impresion2 = "Paraguay";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 16:{ system("cls");
		
		impresion2 = "El Salvador";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 17:{ system("cls");
		
		impresion2 = "Nicaragua";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 18:{ system("cls");
		
		impresion2 = "Nicaragua";
		
		membrete();	
		
		preguntas();
			
			break;
		}	
		
		case 19:{ system("cls");
		
		impresion2 = "Panama";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 20:{ system("cls");
		
		impresion2 = "Honduras";
		
		membrete();	
		
		preguntas();
			
			break;
		}	
		
		case 21:{ system("cls");
		
		impresion2 = "Honduras";
		
		membrete();	
		
		preguntas();
			
			break;
		}	
		
		case 22:{ system("cls");
		
		impresion2 = "Argentina";
		
		membrete();	
		
		preguntas();
			
			break;
		}	
		
		case 23:{ system("cls");
		
		impresion2 = "Argentina";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 24:{ system("cls");
		
		impresion2 = "Brasil";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 25:{ system("cls");
		
		impresion2 = "Brasil";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 26:{ system("cls");
		
		impresion2 = "Colombia";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 27:{ system("cls");
		
		impresion2 = "Colombia";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 28:{ system("cls");
		
		impresion2 = "Venezuela";
		
		membrete();	
		
		preguntas();
			
			break;
		}	
		
		case 29:{ system("cls");
		
		impresion2 = "Ecuador";
		
		membrete();	
		
		preguntas();
			
			break;
		}
		
		case 30:{ system("cls");
		
		impresion2 = "Peru";
		
		membrete();	
		
		preguntas();
			
			break;
	
		}
	
		default:{
		
		system("cls");
		return lugar_llegada();
				
			break;
		}
	
	} 	
}

int main(){
		
		membrete();
		
		lugar_salida();
		
		switch(origen1){
			
		case 1 :{ system("cls");
		
		impresion1 = "Republica Dominicana";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}	
		
		case 2:{ system("cls");
		
		impresion1 = "Republica Dominicana";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}	
		
		case 3:{ system("cls");
		
		impresion1 = "Haiti";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 4:{ system("cls");
		
		impresion1 = "Haiti";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 5:{ system("cls");
		
		impresion1 = "Cuba";
		
		membrete();	
		
		lugar_llegada();	
			
			break;
		}
		
		case 6:{ system("cls");
		
		impresion1 = "Cuba";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 7:{ system("cls");
		
		impresion1 = "Mexico";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 8:{ system("cls");
		
		impresion1 = "Mexico";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}	
		
		case 9:{ system("cls");
		
		impresion1 = "Guatemala";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 10:{ system("cls");
		
		impresion1 = "Guatemala";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}	
		
		case 11:{ system("cls");
		
		impresion1 = "Chile";
			
		membrete();
		
		lugar_llegada();
			
			break;
		}	
		
		case 12:{ system("cls");
		
		impresion1 = "Chile";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}	
		
		case 13:{ system("cls");
		
		impresion1 = "Uruguay";
		
		membrete();	
		
		lugar_llegada();	
		
			break;
		}
		
		case 14:{ system("cls");
		
		impresion1 = "Uruguay";
		
		membrete();	
		
		lugar_llegada();	
			
			break;
		}
		
		case 15:{ system("cls");
		
		impresion1 = "Paraguay";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 16:{ system("cls");
		
		impresion1 = "El Salvador";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 17:{ system("cls");
		
		impresion1 = "Nicaragua";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 18:{ system("cls");
		
		impresion1 = "Nicaragua";
		
		membrete();	
		
		lugar_llegada();	
		
			break;
		}	
		
		case 19:{ system("cls");
		
		impresion1 = "Panama";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 20:{ system("cls");
		
		impresion1 = "Honduras";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}	
		
		case 21:{ system("cls");
		
		impresion1 = "Honduras";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}	
		
		case 22:{ system("cls");
		
		impresion1 = "Argentina";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}	
		
		case 23:{ system("cls");
		
		impresion1 = "Argentina";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 24:{ system("cls");
		
		impresion1 = "Brasil";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 25:{ system("cls");
		
		impresion1 = "Brasil";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 26:{ system("cls");
		
		impresion1 = "Colombia";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 27:{ system("cls");
		
		impresion1 = "Colombia";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 28:{ system("cls");
		
		impresion1 = "Venezuela";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}	
		
		case 29:{ system("cls");
		
		impresion1 = "Ecuador";
		
		membrete();	
		
		lugar_llegada();
			
			break;
		}
		
		case 30:{ system("cls");
		
		impresion1 = "Peru";
		
		membrete();	
		
		lugar_llegada();
			
			break;
	
		
		default:{
			
		system("cls");
		return main();
			
			break;
		}
		
		}

	}
}
