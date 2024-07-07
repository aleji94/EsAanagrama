#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;



/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 * CARA - ARCA
 */
 
 int main(){
 	
 	// Definir las variables
 	string cadena;
 	string nuevaCadena;
 	
 	// Pedir al usuario que ingrese una palabra
 	cout<<"Ingrese una Palabra: ";
 	cin>>cadena;
 	
	cout<<"Cadena Original: "<<cadena<<endl;
	
	// Ciclo para recorrer cadena
	for(int i = cadena.length() - 1; i >= 0; i--){
		
		// Sumar caracteres a la cadena vacia
		nuevaCadena += cadena[i];
	}
	
		cout<<"Nueva Cadena: "<<nuevaCadena<<endl;

	// Verificar si es anagrama tomando en cuenta que si las palabras son iguales no es anagrama
	if(cadena == nuevaCadena){
		cout<<"Aanagrama? No";
	}	else {
		cout<<"Aanagrama? Si";
	}
	
 	
 	return 0;
 }
