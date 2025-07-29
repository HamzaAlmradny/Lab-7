

#include <iostream>
using namespace std;

int main(){
    
    int x = 5;
    int y = 2; 
    int z, k, l, m, n;

    z = x & y;
   
    k = x | y;

    m = x ^ y;

    n = x << 2;

    l = x >> 1;

    cout << "The AND Operator result is " << z << "\n"<< "\n";

    cout << "The OR Operator result is " << k << "\n"<< "\n";

    cout << "The XOR Operator reslut is " << m << "\n"<< "\n";

    cout << "The LEFT Shift result is " << n << "\n"<< "\n";

    cout << "The RIGHT Shift result is " << l<< "\n";

    
    
    
    
    
    return 0;
}

