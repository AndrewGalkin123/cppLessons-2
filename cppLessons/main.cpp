#include <iostream>
#include <fstream>

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
    
    ofstream file("test.doc", ios_base::out);
    if(file.is_open()){
        file << "Hello world";
        file.close();
    }
    
    return 0;
}
