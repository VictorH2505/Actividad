#include <iostream>

using namespace std; 
int main() {
    int temperatura = 0;
    cout<<"Insert temperature"<< endl;
     cin>>temperatura; 
    
    if (temperatura < 15)
    {
        cout<<"Its cold"<< endl;
    }
    else if (temperatura > 25)
    {
        cout<<"Its warm"<< endl;
    }
    else if (15 <= temperatura <= 25)
    {
        cout<<"Its tempered"<< endl;
    }

    return 0; 
}