#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

using namespace std;
using std::cout;
using std::cin;
using std::string;
using std::endl;

void ejercicioUno();   
bool Harshad(int opcion);


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
				Harshad(201)? cout << "si\n" : cout << "no\n"; 
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

//E J E R C I C I O #1
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
		ladoC2 = tempLadoC2;
                if (tempLadoB && tempLadoB2 >= tempLadoA && tempLadoA2)
                {
                        ladoB = tempLadoB;
                        ladoA = tempLadoA;
		////////////////////////
			ladoB2 = tempLadoB2;
			ladoA2 = tempLadoA2;
                }
                else
                {
                        ladoB = tempLadoA;
                        ladoA = tempLadoB;
		////////////////////////
			ladoB2 = tempLadoA2;
			ladoA2 = tempLadoB2;
                }
        }
        else if (tempLadoB && tempLadoB2 > tempLadoC && tempLadoB > tempLadoA && tempLadoA2)
        {
                ladoC = tempLadoB;
		ladoC2 = tempLadoB2;

                if (tempLadoC && tempLadoC2 >= tempLadoA && tempLadoA2)
                {
                        ladoB = tempLadoC;
                        ladoA = tempLadoA;
		//////////////////////
			ladoB2 = tempLadoC2;
			ladoA2 = tempLadoA2;
                }
                else
                {
                        ladoB = tempLadoA;
                        ladoA = tempLadoC;
		/////////////////////
			ladoB2 = tempLadoA2;
			ladoA2 = tempLadoC2;
                }
        }
        else
        {
                ladoC = tempLadoA;
		ladoC2 = tempLadoA2;

                if (tempLadoB && tempLadoB2 >= tempLadoC && tempLadoC2)
                {
                        ladoB = tempLadoB;
                        ladoA = tempLadoC;
		////////////////////
			ladoB2 = tempLadoB2;
                        ladoA2 = tempLadoC2;

                }
                else
                {
                        ladoB = tempLadoC;
                        ladoA = tempLadoB;
		///////////////////
			ladoB2 = tempLadoC2;
                        ladoA2 = tempLadoB2;
                }
        }
	s = (ladoA + ladoB + ladoC) / 2;
	s2 = (ladoA2 + ladoB2 + ladoC2) /2;
 
        area = sqrt(s*(s - ladoA)*(s - ladoB)*(s - ladoC));
	area2 = sqrt(s2*(s2 - ladoA2)*(s2 - ladoB2)*(s2 - ladoC2));

        anguloA = acos((ladoA*ladoA - ladoB*ladoB - ladoC*ladoC)/(-2.0*ladoB*ladoC))*180.0/PI;
	anguloA2 = acos((ladoA2*ladoA2 - ladoB2*ladoB2 - ladoC2*ladoC2)/(-2.0*ladoB2*ladoC2))*180.0/PI;	

        anguloB = acos((ladoB*ladoB - ladoA*ladoA - ladoC*ladoC)/(-2.0*ladoA*ladoC))*180.0/PI;
	anguloB2 = acos((ladoB2*ladoB2 - ladoA2*ladoA2 - ladoC2*ladoC2)/(-2.0*ladoA2*ladoC2))*180.0/PI;

        anguloC = acos((ladoC*ladoC - ladoA*ladoA - ladoB*ladoB)/(-2.0*ladoA*ladoB))*180.0/PI;
	anguloC2 = acos((ladoC2*ladoC2 - ladoA2*ladoA2 - ladoB2*ladoB2)/(-2.0*ladoA2*ladoB2))*180.0/PI;

        if (ladoA*ladoA && ladoA2*ladoA2 + ladoB*ladoB && ladoB2*ladoB2 - ladoC*ladoC && ladoC2*ladoC2 == 0)
                cout << "El triangulo es rectangulo." << endl;

  double param, result;
  printf("introduce un numero: \n");
  scanf("%lf", &param);
  result = sin(param*PI/180); //sin, cos, tan 
  printf("El resultado es: %.61f \n", result);
 // system("pause");
	cout << "\n" << endl;

        cout << "Angulo A: " << anguloA << endl;
        cout << "Angulo B: " << anguloB << endl;
        cout << "Angulo C: " << anguloC << endl;
        cout << "Area: " << area << endl;
	/////////////////////////
	cout << "\n" << endl;	

	cout << "Angulo A2: " << anguloA2 << endl;
        cout << "Angulo B2: " << anguloB2 << endl;
        cout << "Angulo C2: " << anguloC2 << endl;
        cout << "Area2: " << area2 << endl;


}

// E J E R C I C I O #2


// E J E R C I C I O #3

	bool Harshad(int n)
	{
   		 int sum = 0;
   		 for (int temp = n; temp > 0; temp /= 10)
            	 sum += temp % 10;
   		 return (n % sum == 0);
	}
