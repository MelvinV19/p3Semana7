#include <iostream>
#include <fstream>
#include <ios>
using namespace std;
int main(int argc,char* argv[]){
	ofstream salida("salida.txt",ios::app);
	
	salida<<"Hola Mundo"<<endl;
	salida.close();

	return 0;
}
