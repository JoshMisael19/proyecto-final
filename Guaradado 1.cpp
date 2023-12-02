#include <iostream>

using namespace std;

int main()
{
    int puntos =100;
    int totalpuntos =0;
    int totalpuntosespanol =0;
    int totalpuntoscultura =0;
    int totalpuntosquimica =0;
    int sumapuntos =20;
    int sumapuntoscultura = 60;
    int sumapuntosquimica = 50;
    int restapuntos =40;
    int respuesta =0;
    int respuesta1 =0;
    int respuesta11 =0;
    int respuesta12 =0;
    int respuesta13 =0;
    int respuesta14 =0;
    int respuesta2 =0;
    int respuesta21 =0;
    int respuesta22 =0;
    int respuesta23 =0;
    int respuesta24 =0;
    int respuesta3 =0;
    int respuesta31 =0;
    int respuesta32 =0;
    int respuesta33 =0;
    int respuesta34 =0;
    int generalpuntos = 0;
    int siguiente =0;
    int siguiente1 =0;
    int salida =1;
    
    do{
    do{
        cout<<"BIENVENIDO AL TEST"<<endl <<endl <<"MENU PRINCIPAL: " <<endl <<endl <<"1: Iniciar juego" <<endl <<"2: Instrucciones" <<endl;
        cout<<"3: Asignaturas" <<endl <<"4: Creditos" <<endl <<"5: Salir del juego" <<endl;
        cout<<"Eligue cualquiera de las 5 opciones"<<endl <<endl;
        cin>>respuesta;
        
        switch(respuesta){
            case 1:
                cout<<"Cargando juego..." <<endl <<"Comenzando..." <<endl <<endl;
                break;
            case 2:
                cout<<"INSTRUCCIONES"<<endl;
                cout<<"1.- NO ocupar un apoyo como es internet, libros, etc, a la hora de contestar las preguntas"<<endl;
                cout<<"2.- Cada pregunta tendra valores distintos de puntos, si contestas bien obtendras los puntos" <<endl <<"3.- Por cada pregunta que contestes mal se te restara 40 puntos"<<endl;
                cout<<"3.- Al iniciar el juego comenzaras con un total de 100 puntos" <<endl <<"5.- Reune los puntos totales que puedas"<<endl <<endl;
                break;
             case 3:
                cout<<"Estas son las asignaturas que contiene el juego:" <<endl;
                cout<<"-Español" <<endl;
                cout<<"-Cultura general" <<endl;
                cout<<"-Quimica" <<endl <<endl;
                break;
            case 4:
                cout<<"Este TEST fue hecho por: Bautista Cabrera Joshua Misael"<<endl <<endl;
                break;
            case 5:
                cout<<"Saliendo del juego..."<<endl;
                cout<<"Gracias por jugar"<<endl <<endl;
                return 0;
            default:
                cout<<"Lo lamento la opcion que eliguio no esta disponible" <<endl;
                cout<<"vuelve a eleguir una de las opciones anteriores"<<endl <<endl;
        }
    }while(respuesta !=1);