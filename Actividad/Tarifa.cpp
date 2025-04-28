#include <iostream>

using namespace std; 
int main(){
    int peso = 0;
    cout<<"Insert package weight"<< endl;
     cin>>peso; 
    
    if (peso <= 5)
    {
        cout<<"The shipment tariff is $5"<< endl;
    }
    else if (6 <= peso <= 10)
    {
        cout<<"The shipment tariff is $10"<< endl;
    }
    else if (peso > 10)
    {
        cout<<"The shipment tariff is $15"<< endl;
    }


    return 0;
}