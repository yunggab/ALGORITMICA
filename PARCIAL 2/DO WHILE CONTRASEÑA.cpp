#include <iostream>

using namespace std;

int main()
{

   int password, X=123456;

    do {
    cout<<"usuario: admin \n\n password: " << endl;
    cin >> X;

    if(password!=X)
    cout<<"contrase�a incorrecta" << endl;

    }
    while(password!=X);
     cout<<"contrase�a correcta" << endl;
     return 0;
}
