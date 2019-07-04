#include <iostream>

using namespace std;

namespace ns01{

    void imprimir(){
        cout << "Hello world!" << endl;
    }

}


int main()
{
    ns01::imprimir();
    return 0;
}
