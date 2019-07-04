#include <iostream>
#include<string.h>
#include<fstream>

using namespace std;

int main(int argc, char * * argv)
{
    if(strcmp(argv[1],"Administrador")==0){
    ofstream archivo;
    archivo.open("admin.txt");
    archivo<<"Contenido .......@alan";
    archivo.close();
    cout << "Se creo el archivo" << endl;
    }else if(strcmp(argv[1],"Normal")==0) {
    cout << "Normal" << endl;
    }
    return 0;
}
