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
void ejercicio2();   
bool Harshad(int);
void metodo_circulos(int, int, int, int, int, int, int, int);

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
                 		ejercicio2();               
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
void ejercicio2(){
	bool bandera=false;
	char tecla;
	int x1=0, x2=0, y1=0, y2=0, w1=0, w2=0, z1=0, z2=0;

	cout<<"\t1.Ingresar numeros escogidos"<<endl;
	cout<<"\t1.Numero Random"<<endl;
	cin>>tecla;
	switch(tecla){
		case '1':
			cout<<"\t1.Primer Circulo"<<endl;
			cout<<"\t1.Ingrese X1: "<<endl;
			cin>>x1;
			cout<<"\t1.Ingrese X2: "<<endl;
                	cin>>x2;
		
			cout<<"\t1.Ingrese Y1: "<<endl;
                	cin>>y1;
			cout<<"\t1.Ingrese Y2: "<<endl;
                	cin>>y2;

			cout<<"\t1.Segundo Circulo"<<endl;
                	cout<<"\t1.Ingrese W1: "<<endl;
                	cin>>x1;
                	cout<<"\t1.Ingrese W2: "<<endl;
                	cin>>x2;

                	cout<<"\t1.Ingrese Z1: "<<endl;
                	cin>>y1;
                	cout<<"\t1.Ingrese Z2: "<<endl;
                	cin>>y2;

			metodo_circulos(x1,x2,y1,y2,w1,w2,z1,z2);
		break;

		case '2':
			int c;
			int e;
			int cont=0;
			int cont2=0;

			srand(time(NULL));

			for(c=1; c<=10; c++){
				while(cont<4){
					if(cont==0){
						x1=1+rand()%(11-1);
						cout<<x1<<endl;
						cont++;
					}

					if(cont==1){
                				x2=1+rand()%(11-1);
						cout<<x2<<endl;
                				cont++;
					}

					if(cont==2){
                				y1=1+rand()%(11-1);
                				cout<<y1<<endl;
                				cont++;
                			}

					if(cont==3){
                				y2=1+rand()%(11-1);
                				cout<<y2<<endl;
                				cont++;
                			}
				}
			}

			for(e=1; e<=4; e++){
				if(e==1){
					w1=1+rand()%(11-1);
				}	
				if(e==2){
                			w2=1+rand()%(11-1);
               			 }

				if(e==3){
                			z1=1+rand()%(11-1);
               			 }

				if(e==4){
                			z2=1+rand()%(11-1);
                		}
			}

	}
}

void metodo_circulos(int x1, int x2, int y1, int y2, int w1, int w2, int z1, int z2){
	int distancia=0;
	int distancia2 =0;
	int x,y;
	int k,m;

	x=pow((x2-x1),2);
	y=pow((y2-y1),2);
	distancia = sqrt(x+y);

	k=pow((w2-w1),2);
	m=pow((z2-z1),2);
	distancia2 = sqrt(k+m);

	cout<<"distancia circulo 1: "+distancia<<endl;
	cout<<"distancia circulo 2: "+distancia2<<endl;

}



// E J E R C I C I O #3

	bool Harshad(int n){
   		 int sum = 0;
   		 for (int temp = n; temp > 0; temp /= 10)
            	 	sum += temp % 10;

   		 return (n % sum == 0);
	}
