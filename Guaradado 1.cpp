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
        cout<<"La primera asignatura es Español" <<endl <<endl;
            do{
                    cout<<"ESPAÑOL"<<endl <<"Tu total de puntos es de: " <<puntos <<" puntos" <<endl;
                    cout<<"Esta pregunta tiene un valor de 20 puntos" <<endl;
                    cout<<"SUERTE CON LA PREGUNTA"<<endl;
                    cout<<"Sustantivo y verbo son:"<<endl;
                    cout<<"1: Preposiciones"<<endl;
                    cout<<"2: Partes de una oraciòn"<<endl;
                    cout<<"3: Expresiones"<<endl <<endl;
                    cin>>respuesta1;
                    
                    switch(respuesta1){
                        case 1:
                            totalpuntos=puntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        case 2:
                            totalpuntos=puntos + sumapuntos;
                            cout<<"FELICIDADES"<<endl <<"Tu total de puntos es de: " <<totalpuntos<<" puntos"<<endl <<endl;
                            break;
                        case 3:
                            totalpuntos=puntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntosa es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        default:
                            cout<<"Lo lamento la opcion que eliguio no esta disponible" <<endl;
                            cout<<"vuelve a eleguir una de las opciones anteriores"<<endl <<endl;   
                    }
                }while(respuesta1 !=1 && respuesta1 !=2 && respuesta1 !=3);
                if(respuesta1 ==1){
                do{
                    cout<<"Esta pregunta tiene un valor de 20 puntos" <<endl;
                    cout<<"SUERTE CON LA PREGUNTA"<<endl;
                    cout<<"Para que una oración tenga sentido debe estar:"<<endl;
                    cout<<"1: Clara"<<endl;
                    cout<<"2: Ordenada"<<endl;
                    cout<<"3: Nìtida"<<endl <<endl;
                    cin>>respuesta11;
                    
                    switch(respuesta11){
                        case 1:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE" <<endl <<"Tu total de puntos es de:" <<totalpuntos <<" puntos" <<endl <<endl;
                            break;
                        case 2:
                            totalpuntos=totalpuntos + sumapuntos;
                            cout<<"FELICIDADES"<<endl <<"Tu total de puntos es de: " <<totalpuntos<<" puntos"<<endl <<endl;
                            break;
                        case 3:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntosa es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        default:
                            cout<<"Lo lamento la opcion que eliguio no esta disponible" <<endl;
                            cout<<"vuelve a eleguir una de las opciones anteriores"<<endl <<endl;
                    }
                }while(respuesta11 !=1 && respuesta11 !=2 && respuesta11 !=3);
            }
            if(respuesta1 ==2){
                do{
                    cout<<"Esta pregunta tiene un valor de 20 puntos" <<endl;
                    cout<<"SUERTE CON LA PREGUNTA"<<endl;
                    cout<<"Para que una oración tenga sentido debe estar:"<<endl;
                    cout<<"1: Clara"<<endl;
                    cout<<"2: Ordenada"<<endl;
                    cout<<"3: Nìtida"<<endl <<endl;
                    cin>>respuesta11;
                    
                    switch(respuesta11){
                        case 1:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        case 2:
                            totalpuntos=totalpuntos + sumapuntos;
                            cout<<"FELICIDADES"<<endl <<"Tu total de puntos es de: " <<totalpuntos<<" puntos"<<endl <<endl;
                            break;
                        case 3:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntosa es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        default:
                            cout<<"Lo lamento la opcion que eliguio no esta disponible" <<endl;
                            cout<<"vuelve a eleguir una de las opciones anteriores"<<endl <<endl;   
                    }
                }while(respuesta11 !=1 && respuesta11 !=2 && respuesta11 !=3);
            }
            if(respuesta1 ==3){
                do{
                    cout<<"Esta pregunta tiene un valor de 20 puntos" <<endl;
                    cout<<"SUERTE CON LA PREGUNTA"<<endl;
                    cout<<"Para que una oración tenga sentido debe estar:"<<endl;
                    cout<<"1: Clara"<<endl;
                    cout<<"2: Ordenada"<<endl;
                    cout<<"3: Nìtida"<<endl <<endl;
                    cin>>respuesta11;
                    
                    switch(respuesta11){
                        case 1:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        case 2:
                            totalpuntos=totalpuntos + sumapuntos;
                            cout<<"FELICIDADES"<<endl <<"Tu total de puntos es de: " <<totalpuntos<<" puntos"<<endl <<endl;
                            break;
                        case 3:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntosa es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        default:
                            cout<<"Lo lamento la opcion que eliguio no esta disponible" <<endl;
                            cout<<"vuelve a eleguir una de las opciones anteriores"<<endl <<endl;
                    }
                }while(respuesta11 !=1 && respuesta11 !=2 && respuesta11 !=3);
            }
            if(respuesta11 ==1){
                do{
                    cout<<"Esta pregunta tiene un valor de 20 puntos" <<endl;
                    cout<<"SUERTE CON LA PREGUNTA"<<endl;
                    cout<<"¿Què es una oracion?"<<endl;
                    cout<<"1: sentido de la expresión"<<endl;
                    cout<<"2: Conjunto de ideas"<<endl;
                    cout<<"3: Una unidad de comunicacion que posee sentido completo, independencia sintáctica y termina en pausa o punto"<<endl <<endl;
                    cin>>respuesta12;
                    
                    switch(respuesta12){
                        case 1:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        case 2:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        case 3:
                            totalpuntos=totalpuntos + sumapuntos;
                            cout<<"FELICIDADES"<<endl <<"Tu total de puntos es de: " <<totalpuntos<<" puntos"<<endl <<endl;
                            break;
                        default:
                            cout<<"Lo lamento la opcion que eliguio no esta disponible" <<endl;
                            cout<<"vuelve a eleguir una de las opciones anteriores"<<endl <<endl;
                    }
                    
                }while(respuesta12 !=1 && respuesta12 !=2 && respuesta12 !=3);
            }
            if(respuesta11 ==2){
                do{
                    cout<<"Esta pregunta tiene un valor de 20 puntos" <<endl;
                    cout<<"SUERTE CON LA PREGUNTA"<<endl;
                    cout<<"¿Què es una oracion?"<<endl;
                    cout<<"1: sentido de la expresión"<<endl;
                    cout<<"2: Conjunto de ideas"<<endl;
                    cout<<"3: Una unidad de comunicacion que posee sentido completo, independencia sintáctica y termina en pausa o punto"<<endl <<endl;
                    cin>>respuesta12;
                    
                    switch(respuesta12){
                        case 1:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        case 2:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        case 3:
                            totalpuntos=totalpuntos + sumapuntos;
                            cout<<"FELICIDADES"<<endl <<"Tu total de puntos es de: " <<totalpuntos<<" puntos"<<endl <<endl;
                            break;
                        default:
                            cout<<"Lo lamento la opcion que eliguio no esta disponible" <<endl;
                            cout<<"vuelve a eleguir una de las opciones anteriores"<<endl <<endl;
                    }
                }while(respuesta12 !=1 && respuesta12 !=2 && respuesta12 !=3);
            }
            if(respuesta11 ==3){
                do{
                    cout<<"Esta pregunta tiene un valor de 20 puntos" <<endl;
                    cout<<"SUERTE CON LA PREGUNTA"<<endl;
                    cout<<"¿Què es una oracion?"<<endl;
                    cout<<"1: sentido de la expresión"<<endl;
                    cout<<"2: Conjunto de ideas"<<endl;
                    cout<<"3: Una unidad de comunicacion que posee sentido completo, independencia sintáctica y termina en pausa o punto"<<endl <<endl;
                    cin>>respuesta12;
                    
                    switch(respuesta12){
                        case 1:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        case 2:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        case 3:
                            totalpuntos=totalpuntos + sumapuntos;
                            cout<<"FELICIDADES"<<endl <<"Tu total de puntos es de: " <<totalpuntos<<" puntos"<<endl <<endl;
                            break;
                        default:
                            cout<<"Lo lamento la opcion que eliguio no esta disponible" <<endl;
                            cout<<"vuelve a eleguir una de las opciones anteriores"<<endl <<endl;
                    }
                }while(respuesta12 !=1 && respuesta12 !=2 && respuesta12 !=3);
            }
            if(respuesta12 ==1){
                do{
                    cout<<"Esta pregunta tiene un valor de 20 puntos" <<endl;
                    cout<<"SUERTE CON LA PREGUNTA"<<endl;
                    cout<<"Llamamos sujeto a:"<<endl;
                    cout<<"1: La persona, animal o cosa que realiza la acción del verbo o de quien se dice algo"<<endl;
                    cout<<"2: Expresiones escritas"<<endl;
                    cout<<"3: Un individuo que habla"<<endl <<endl;
                    cin>>respuesta13;
                    
                    switch(respuesta13){
                        case 1:
                            totalpuntos=totalpuntos + sumapuntos;
                            cout<<"FELICIDADES"<<endl <<"Tu total de puntos es de: " <<totalpuntos<<" puntos"<<endl <<endl;
                            break;
                        case 2:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        case 3:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        default:
                            cout<<"Lo lamento la opcion que eliguio no esta disponible" <<endl;
                            cout<<"vuelve a eleguir una de las opciones anteriores"<<endl <<endl;
                    }
                }while(respuesta13 !=1 && respuesta13 !=2 && respuesta13 !=3);
            }
            if(respuesta12 ==2){
                do{
                    cout<<"Esta pregunta tiene un valor de 20 puntos" <<endl;
                    cout<<"SUERTE CON LA PREGUNTA"<<endl;
                    cout<<"Llamamos sujeto a:"<<endl;
                    cout<<"1: La persona, animal o cosa que realiza la acción del verbo o de quien se dice algo"<<endl;
                    cout<<"2: Expresiones escritas"<<endl;
                    cout<<"3: Un individuo que habla"<<endl <<endl;
                    cin>>respuesta13;
                    
                    switch(respuesta13){
                        case 1:
                            totalpuntos=totalpuntos + sumapuntos;
                            cout<<"FELICIDADES"<<endl <<"Tu total de puntos es de: " <<totalpuntos<<" puntos"<<endl <<endl;
                            break;
                        case 2:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        case 3:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        default:
                            cout<<"Lo lamento la opcion que eliguio no esta disponible" <<endl;
                            cout<<"vuelve a eleguir una de las opciones anteriores"<<endl <<endl;
                    }
                }while(respuesta13 !=1 && respuesta13 !=2 && respuesta13 !=3);
            }
            if(respuesta12 ==3){
                do{
                    cout<<"Esta pregunta tiene un valor de 20 puntos" <<endl;
                    cout<<"SUERTE CON LA PREGUNTA"<<endl;
                    cout<<"Llamamos sujeto a:"<<endl;
                    cout<<"1: La persona, animal o cosa que realiza la acción del verbo o de quien se dice algo"<<endl;
                    cout<<"2: Expresiones escritas"<<endl;
                    cout<<"3: Un individuo que habla"<<endl <<endl;
                    cin>>respuesta13;
                    
                    switch(respuesta13){
                        case 1:
                            totalpuntos=totalpuntos + sumapuntos;
                            cout<<"FELICIDADES"<<endl <<"Tu total de puntos es de: " <<totalpuntos<<" puntos"<<endl <<endl;
                            break;
                        case 2:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        case 3:
                            totalpuntos=totalpuntos - restapuntos;
                            cout<<"TE EQUIVOCASTE"<<endl <<"Tu total de puntos es de: " <<totalpuntos <<" puntos"<<endl <<endl;
                            break;
                        default:
                            cout<<"Lo lamento la opcion que eliguio no esta disponible" <<endl;
                            cout<<"vuelve a eleguir una de las opciones anteriores"<<endl <<endl;
                    }
                }while(respuesta13 !=1 && respuesta13 !=2 && respuesta13 !=3);
            }