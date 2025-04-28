#include <iostream>

using namespace std; 
int main() {
    int v1, v2;
    cout<<"Insert the first value (from 0 to 100)"<< endl;
     cin>>v1; 
    cout<<"Insert the second value (from 0 to 100)"<< endl;
     cin>>v2; 
    if (v2 < v1 && 0 <= v1 <= 100 && 0 <= v2 <= 100)
    {
        cout<<"The first value is closer to 100"<< endl;
    }
    else if (v1 < v2 && 0 <= v1 <= 100 && 0 <= v2 <= 100)
    {
        cout<<"The second value is closer to 100"<< endl;
    }
    
    return 0; 
}