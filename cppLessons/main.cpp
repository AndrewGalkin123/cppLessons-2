#include <iostream>

using namespace std;



int main() {
    
    int num = 10;
    int &a = num;
    
    cout << &num << " - " << num << endl;
    cout << &a << " - " << a << endl;
    
    int val = 12;
    int* ptrval = &val;
    
    
    
    
    cout << &val << " - " << val << endl;
    cout << ptrval << " - " << *ptrval << endl;
    
    
    return 0;
}
