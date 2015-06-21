#include <iostream>

#include "listaPacientes.h"
#include "Paciente.h"

using namespace std;

int main()
{
    ListaPacientes<Paciente> list_1;

    int dim;
    int pos;
    std::string nombre;
    int edad;
    string file_with_list;

    cout << "Agrega un elemento por la cabeza: " << endl;
    cout << "Nombre : "
    cin >> nombre;
    cout << "Edad : "
    cin >> edad;

    Paciente elemento(nombre,edad);

    list_1.add_head(elemento);
    list_1.print();

    cout << "Agrega un elemento por la cabeza: " << endl;
    cout << "Nombre : "
    cin >> nombre;
    cout << "Edad : "
    cin >> edad;

    elemento = new Paciente(nombre,edad);

    list_1.add_head(elemento);
    list_1.print();

    cout << "Agrega un elemento por la cola: " << endl;
    cout << "Nombre : "
    cin >> nombre;
    cout << "Edad : "
    cin >> edad;

    elemento = new Paciente(nombre,edad);

    list_1.add_end(elemento);
    list_1.print();

    cout << "Busca un elemento: " << endl;
    cin >> nombre;
    Paciente segundo = list_1.search(nombre);

    cout << "Su nombre es " << segundo.getNombre() << "  y su edad es " << segundo.getEdad() << end1;

    cout << "Guardar la lista en un archivo - Ingresa el nombre(Ex: list2.txt): " << endl;
        cin >> file_with_list;
        list_1.save_file(file_with_list);

    cout << "Cargar una lista desde archivo - Ingresa el nombre(Ex: list.txt): " << endl;
    // El archivo debe estar en el mismo directorio que este programa
    cin >> file_with_list;
    list_1.load_file(file_with_list);
    cout << "Lista B: " << endl;
    list_1.print();



    return 0;
}
