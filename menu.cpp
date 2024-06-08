#include <iostream>
#include <cmath>
using namespace std;

//Haga un programa para calcular la pensión mensual, debe mostrar el menú siguiente:;

int main(){

    //Variable tipo char;
    
    


    int opcion;


    
    do{
        cout << "\nPension mensual. "<<"\n";
        cout << "\n1. Pension para los optados."<<"\n";
        cout << "\n2. Pension para los afiliados del Sistema Publico de Pensiones."<<"\n";
        cout << "\n3. Pension de los afiliados al Sistema privado (AFP)."<<"\n";
        cout << "\n4. Salir."<< "\n";
        cout << "\nSeleccione una opcion---> |1| |2| |3| |4|  "<<"\n";        
        cin >> opcion;
       

       
          
          switch (opcion)
            {
             case 1 :
             
             cout << "\n1. Pension para los optados. "<<"\n";

             break;

             case 2:

             cout << "\n2. Pension para los afiliados del Sistema Publico de Pensiones."<<"\n";

             break;

             case 3: 
             cout << "\n3. Pension de los afiliados al Sistema privado (AFP)."<<"\n";

             break;
             case 4:
             cout << "\n4. Salir. "<< "\n";
     
             break;
             default: 
              cout << "\nOpcion invalidad.  \n";
            }
       
        
    }while (opcion !=4);
    
    
        



    


    return 0;
}



#include <iostream>

using namespace std;

int main (){
    char opcion, variable ='x';

    do 
    {
        cout << "Menu"<<"\n";
        cout << "A Carne asada"<<"\n";
        cout << "B pollo"<<"\n";
        cout << "C cerdo"<< "\n";
        cout << "D pesccado"<<"\n";
        cout << "Seleccione una opcion"<<"\n";
        cin >> opcion;
        cout << "Opcion seleccionada"<<opcion<<"\n";

    }
    while (opcion !=variable);



    return 0;
}


#include <iostream>

using namespace std;

int main (){

    char opcion, variable ='x';

    do 
    {
        cout << "Menu"<<"\n";
        cout << "A Carne asada"<<"\n";
        cout << "B pollo"<<"\n";
        cout << "C cerdo"<< "\n";
        cout << "D pesccado"<<"\n";
        cout << "Seleccione una opcion "<<"\n";
        cin >> opcion;
        cout << "Opcion seleccionada "<<opcion<<"\n";

    }
    while (!(opcion == 'A' || opcion== 'B' || opcion== 'C' || opcion == 'D'));
    
    


    return 0;
}


#include <iostream>

using namespace std;

int main() {
    char opcion, variable = 'x';

    do {
        cout << "Menu" << "\n";
        cout << "A Carne asada" << "\n";
        cout << "B Pollo" << "\n";
        cout << "C Cerdo" << "\n";
        cout << "D Pescado" << "\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 'A':
            case 'a': // Incluyendo la opción en minúsculas
                cout << "Opcion seleccionada: A Carne asada" << "\n";
                break;
            case 'B':
            case 'b':
                cout << "Opcion seleccionada: B Pollo" << "\n";
                break;
            case 'C':
            case 'c':
                cout << "Opcion seleccionada: C Cerdo" << "\n";
                break;
            case 'D':
            case 'd':
                cout << "Opcion seleccionada: D Pescado" << "\n";
                break;
            default:
                if (opcion != variable) {
                    cout << "Opcion no valida" << "\n";
                }
                break;
        }

    } while (opcion != variable);

    return 0;
}


#include <iostream>

using namespace std;

int main() {
    int edad;
    int experiencia;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su experiencia laboral (en años): ";
    cin >> experiencia;

    if (edad >= 18 && experiencia >= 5) {
        cout << "Usted es apto para el trabajo." << endl;
    } else {
        cout << "Usted no es apto para el trabajo." << endl;
    }

    return 0;
}


#include <iostream>

using namespace std;

int main (){

    int n = 0;
    int i = 0;

    cout << "Ingrese un numero entero:\n";
    cin >> n;

    if (n == 0) {
        cout << "No se puede multiplicar por cero.\n";
    } else {
        while (i < 10){
            cout << n << "x" << i << "=" << n*i << "\n";
            i = i+1;
        }
    }

    return 0;
}


#include <iostream>

using namespace std; 

int main(){

    int n = 0;
    cout << "Ingrese el numero de estudiantes: " << "\n";
    cin >> n;
    int numero[n];
    int contador_Altos = 0;
    int contador_Bajos = 0;
    int suma_Altos = 0;
    int suma_Bajos = 0;

    for(int i = 0; i < n; i++){
        cout << "\nIngresa las estaturas de los estudiantes:  ";
        cin >> numero[i];
        if(numero[i] >= 180){
            contador_Altos++;
            
        } else {
            contador_Bajos++;
            
        }
    }

    double Altos = (double)suma_Altos / contador_Altos;
    double Bajos = (double)suma_Bajos / contador_Bajos;

    cout << "\nSon mas altos que la media:  " << contador_Altos;
    cout << "\nSon mas bajos que la media:  " << contador_Bajos;
    

    return 0;
}


#include <iostream>

using namespace std;

int main(){

    

    int n =0;
    cout << "Ingrese un numero que sera en numero de arreglos enteros: "<<"\n";
    cin >> n;
    int numero[n];
    int impares[n];
    int j = 0;

    


    for( int i=0; i<n; i++){

        cout << "Los numeros de arreglos ingresados: "<<"\n";
        cin >> numero[i];

        if(numero[i]%2!=0)
     {

        impares [j] = numero[i];
        j++;

     }

    }

    cout << "El arreglo original es. "<< "\n";
    for(int i= 0; i<n; i++){

        cout<< numero[i]<<"\n";

    }
    cout << "El arreglo de impares es. "<<"\n";
    for(int k = 0; k<j; k++){

        cout <<impares [k]<< "\n";

    }

    return 0;
}



#include <iostream>

using namespace std;

int main(){

    int  a, b;

    cout << "Introduce un numero: \n";
    cin>> a;

    cout <<"Introduce un numero: \n";
    cin >> b;

    cout << "\nLos numeros que faltan son.  \n";
    int  i =a+1;

    while(i<b){
        
        

        
        cout << "\nLos numeros son: "<<i<<"\n";

        i++;

    }

    return 0;
}



#include <iostream>

using namespace std;

int main (){

    int n = 0;
    int i = 0;

    cout << "Ingrese un numero entero:\n";
    cin >> n;

    if (n == 0) {
        cout << "No se puede multiplicar por cero.\n";
    } else {
        while (i < 10){
            cout << n << "x" << i << "=" << n*i << "\n";
            i = i+1;
        }
    }

    return 0;
}




#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "\nIngrese el tamaño del Arreglo: "<<;
    cin >> n;

    int l[n];


    
    for(int i =0; i<n; i++){

        cout <<"\nIngrese el numero de arreglos:  \n";
        cin >> l[i];
    
    }

    for(int i =0; i<n; i++){
        cout << "\nLos numeros de arreglos son: " << l[i] << "\n";
    }


    return 0;
}






#include <iostream>

using namespace std;

int main (){

    int n = 0;
    int i = 0;

   
    
    cout << "Ingrese un numero entero:\n";
    cin >> n;

    if(n<0){
        cout <<"\nDato invalido. ";
        return 0;
    }

    

    while (i <= 10)
    {
        if(n<0){
            break;
        }
        cout << n << "x" << i << "=" << n*i << "\n";
        i = i+1;
    }

 
    

    return 0;
}




#include <iostream>

using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Usted es mayor de edad." << endl;
    } else {
        cout << "Usted es menor de edad." << endl;
    }

    return 0;
}


#include <iostream>

using namespace std;

int main() {
    int nota;

    cout << "Ingrese su nota: ";
    cin >> nota;

    if (nota >= 90) {
        cout << "Aprobado con distinción." << endl;
    } else if (nota >= 70) {
        cout << "Aprobado." << endl;
    } else {
        cout << "Reprobado." << endl;
    }

    return 0;
}




#include <iostream>

using namespace std;

int main() {
    int día;

    cout << "Ingrese el día de la semana (1-7): ";
    cin >> día;

    switch (día) {
        case 1:
            cout << "Lunes." << endl;
            break;
        case 2:
            cout << "Martes." << endl;
            break;
        case 3:
            cout << "Miércoles." << endl;
            break;
        case 4:
            cout << "Jueves." << endl;
            break;
        case 5:
            cout << "Viernes." << endl;
            break;
        case 6:
            cout << "Sábado." << endl;
            break;
        case 7:
            cout << "Domingo." << endl;
            break;
        default:
            cout << "Día inválido." << endl;
            break;
    }

    return 0;
}




#include <iostream>

using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    string mensaje = (edad >= 18) ? "Usted es mayor de edad." : "Usted es menor de edad.";
    cout << mensaje << endl;

    return 0;
}



#include <iostream>

using namespace std;

int main() {
    int edad;
    int experiencia;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su experiencia laboral (en años): ";
    cin >> experiencia;

    if (edad >= 18 && experiencia >= 5) {
        cout << "Usted es apto para el trabajo." << endl;
    } else {
        cout << "Usted no es apto para el trabajo." << endl;
    }

    return 0;
}



#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num;
    cout << "\nIngrese un numero: ";
    cin >> num;
    double sqrt_num = sqrt(num);
    cout << "\nLa raiz cuadrada de" << num << " es " << sqrt_num << endl;
    return 0;
}



#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    cout << "Ingrese las coordenadas del primer punto (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Ingrese las coordenadas del segundo punto (x2, y2): ";
    cin >> x2 >> y2;
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "La distancia entre los dos puntos es " << distancia << endl;
    return 0;
}