//Programa de cantidad de watts consumidos por dispositivo
#include <iostream>
#include <vector>
using namespace std;
//Declaración de variable
int i,h;
float total, prueba;
//Creacion de estructura
struct dispositivo
    {
        string nombre_dispositivo;
        string tipo_dispositivo;
        int   horas;
        float consumo;
        int igual;
    } ;
 
//Inico del programa
int main()
{
  vector<dispositivo>datos;
  dispositivo d;
  char r;
  string dispo;

   do{
//Se crea un menú para que el usuario ingrese el dispositivo que quiere saber el consumo 
     cout<<"-----Menu------"<<endl;
      cout<<"Elija la opción de lo que desea realizar: "<<endl<<"1-Insertar un dispositivo"<<endl<<"2-Insertar Horas de consumo"<<endl<<"3-Calcular consumo total por dispoitisivo"<<endl<<"4-salir"<<endl;
      cin>>r;
//Condición 1 el usuario digita las caracteristicas del dispositivo que el desea 
    if (r=='1')
    {
      cout<<"Digite nombre del dispositivo: "<<endl;
      cin>>d.nombre_dispositivo;
      cout<<"Digite El tipo de dispositivo: "<<endl;
      cin>>d.tipo_dispositivo;
      cout<<"Digite del consumo  "<<endl;
      cin>>d.consumo;
      datos.push_back(d);
     } else
//Condición 2 es para agregar las horas al dispositivo que el usuario ingreso, el usurio debe ingresar el mismo nombre que escribio en el nombre del dispositivo
    if (r=='2')
     {
      cout<<"Digite nombre del dispositivo para agregar las horas de consumo: "<<endl;
      cin>>dispo;
      cout<<"Digite las horas de consumo: "<<endl;
      cin>>h;
      for(int i=0;i<datos.size();i++)
      {
        if(dispo==datos[i].nombre_dispositivo)
        {
          datos[i].horas=h;
        }
        }

     }else
//Condición 3 el usuario ingresa las horas de consumo del dispositivo debe ingresar el mismo nombre del tipo de dispositivo, por ejemplo luzext, lizint son los nombres del dispositivo, y luz es el tipo de dispositivo, entonces la palabra luz es la que se digitaria en este espacio 
    if (r=='3')
     {
        cout<<"¿A que tipo de dispositivo desea calcular el consumo:   "<<endl;
        cin>>dispo;
           if(datos.size()==1)
           {
              total=datos[i].consumo*datos[i].horas;
              prueba=prueba+total;  
           }
           
          if(datos.size()>1)
          {
             for(int i=0;i<datos.size();i++)
             {
              if(dispo==datos[i].tipo_dispositivo)
               { 
                total=datos[i].consumo*datos[i].horas;
                prueba=prueba+total;  
               }
             }
           
           }
cout<<"\nEl total de datos consumidos por el tipo de dispositivo: "<<dispo << "  es: " <<prueba <<endl;
      }
     

//Condición 4 salir
  }while(r!='4');
  cout<<"\nPrograma terminado:" <<endl;
}
 