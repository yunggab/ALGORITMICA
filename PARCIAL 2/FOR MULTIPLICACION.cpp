#include <iostream>

using namespace std;

int main()
{
    int num2,res;
    cout<<"Inserte un numero: " <<endl;
    cin>>num2;
    for (int num=1; num<=10; num++)
    {
     res=num2*num;
     cout<<""<<num<<"X"<<num2<<"="<<res<< endl;
    }


    return 0;
}
