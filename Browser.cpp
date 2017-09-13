#include<iostream>
#include<array>
#include <string>

/* TP x: "browser"
* Crear funcionalidades de back y forward de un navegador.
* Federico Martin Fukushima / Mollon Rodrigo
* Creado: 10-09-2017
* Ultima edicion: 12-09-2017
Copyright © 2017
*/


const unsigned N=10;
struct stack{std::array<string,N> a;
	unsigned i=0;
};

struct queue{
	std::array<string,N> b;
	unsigned front=0, rear=0;
	unsigned size_t = 0;
};

void push(stack&, int);
int pop(stack&);
int top(const stack&);
unsigned length(const stack&);

void enQueue(queue&, int);
int deQueue(queue&);
int first(const queue&);
unsigned length(const queue&);

int main(){
	string back(stack&);
	string forward(queue&);
	
	string actual;
	stack pasado;
	stack futuro;
	
	/*
	hacer actual <- leer linea
	si actual != e && != b && != f
		mensaje: ahora se encuentra en actual
		destruir futuro
	else si actual = b
		si pasado.top != NULL
			futuro.top = actual
			actual = pasado.top
			pop(pasado)
			mensaje: "ahora se encuentra en actual"
		else
			mensaje: "No hay paginas anteriores"
	else si actual = f
		si futuro.top != NULL
			pasado.top = actual
			actual = futuro.top
			pop(futuro)
			mensaje: "ahora se encuentra en actual"
		else 
			mensaje: "no hay paginas posteriores"
	mientras actual != e
	
	*/
	
	do {
	std::cout<<"Ingrese la pagina que desea acceder: \n(b=regresar una pagina / f=avanzar una pagina / e=salir del browser \n)";
	std::cin>>actual;
	getTipoLinea();
	
	
	
	std::cout<<top(s);
	push(s, 13);
	push(s, 14);
	std::cout<<"\ntop pila: "<<top(s)<<"\n";
	std::cout<<"primer pop: "<<pop(s)<<"\n";
	std::cout<<"segundo pop: "<<pop(s)<<"\n";
	push(s, 15);
	std::cout<<"\ntercer pop, luego de otro push: "<<pop(s)<<"\n";
} while (actual != "e");

	queue t;
	std::cout<<"\ndequeue con cola vacia\n";
	std::cout<<deQueue(t);
	std::cout<<"\nfirst con cola vacia\n";
	std::cout<<first(t);
	enQueue(t, 10);
	enQueue(t, 11);
	std::cout<<"\nfirst cola: "<<first(t)<<"\n";
	std::cout<<"primer dequeue: "<<deQueue(t)<<"\n";
	std::cout<<"segundo dequeue: "<<deQueue(t)<<"\n";
	enQueue(t, 12);
	std::cout<<"\ntercer dequeue, luego de otro enqueue: "<<deQueue(t)<<"\n";
	
	
	push(s, 5);
	push(s, 9);
	push(s, 7);
	push(s, 0);
	push(s, 7);
	push(s, 9);
	push(s, 5);
	
	

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

void enQueue(queue& t, int y){
	if (t.size_t < N){
		t.b.at(t.rear) = y;
		++t.size_t;
		t.rear = (t.rear+1) % N;
	}else {
		std::cout<<"Se supero el tamaño maximo del Queue, considere redimensionar\n";
	}
}
int deQueue(queue& t){
	if (t.size_t > 0){
		--t.size_t;
		t.front = (t.front+1) % N;
		return t.b.at(t.front-1);
	} else {
		std::cout<<"El Queue se encuentra vacio\n";
		return 0;
	}
}
int first(const queue& t){
	if (t.size_t != 0){
		return t.b.at(t.front);
	} else {
		std::cout<<"El Queue se encuentra vacio\n";
		return 0;
	}
}
unsigned length(const queue& t){
	return t.size_t;
}



