#include <iostream>
#include<Persona.h>

using namespace std;

class Mensaje{

    private:
    int codigo=777;
    public:
    void imprimir();
    protected:

};


void Mensaje::imprimir(){
    cout << codigo << endl;

}

int main()
{
    Mensaje m;
    m.imprimir();

    Persona p;


    return 0;
}
