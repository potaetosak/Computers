# CCOMP verano
Mateo Rodriguez
Rafael estuvo aquí
Primera tarea
#include <iostream>;
#include <stdio.h>;
#include <string.h>;
using namespace std;
int main(){   
    //Ejercicio #16
    int n1, n2;

    cout << "\n   Introduzca el primer numero: ";
    cin >> n2;

    cout << "\n   Introduzca el segundo numero: " ;
    cin >> n1;

    cout << "\n   La suma es: " << n1 + n2 ;
    cout << "\n   El producto es: " << n1 * n2 ;
    cout << "\n La diferencia es: " << n1-n2;
    cout << "\n El cociente es: " << n1/n2;
    // Ejercicio #18
    int primero, segundo;
    printf( "\n Introduzca el primer numero: ");
    cin >> primero;
    printf( "\n Introduzca el segundo numero: ");
    cin >> segundo;
    if (primero > segundo){
        cout << primero << " is larger";}
    else if (segundo > primero){
        cout << segundo << " is larger";}
    else if (primero == segundo){
        cout <<"\n These numbers are equal";}
    // Ejercicio #20
    int radio;
    cout << "\n Ingrese el radio del circulo: ";
    cin >> radio;
    float area= radio*radio*3.14159;
    cout << "\n El diamentro es : " << radio*2;
    cout << "\n El area es: " << area;
    // Ejercicio #22
    /* Imprime:
    *****
    ****
    ***
    **
    * <-hasta acá
	*/
    // Ejercicio #24
    int uno, dos;
    cout << "\n Ingrese el primer numero: ";
    cin >> uno;
    cout << "\n Ingrese el segundo numero: ";
    cin >> dos;
    cout << uno << endl;
    cout << dos << endl;
    int suma = uno + dos;
    if (suma%2 == 0){
        cout << suma << endl;}
    // Ejercicio #26
    // con 8 
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;
    // con el minimo
    cout << "Con el menor numero de lineas" << "\n* * * * * * * *" << "\n * * * * * * * *" << "\n* * * * * * * *" << "\n * * * * * * * *" << "\n* * * * * * * *" << "\n * * * * * * * *" << "\n* * * * * * * *" << "\n * * * * * * * *";
    // Ejercicio #28
    /*char perro, j, i, nuevo;
    cout << "\n Ingrese un numero";
    cin >> perro;
    j = strlen(perro)-1;
	for (i=0; i<strlen(perro); i++) {
		nuevo[j] = toupper(perro[i]);
		j --;}*/
    // Ejercicio #30
    float peso, altura;
    int sistema;
	float BMI;
    cout << "\n Si va a usar el sistema metrico ingrese 1 si usará el sistema imperial ingrese cero: ";
    cin >> sistema;
	if (sistema ==1){   
    cout << "Ingrese el peso (KG): ";
    cin >> peso;
    cout << "\n Ingrese la altura (CM): ";
    cin >> altura;
	BMI =(peso)/(altura*altura);
	if (BMI < 18,5){
        cout << "Bajo de peso";}
    else if (BMI >= 18,5 && BMI <= 24,9){
        cout << "Normal";}
    else if (BMI > 24,9 && BMI <= 29,9){
        cout << "Sobrepeso";}
    else if (BMI > 30){
        cout << "Obeso";}}
    else if (sistema ==0){
        BMI =(peso*703)/(altura*altura);
    cout << "Ingrese el peso (Lbs): ";
    cin >> peso;
    cout << "\n Ingrese la altura (Ft): ";
    cin >> altura;
    if (BMI > 18,5){
        cout << "Bajo de peso";}
    else if (BMI >= 18,5 && BMI <= 24,9){
        cout << "Normal";}
    else if (BMI > 24,9 && BMI <= 29,9){
        cout << "Sobrepeso";}
    else if (BMI > 30){
        cout << "Obeso";}
	}
    // Ejercicio #32   
	int edad;
	cout << "\n Ingrese su edad: ";
	cin >> edad;
	cout << "\n Su Mhr en la priera ecuacion es " << 220-edad << "\n Su Mhr en la ecuacion de 2001 es " << 208-edad*7/10 << "\n Su Mhr en la ecuacion de 2007 es " << 207-edad*7/10 << "\n Su Mhr en la ecuacion de 2012 es " << 211-edad*64/100 << "\n Su Mhr debe estar en el rango de " << 220-edad << " hasta " << 207-edad*7/10 << endl; 
	return 0;
}
