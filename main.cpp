/*Asignacion 00
  Patricio Fernandez 1045113 */


#include<iostream>
#include <math.h>

using namespace std;

int opcion;
float A, B, B1, B2, C, R, pi, Respuesta, Volumen;



int main()
{
	A = 0; /* ALTURA */
	B = 0;/* BASE */
	B1 = 0;/* Base1 del Trapecio */
	B2 = 0;/* Base2 del Trapecio */
	C = 0.5; 
	R = 0; /*Radio*/
	pi = 3.14159; 




	cout << "\n\n                                 _______ Hello World _______  \n \t\t\t\t Welcome to my Program \n";

	cout << "                              ________ By Patrick 1045113 _______ \n\n\n";

	cout << "	    Menu\n" << endl;
	cout << "  Elegir una de las Opciones\n" << endl;
	cout << " 1. Area de un Triangulo" << endl;
	cout << " 2. Area de un Trapecio" << endl;
	cout << " 3. Volumen de un Cono" << endl;
	cout << " 4. Volumen de un Cilindro\n" << endl;
	cout << " 5. Ingresar Opcion: "; cin >> opcion;

	/*Calculo del Area de un Triangulo*/
	if (opcion == 1)
	{

		system("cls");

		cout << " Bienvenido a la opcion para calcular el area de un Triangulo \n" << endl;
		cout << " Ingrese el valor de la base del triangulo: ";
		cin >> B;
		cout << " Ingrese el valor de la altura del Triangulo: ";
		cin >> A;

		cout << " Mostrar Formula para obtener Area del Triangulo : (Base)*(Altura)/2" << endl;

		Respuesta = A * B*C;

		cout << " Area del Triangulo es igual a : " << Respuesta << endl;

	}

	/* Calculo del Area de un Trapecio*/
	else if (opcion == 2)

	{
		system("cls");

		cout << "Bienvenido a la opcion para calcular el area de un Trapecio" << endl;
		cout << "Insertar la Base 1 del Trapecio: ";
		cin >> B1;
		cout << "Insertar la Base 2 del Trapecio: ";
		cin >> B2;
		cout << "Insertar la Altura del Trapecio: ";
		cin >> A;
		cout << "Mostrar formula para obtener Area: Area*(Base1+Base2) / 2 " << endl;

		Respuesta = A * (B1 + B2)*C;

		cout << "Area del Trapecio es igual a : " << Respuesta << endl;

	}

	else if (opcion == 3)
	{
		/* Calculo del Volumen del Cono */

		system("cls");
				
		cout << " Bienvenido a la opcion para calcular el volumen de un Cono" << endl;
		cout << " Insertar el valor del Radio: ";
		cin >> R;
		cout << " Insertar el valor de la altura del cono: ";
	    cin >> A;

		cout << " Mostrar formula para obtener el Volumen : (PI)*(Radio)*(Radio)*(Area) / 3 " << endl;

		Volumen = ((pi)*(R)*(R)*(A)) / (3);

		cout << " Volumen del Cono es igual a : " << Volumen << endl;


	}

	else if (opcion == 4)

	{
		/* Calculo del Volumen del Cilindro */

		system("cls");

		cout << " Bienvenido a la opcion para calcular el volumen de un Cilindro" << endl;
		cout << " Insertar el Radio del Cilindro : " << endl;
		cin >> R;
		cout << " Insertar Altura del Cilindro : " << endl;
		cin >> A;

		cout << " Mostrar formula para obtener el Volumen : (PI)*(Radio)*(Radio)*(Area)" << endl;
		Volumen = ((pi)*(R)*(R)*(A));
		cout << " Volumen del Cilindro es igual a : " << Volumen << endl;



	}

	/* Si por error usted en el menu principal presiona algun otro numero de los que esten fuera de las opciones saldra este mensaje*/
	else if (opcion != 4)
	{
		cout << "\n Los valores a insertar son del 1 al 4 \n" << endl;
		cout << " \n Corra nueva vez el Programa e intente de nuevo" << endl;
	}


	system("pause");
	return 0;

}
