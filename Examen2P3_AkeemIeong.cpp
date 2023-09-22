#include <iostream>
using namespace std;

void menu() {
    int op;
    do {
        cout << "-----Menu Principal-----\n"
            "1. Leer archivos\n"
            "2. Guardar archivos\n"
            "3. Asignaciones\n"
            "4. Salir\n"
            "Seleccione una opcion:";
        cin >> op;
        switch (op){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
        }
    } while (op!=4);
}
int main(){
    menu();
}