#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>

using namespace std;

void ejercicioUno();   

#define PI 3.14159265

int main()
{
        int opcion = -1;
        do
        {
                cout << "\nMENU:\n"
                        << "1) Ejercicio 1\n"
                        << "2) Ejercicio 2\n"
                        << "3) Ejercicio 3\n"
                        << "0) Salir\n"
                        << "Ingrese una opcion: ";
                cin >> opcion;
                switch (opcion)
                {
                        case 1:
                       		 ejercicioUno();            
                                break;
                        case 2:
                                
                                break;
                        case 3:
                                
                                break;
                        case 0:
                                cout << "Saliendo... " << endl;
                                break;
                        default:
                                cout << "Opcion no valida!" << endl;
                                break;
                }
        }
        while (opcion != 0);
        return 0;
}

void ejercicioUno()
{
        float tempLadoA = 0;
        float tempLadoB = 0;
        float tempLadoC = 0;

        float ladoA = 0;
        float ladoB = 0;
        float ladoC = 0;

        float anguloA = 0.0;
        float anguloB = 0.0;
        float anguloC = 0.0;

        float s = 0;
        float area = 0;

	///////////Triangulo #2

	float tempLadoA2 = 0;
        float tempLadoB2 = 0;
        float tempLadoC2 = 0;

        float ladoA2 = 0;
        float ladoB2 = 0;
        float ladoC2 = 0;

        float anguloA2 = 0.0;
        float anguloB2 = 0.0;
        float anguloC2 = 0.0;

        float s2 = 0;
        float area2 = 0;


        do
        {
                cout << "Ingrese el lado A: ";
                cin >> tempLadoA;
	///////////////
		cout << "Ingrese el lado A2: ";
                cin >> tempLadoA2;

        }
        while(tempLadoA && tempLadoA2 <= 0);

        do
        {
                cout << "Ingrese el lado B: ";
                cin >> tempLadoB;
	///////////////
		cout << "Ingrese el lado B2: ";
                cin >> tempLadoB2;

        }
        while(tempLadoB && tempLadoB2<= 0);

        do
        {
                cout << "Ingrese el lado C: ";
                cin >> tempLadoC;
	//////////////
		cout << "Ingrese el lado C2: ";
                cin >> tempLadoC2;

        }
        while(tempLadoC && tempLadoC2<= 0);
// encontrar el mayor de los angulos, al igual que el menor
        if (tempLadoC && tempLadoC2 > tempLadoB && tempLadoC > tempLadoA && tempLadoA2)
        {
                ladoC = tempLadoC;
                if (tempLadoB >= tempLadoA)
                {
                        ladoB = tempLadoB;
                        ladoA = tempLadoA;
                }
                else
                {
                        ladoB = tempLadoA;
                        ladoA = tempLadoB;
                }
        }
        else if (tempLadoB > tempLadoC && tempLadoB > tempLadoA)
        {
                ladoC = tempLadoB;
                if (tempLadoC >= tempLadoA)
                {
                        ladoB = tempLadoC;
                        ladoA = tempLadoA;
                }
                else
                {
                        ladoB = tempLadoA;
                        ladoA = tempLadoC;
                }
        }
        else
        {
                ladoC = tempLadoA;
                if (tempLadoB >= tempLadoC)
                {
                        ladoB = tempLadoB;
                        ladoA = tempLadoC;
                }
                else
                {
                        ladoB = tempLadoC;
                        ladoA = tempLadoB;
                }
        }
 s = (ladoA + ladoB + ladoC) / 2;
        area = sqrt(s*(s - ladoA)*(s - ladoB)*(s - ladoC));
        anguloA = acos((ladoA*ladoA - ladoB*ladoB - ladoC*ladoC)/(-2.0*ladoB*ladoC))*180.0/PI;
        anguloB = acos((ladoB*ladoB - ladoA*ladoA - ladoC*ladoC)/(-2.0*ladoA*ladoC))*180.0/PI;
        anguloC = acos((ladoC*ladoC - ladoA*ladoA - ladoB*ladoB)/(-2.0*ladoA*ladoB))*180.0/PI;

        if (ladoA*ladoA + ladoB*ladoB - ladoC*ladoC == 0)
                cout << "El triangulo es rectangulo." << endl;

        cout << "Angulo A: " << anguloA << endl;
        cout << "Angulo B: " << anguloB << endl;
        cout << "Angulo C: " << anguloC << endl;
        cout << "Area: " << area << endl;
}

