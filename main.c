#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14



void logaritmo()
{
    double numero, resultado;

	printf("\nIntroduce valor: ");
	scanf("%lf", &numero);

	if (numero > 0) {
		resultado = log10(numero);
		printf("\nEl logaritmo de %.3f es %.3f", numero, resultado);
	}
}
/*
void logaritmo_neperiano()
{
    double numero, resultado;

	printf("\nIntroduce valor: ");
	scanf("%f", &numero);

    if(numero > 0){
            resultado= log(numero);
	 printf( "log( %f ) = %f\n", numero, resultado );
}

}
*/

void exponencial()
{
    int numero,exponente,resultado=1;
    for(int i = 0; i<exponente;i++)
    {
        resultado*=numero;
    }

}


void raiz()
{
    int a, b, res=0, cont=1, contador;

    printf("Índice\n");
    scanf("%d",&a);
    printf("Radicando\n");
    scanf("%d",&b);


    for(int i = 1 ; contador < b ; i++)
    {


        for(int j = 0 ; j < a ; j++)
        {
            cont*=i;
        }
        printf("i %d",i);
        printf("exponencial %d\n", cont);

        if(cont == b)
        {
            res=i;
        }
        contador=cont;
        cont=1;
    }

    if(res != 0)
    {
        printf("La raiz con índice = %d y radicando = %d es --> %d", a, b, res);

    }
    else
    {
        printf("No existe raiz con el índice y el radicando introducidos");
    }
}


void dividir()
{
    float a,b,res;


    printf("Primer Número\n");
    scanf("%f",&a);
    printf("Segundo Número\n");
    scanf("%f",&b);

    res = a/b;


    printf("La división entre %f y %f es --> %f\n", a, b, res);

}

void multiplicar()
{
    float a,b,res;

    printf("Primer Número\n");
    scanf("%f",&a);
    printf("Segundo Número\n");
    scanf("%f",&b);

    res = a*b;

    printf("La multiplicación entre %f y %f es --> %f", a, b, res);
}

void restar()
{
    float a,b,res;

    printf("Primer Número\n");
    scanf("%f",&a);
    printf("Segundo Número\n");
    scanf("%f",&b);

    res = a-b;

    printf("La resta de %f y %f es --> %f", a, b, res);
}

void sumar()
{
    float a,b,res;

    printf("Primer Número\n");
    scanf("%f",&a);
    printf("Segundo Número\n");
    scanf("%f",&b);

    res = a+b;

    printf("La suma de %f y %f es --> %f", a, b, res);
}


void seno()
{
    int a;
    float resultado1;

    printf("Introduzca el valor angulo\n");
    scanf("%d",&a);

    resultado1=sin(a*PI/180);

    printf("El seno de %d es %lf", a, resultado1);
    system("pause");
}

void coseno()
{
    int a;
    float resultado;

    printf("Introduzca el valor angulo\n");
    scanf("%d",&a);

    resultado=cos(a*PI/180);

    printf("El coseno de %d es %lf", a, resultado);
    system("pause");
}

void tangente()
{
    int a;
    float resultado;

    printf("Introduzca el valor angulo\n");
    scanf("%d",&a);

    resultado=tan(a*PI/180);

    printf("El tangente de %d es %lf", a, resultado);
    system("pause");
}

void arcoseno()
{
    float a, resultado;

    printf("Ingrese el valor de x: ");
    scanf("%f", &a);

    resultado = asin(a);

    printf("\nEl arco seno de %f es %.2f",a, resultado);
    system("pause");
}

void arcoCoseno(){
  float a, resultado;

  printf("Ingrese el valor de x: ");
  scanf("%f", &a);

  resultado = acos(a);

  printf("\nEl arco coseno de %f es %.2f",a, resultado);
  system("pause");
}

void arcoTangente(){
  float a, resultado;

  printf("Ingrese el valor de x: ");
  scanf("%f", &a);

  resultado = atan(a);

  printf("\nEl arco tangente de %f es %.2f",a, resultado);
  system("pause");
}


void trigonometria()
{
    int opc;
    float res;

    printf("¿Que desea realizar:\n");
    printf("1.- Seno\n");
    printf("2.- Coseno\n");
    printf("3.- Tangente\n");
    printf("4.- Arco seno\n");
    printf("5.- Arco coseno\n");
    printf("6.- Arco tangente\n");
    scanf("%d",&opc);

    switch(opc)
    {

        case 1:

            seno();

        break;


        case 2:

            coseno();

        break;


        case 3:

            tangente();

        break;

        case 4:

            arcoseno();

        break;

        case 5:

            arcoCoseno();

        break;

        case 6:

            arcoTangente();

        break;



    }

}


int main()
{
    char n;

    printf("¿Qué quieres hacer?\n");

    printf("S o s para Sumar\n");
    printf("R o r para Restar\n");
    printf("M o m para Multiplicar\n");
    printf("D o d para Dividir\n");
    printf("T o t para Trigonometria\n");
    printf("E o e  para Exponenciales\n");
    printf("P o p para Raices\n");
    printf("L o l para Logaritmo\n");
    printf("Q o q para Logaritmo Neperiano\n");
    printf("X o x para Salir\n");


    scanf("%c",&n);


        switch(n)
           {

                case 's':
                case 'S': sumar();

                    break;

                case 'r':
                case 'R': restar();

                    break;

                case 'd':
                case 'D': dividir();

                    break;

                case 'm':
                case 'M': multiplicar();

                    break;

                case 't':
                case 'T': trigonometria();

                    break;
        //
        //        case 'e':
        //        case 'E': exponencial();
         //      x=0;
         //           break;

                case 'p':
                case 'P': raiz();

                    break;

                case 'l':
                case 'L': logaritmo();

                    break;
/*
                case 'q':
                case 'Q': logaritmo_neperiano();

                    break;

                case 'x':
                case 'X': salir();

                    break;
*/
                default:
                printf("Caracter no valido");

             }

            return 0;
}
