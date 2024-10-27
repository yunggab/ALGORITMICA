#include <iostream>

using namespace std;

int main()
{

   int password, X=123456;

    do {
    cout<<"usuario: admin \n\n password: " << endl;
    cin >> X;

    if(password!=X)
    cout<<"contraseña incorrecta" << endl;

    }
    while(password!=X);
     cout<<"contraseña correcta" << endl;
     return 0;
}
