#include <iostream>

using namespace std;

int main(){
	int nota1 = 0, nota2=0, nota3=0, nota4=0, media;
	cout<<"informe a nota 1"<<endl;
	cin>>nota1;
	cout<<"informe a nota 2"<<endl;
	cin>>nota2;
	cout<<"informe a nota 3"<<endl;
	cin>>nota3;
	cout<<"informe a nota 4"<<endl;
	cin>>nota4;
	
	media = (nota1+nota2+nota3+nota4)/4;
	cout<<"Media das notas �: "<<media;
}
