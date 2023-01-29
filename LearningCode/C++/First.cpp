#include <iostream>
using namespace std;

int main() {
    cout << "Hello" << endl;
    
    int a;
    cin >> a;
    
    if(a>10){
        cout << " <10" << endl;
    }
    else if(a==10){
        cout << " =10" << endl;
    }
    else{
        cout << " >10" << endl;
    }
}
