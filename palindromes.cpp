//Programa que identifica si una palabra es palindrome o no.
//Creado por Camilo Andres Acevedo Portilla.
//Inspirado en https://misfragmentosdecodigo.eu/palindromos-con-cpp/#:~:text=Los%20pal%C3%ADndromos%20son%20palabras%2C%20frases,por%20ejemplo%3A%201991%20y%202002.

#include <iostream> // Componente de la biblioteca, utilizado para operaciones de entrada / salida.
#include <string> //Archivo de la biblioteca que contiene la defincion de constantes, funciones y algunas operaciones.
using namespace std; //Creamos un bloque que asocie nuestras funciones.
int main() { //Punto de partida para la ejecucion del programa.
    string texto; //Cadena de caracteres en forma de texto.
    int aux = 0, igual = 0; //Declaramos una variable.

    cout << "Ingrese la palabra a evaluar: "; //Imprime la frase inicial al usuario, que ingresara la palabra a evaluar.
    getline(cin >> ws, texto); //Lee la entrada hasta que encuentra el caracter de cambio de linea.

    for(int ind = texto.length() - 1; ind >= 0; ind--) { ////Ciclo para ejecutar nuestro bloque de instrucciones, con nuestra palabra inicial.
        if(texto[ind] == texto[aux]) { //Estructura para definir las acciones a ejecutar.
            igual++; 
        }
        aux++; 
    }

    if(texto.length() == igual) { //Identifica que la palabra si cumple con ser palindrome.
        cout << "La palabra ingresada es palindromo!! Excelente" << endl; //Imprime la frase por que si cumple con los requerimientos.
    } else { //Identifica que la palabra no cumple con ser palindrome.
        cout << "La palabra ingresada no es palindromo!! intenta con otra." << endl; //Imprime la frase por que no cumple con los requerimientos.
    }
 return 0; //Abandonamos la funcion main.
}