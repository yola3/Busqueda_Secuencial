//Busqueda Secuencial

#include<iostream>
using namespace std;
int main(){// main 
 int numeros[1000];//arreglo
 int iter=0,n=0,dato=0;//variables a utilizar en el programa
 char band='F';// bandera que indicara si encuentra el dato en el arrglo
 cout<<"\n Ingrese tamaño del arreglo:  ";//solicita el tamaño del arreglo
 cin>>n;//asiga el valor
 for(iter=0;iter<n;iter++){//el for se utiliza para poder ingresar los datos en cada posicion del arreglo
 cout<<"\n Ingrese datos para posicion "<<iter+1<<"--->   ";
 cin>>numeros[iter];//asiga valores
  } 
 cout<<"\n arreglo que ingreso con sus respectivos elementos "<<endl;//muestra el arreglo completo
 cout<<"\n";
 
  for(iter=0;iter<n;iter++){//recorre el arreglo
  cout<<"["<<numeros[iter]<<"]";
   }
   cout<<"\n";
   cout<<"\n Valor a buscar:  ";//numero a buscar
   cin>>dato; 
   
   
   //Busqueda secuencial
     iter=0; //se inicializa el iterador en 0  
     while((band=='F') && (iter<n)){//si bandera sigue siendo falso se seguira ejecuntando el programa interadpr menor a 5 
      if(numeros[iter]==dato){//si el dato a buscar es encontrado 
       band='V';//bandera cambia de valor
          }
      iter++;//para seguir aumentando 
         } 
         
     if(band=='F'){//si bandera sigue siendo falso
      cout<<"\n El numero: "<<dato<<"  no existe en el arreglo"<<endl;//no existe en el arreglo el numero a buscar mensaje
        } 
     else if(band=='V'){//en caso de que sea verdadero 
     goto buscarposicion;
       }
     buscarposicion:
     for(int iter=0;iter<n;iter++){
      if(dato==numeros[iter]){
      cout<<"\n El numero  "<<dato<<"  ha sido encontrado en: "<<iter+1<<endl; //el dato ha sido encontrado
      }
     }    
 cout<<"\n Gracias por usar el programa "<<endl;
 cout<<"\n"<<endl;
 system("pause");
 return 0;
  }
