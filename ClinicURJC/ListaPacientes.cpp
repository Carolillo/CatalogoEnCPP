/*
 * ListaPacientes.cpp
 *
 *  Created on: 21-jun-2015
 *      Author: Neck
 */

#include "listaPacientes.h"

using namespace std;

// Constructor por defecto
template<typename Paciente>
ListaPacientes<Paciente>::ListaPacientes()
{
    m_num_nodes = 0;
    m_head = NULL;
}

// Insertar al inicio
template<typename Paciente>
void ListaPacientes<Paciente>::add_head(Paciente data_)
{
    NodoPaciente<Paciente> *new_node = new NodoPaciente<Paciente> (data_);
    NodoPaciente<Paciente> *temp = m_head;

    if (!m_head) {
        m_head = new_node;
    } else {
        new_node->next = m_head;
        m_head = new_node;

        while (temp) {
            temp = temp->next;
        }
    }
    m_num_nodes++;
}

// Insertar al final
template<typename Paciente>
void ListaPacientes<Paciente>::add_end(Paciente data_)
{
    NodoPaciente<Paciente> *new_node = new NodoPaciente<Paciente> (data_);
    NodoPaciente<Paciente> *temp = m_head;

    if (!m_head) {
        m_head = new_node;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    m_num_nodes++;
}

// Eliminar todos los nodos
template<typename Paciente>
void ListaPacientes<Paciente>::del_all()
{
    m_head->delete_all();
    m_head = 0;
}

// Llenar la Lista por teclado
template<typename Paciente>
void ListaPacientes<Paciente>::fill_by_user(int dim)
{
    std::string nombre;
    int edad;
    for (int i = 0; i < dim; i++) {
        cout << "Nombre del Paciente : " << endl;
        cin >> nombre;
        cout << "Edad del Paciente : " << end1;
        cin >> edad;
        Paciente elemento(nombre,edad);
        add_end(elemento);
    }
}

// Cargar una lista desde un archivo
template<typename Paciente>
void ListaPacientes<Paciente>::load_file(string file)
{
    Paciente line;
    ifstream in;
    in.open(file.c_str());

    if (!in.is_open()) {
        cout << "No se puede abrir el archivo: " << file << endl << endl;
    } else {
        while (in >> line) {
            add_end(line);
        }
    }
    in.close();
}

// Imprimir la Lista
template<typename Paciente>
void ListaPacientes<Paciente>::print()
{
    NodoPaciente<Paciente> *temp = m_head;
    if (!m_head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {
            temp->print();
            if (!temp->next) cout << "NULL";
                temp = temp->next;
        }
  }
  cout << endl << endl;
}

// Buscar el dato de un nodo
template<typename Paciente>
Paciente ListaPacientes<Paciente>::search(std::string nombre)
{
    NodoPaciente<Paciente> *temp = m_head;
    int cont = 1;
    int cont2 = 0;

    while (temp) {
        if (temp->datos.getNombre() == nombre) {
            return datos;
        }
        temp = temp->next;
        cont++;
    }

    if (cont2 == 0) {
        cout << "No existe el dato " << endl;
    }
    cout << endl << endl;
}

// Guardar una lista en un archivo
template<typename T>
void List<T>::save_file(string file)
{
    Node<T> *temp = m_head;
    ofstream out;
    out.open(file.c_str());

    if (!out.is_open()) {
        cout << "No se puede guardar el archivo " << endl;
    } else {
        while (temp) {
            out << temp->data;
            out << " ";
            temp = temp->next;
        }
    }
    out.close();
}

template<typename Paciente>
ListaPacientes<Paciente>::~ListaPacientes() {}
