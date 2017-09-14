#include<iostream>
#include<array>
#include <string>

/* TP x: "browser"
* Crear funcionalidades de back y forward de un navegador.
* Federico Martin Fukushima / Mollon Rodrigo
* Creado: 10-09-2017
* Ultima edicion: 14-09-2017
Copyright © 2017
*/


const unsigned N=10;
struct stack{std::array<string,N> a;
	unsigned i=0;
};

void push(stack&, int);
int pop(stack&);
int top(const stack&);
unsigned length(const stack&);
string actual;
stack pasado;
stack futuro;
void irALaAnterior(stack&, string);
void irALaPosterior (stack&, string);
void irAActual (stack&, string);
void mostrarActual (std::string);
unsigned contadordepaginas = 0;

int main(){
	void leerLinea();
	char getTipo(std::string);
	void accionar(char);
	
	do {
		accionar(getTipo(leerLinea()));
	} while (actual != e);
	return 0;
}

void leerLinea (){
	std::cout<<"Ingrese la direccion a la que desea acceder: (b = back / f = forward / e = exit) \n";
	std::cin>>actual;
}

char getTipo(std::string actual){
	if (actual == "b" || actual == "B")
	return 'b';
	if (actual == "f" || actual == "F")
	return 'f';
	if (actual == "e" || actual == "E"){
	return 'e';
	}else{ return 'a';
	     }
}
void accionar (char accion){
	switch (accion) {
		case 'b' : 
			if (length(pasado) > 0)
				irALaAnterior(pasado);
			brak;
		case 'f':
			if (length(futuro)>0)
				irALaPosterior;
			break;
		case 'e':
			
			return 'e';
			break;
		case 'a': 
			irAActual(actual);
			break;
	}
}

void irALaAnterior(stack pasado, stack futuro, std::string actual){
	if (top(pasado)>0){
		push(futuro, actual);
		actual = top(pasado);
		pop(pasado);
		mostrarActual (actual);
		
	}else{
		std::cout<<"No es posible realizar esa operacion, no hay mas paginas previas. \n";
	     }

void irALaPosterior(stack pasado, stack futuro, std::string actual){
	if (top(futuro)>0){
		push(pasado, actual);
		actual = top(futuro);
		pop(futuro);
		mostrarActual (actual);
		
	}else{
		std::cout<<"No es posible realizar esa operacion, no hay mas paginas posteriores. \n";
	     }	
}

void irAActual(stack pasado, stack futuro, std::string actual){
	if (contadordepaginas >0){
		push(pasado, actual);
		mostrarActual(actual);
		for (i=length(futuro);i>0;i--)
			pop(futuro);
		mostrarActual (actual);
	}else{
		contadordepaginas=contadordepaginas++
		mostrarActual(actual);
	}	
}

void mostrarActual (std::string actual){
	std::cout << "usted se encuentra en la pagina: " << actual << "\n";
}

void push (stack& s, int x){
	if (s.i < N){
		s.a.at(s.i) = x;
		++s.i;	
	} else {
		std::cout<<"Se supero el tamaño maximo del Stack, considere redimensionar\n";
	}
}
int pop (stack& s){
	if (s.i > 0){
		--s.i;
		return s.a.at(s.i);
	} else {
		std::cout<<"El Stack se encuentra vacio\n";
		return 0;
	}
}
int top(const stack& s){
	if (s.i > 0){
		return s.a.at(s.i-1);
	} else {
		std::cout<<"El Stack se encuentra vacio\n";
		return 0;
	}
}
unsigned length(const stack& s){
	return s.i;
}





