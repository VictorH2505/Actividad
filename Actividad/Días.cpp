#include <iostream>

using namespace std; 
int main() {
    int dia = 0;
    cout<<"Insert a day of the week in a numeric format (from 1 to 7)"<< endl;
     cin>>dia; 
    
    if (dia <= 5)
    {
        cout<<"Labor day"<< endl;
    }
    else if (dia > 5)
    {
        cout<<"Weekend"<< endl;
    }
    else if (dia > 7)
    {
        cout<<"Insert a valid digit"<< endl;
    }

    return 0; 
}