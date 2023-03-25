#include <iostream>

using namespace std;

/*
//PROGRAMA PARA SABER SI ES MAYOR O MENOR DE EDAD
int main() {
    int edad;

    cout<<"Digite su edad:";
    cin>>edad;

    if (edad>=18) {
        cout<<endl<<"Usted es mayor de edad";

    }
    else {
        cout<<endl<<"Usted es menor de edad";
    }

    return 0;
}
*/


/*
//SABER SI UN NUMERO ES MAYOR O MENOR
int main() {
     int n1, n2;

     cout << "Digite el primer numero:";
     cin >> n1;

     cout << "Digite el segundo numero:";
     cin >> n2;

     if (n1>n2){
         cout<<n1<<" Es mayor que "<<n2<<"";
     }
     else if (n2>n1){
         cout<<n2<<" Es mayor que "<<n1<<"";
     }
     else cout<<"Los numeros son iguales";

 }
*/


/*
//SABER SI UN NUMERO ES PAR O IMPAR
 int main() {
     int n1;

     cout << "Digite el numero:";
     cin >> n1;

     if (n1 % 2==0 ){
         cout<<"El numero es par";
     }
     else{
         cout<<"El numero es impar";
     }
 }
 */


/*
//NUNMEROS IMPARES DE UN NUMERO CON FOR
int main()
{
    int num;
    cout << "Ingrese un numero mayor a 10 y menor que 30: ";
    cin >> num;

    if (num > 10 && num < 30)
    {
        cout <<endl<< "Los numeros impares desde 1 hasta " << num << " son: " << endl;
        for (int i = 1; i <= num; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << " ";
            }
        }
    }

    else
    {
        cout << "El numero ingresado no es valido." << endl;
    }

    return 0;
}
 */


/*
//NUNMEROS IMPARES DE UN NUMERO CON WHILE
int main()
{
    int num;
    cout << "Ingrese un numero mayor a 10 y menor que 30: ";
    cin >> num;

    if (num > 10 && num < 30)
    {
        cout << "Los numeros impares desde 1 hasta " << num << " son: " << endl;
        int i = 1;
        while (i <= num)
        {
            if (i % 2 != 0)
            {
                cout << i << " ";
            }
            i++;
        }
    }

    else
    {
        cout << "El numero ingresado no es valido." << endl;
    }

    return 0;
}
 */

/*
//FACTORIAL DE UN NUMERO
int main()
{
    int num;
    int factorial = 1;
    cout << "Ingrese un numero: ";
    cin >> num;
    while (num > 0)
    {
        factorial = factorial * num;
        num--;
    }

    cout << "El factorial del numero es: " << factorial << endl;

    return 0;
}
*/

/*
//DIAS DEL 1 AL 5
int main (){

    int  dia;

    cout<<endl<<"Escriba el numero del dia que desea ver:";
    cin>>dia;

    switch (dia){
        case 1: cout<<"Es lunes"<<endl;
            break;
        case 2: cout<<"Es martes"<<endl;
            break;
        case 3: cout<<"Es miercoles"<<endl;
            break;
        case 4: cout<<"Es jueves"<<endl;
            break;
        case 5: cout<<"Es viernes"<<endl;
            break;
        default: cout<<"Debe ser un numero entre 1 y 5";
            break;
    }

    return 0;
}
*/