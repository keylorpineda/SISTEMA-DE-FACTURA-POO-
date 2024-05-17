#include <iostream>
using namespace std;
class Clientes
{
private:
    string nombre;
    int edad;
    int cedula;
public:
    Clientes()
    {
        nombre = "";
        edad = 0;
        cedula = 0;
    }
    Clientes(string _nombre, int _edad, int _cedula)
    {
        nombre = _nombre;
        edad = _edad;
        cedula = _cedula;
    }
    ~Clientes()
    {
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    void setEdad(int _edad)
    {
        edad = _edad;
    }
    void setCedula(int _cedula)
    {
        cedula = _cedula;
    }
    string getNombre()
    {
        return nombre;
    }
    int getEdad()
    {
        return edad;
    }
    int getCedula()
    {
        return cedula;
    }
    string registroNom()
    {
        return " fue su nombre registrado en el sistema";
    }
    string registroEdad()
    {
        return " como su edad fue registrada de forma correcta";
    }
    string registroCed()
    {
        return " fue registrada como su cedula en el sistema de manera correcta";
    }
};
class Factura
{
private:
    string nombre;
    float precio;
    string producto;
public:
    Factura()
    {
        nombre = "";
        precio = 0;
        producto = "";
    }
    Factura(string _nombre, float _precio, string _producto)
    {
        nombre = _nombre;
        precio = _precio;
        producto = _producto;
    }
    ~Factura()
    {
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    void setPrecio(float _precio)
    {
        precio = _precio;
    }
    void setProducto(string _producto)
    {
        producto = _producto;
    }
    string getNombre()
    {
        return nombre;
    }
    float getPrecio()
    {
        return precio;
    }
    string getProducto()
    {
        return producto;
    }
};
class Productos
{
private:
    string celular1;
    string celular2;
    string celular3;
    string celular4;
public:
    Productos()
    {
        celular1 = "Samsung S23";
        celular2 = "Iphone 15 Plus";
        celular3 = "Huawei P50";
        celular4 = "Xiaomi 13T";
    }
    void setCelular1(string _celular1)
    {
        celular1 = _celular1;
    }
    void setCelular2(string _celular2)
    {
        celular2 = _celular2;
    }
    void setCelular3(string _celular3)
    {
        celular3 = _celular3;
    }
    void setCelular4(string _celular4)
    {
        celular4 = _celular4;
    }
    string getCelular1()
    {
        return celular1;
    }
    string getCelular2()
    {
        return celular2;
    }
    string getCelular3()
    {
        return celular3;
    }
    string getCelular4()
    {
        return celular4;
    }
    void Descrip1()
    {
        cout << "Caracteristicas" << endl << endl;
        cout << "Pantalla 6.1" << endl;
        cout << "Camara 50mp" << endl;
        cout << "Espacio 256gb, 8gb ram" << endl;
        cout << "Bateria: 3.900 mAh" << endl;
        cout << "Procesador: Snapdragon 8 Gen 2" << endl;
        cout << "Precio: 399900" << endl;
    }
    void Descrip2()
    {
        cout << "Caracteristicas" << endl << endl;
        cout << "Pantalla 6,7" << endl;
        cout << "Camara 48mp" << endl;
        cout << "Espacio 256gb, 6gb ram" << endl;
        cout << "Bateria: 4912 mAh" << endl;
        cout << "Procesador: Apple A16 Bionic" << endl;
        cout << "Precio: 599900" << endl;
    }
    void Descrip3()
    {
        cout << "Caracteristicas" << endl << endl;
        cout << "Pantalla 6,5" << endl;
        cout << "Camara 50mp" << endl;
        cout << "Espacio 256gb, 8gb ram" << endl;
        cout << "Bateria: 4100 mAh" << endl;
        cout << "Procesador: Snapdragon 888 4G" << endl;
        cout << "Precio: 499900" << endl;
    }
    void Descrip4()
    {
        cout << "Caracteristicas" << endl << endl;
        cout << "Pantalla 6,7" << endl;
        cout << "Camara 50mp" << endl;
        cout << "Espacio 256gb, 12gb ram" << endl;
        cout << "Bateria: 5000 mAh" << endl;
        cout << "Procesador: MediaTek Dimensity 8200 Ultra" << endl;
        cout << "Precio: 279900" << endl;
    }
};
int main()
{
    string nombre;
    int edad;
    int cedula;
    cout << "Bienvenido a nuestro sistema de registro" << endl << "Ingrese su nombre: " << endl;
    cin >> nombre;
    cout << "Ahora ingrese su edad: " << endl;
    cin >> edad;
    cout << "Por ultimo ingrese su numero de cedula (sin guiones): " << endl;
    cin >> cedula;
    Clientes paginaDeRegistro(nombre, edad, cedula);
    cout << paginaDeRegistro.getNombre() << paginaDeRegistro.registroNom() << endl << endl;
    cout << paginaDeRegistro.getEdad() << paginaDeRegistro.registroEdad() << endl << endl;
    cout << paginaDeRegistro.getCedula() << paginaDeRegistro.registroCed() << endl << endl;
    Productos productos;
    int opcion;
    cout << "Seleccione un celular para ver sus caracteristicas:" << endl << endl;
    cout << "1. " << productos.getCelular1() << endl << endl;
    cout << "2. " << productos.getCelular2() << endl << endl;
    cout << "3. " << productos.getCelular3() << endl << endl;
    cout << "4. " << productos.getCelular4() << endl << endl;
    cin >> opcion;
    string productoSeleccionado;
    float precioSeleccionado;
    switch (opcion)
    {
    case 1:
        productos.Descrip1();
        productoSeleccionado = productos.getCelular1();
        precioSeleccionado = 399900;
        break;
    case 2:
        productos.Descrip2();
        productoSeleccionado = productos.getCelular2();
        precioSeleccionado = 599900;
        break;
    case 3:
        productos.Descrip3();
        productoSeleccionado = productos.getCelular3();
        precioSeleccionado = 499900;
        break;
    case 4:
        productos.Descrip4();
        productoSeleccionado = productos.getCelular4();
        precioSeleccionado = 279900;
        break;
    default:
        cout << "Opcion no valida" << endl;
        return 0;
    }
    char comprar;
    cout << "Desea comprar este producto? (y/n): ";
    cin >> comprar;
    if (comprar == 'y' || comprar == 'Y')
    {
        Factura factura(nombre, precioSeleccionado, productoSeleccionado);
        cout << "Factura" << endl << endl;
        cout << "Tienda de Celulares" << endl << endl;
        cout << "Nombre del Cliente: " << factura.getNombre() << endl << endl;
        cout << "Descripcion del producto: " << factura.getProducto() << endl << endl;
        cout << "Precio: " << factura.getPrecio() << endl << endl;
        cout << "Gracias por su compra" << endl << endl;
    }
    else
    {
        cout << "Compra cancelada" << endl << endl;
    }
    return 0;
} 