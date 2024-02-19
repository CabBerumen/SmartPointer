#include <iostream>
#include <memory>

using namespace std;

class Ejemplo {
public:
int numero;

    Ejemplo(int a) : numero(a) {}
    void mostrar() { 
        cout << "Numero: " << numero << endl; 
        }
};

int main() {

    shared_ptr<Ejemplo> puntero1(new Ejemplo(20));

    puntero1->mostrar();
    cout << "conteo del puntero 1: " << puntero1.use_count() << endl;
    return 0;
}