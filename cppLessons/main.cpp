#include <iostream>

using namespace std;

struct Point{
    int x, y;
};

struct Tree {
    string name;
    int age;
    bool is_alive;
    float height;
    Point place;
    
    void get_info(){
        cout << "Name: " << name << ". Age: " << age << endl;
    }
};


int main() {
    
    setlocale(LC_ALL, "RU");
    
    int num = 10;
    int &a = num;
    
    cout << &num << " - " << num << endl;
    cout << &a << " - " << a << endl;
    
    int val = 12;
    int* ptrval = &val;
    
    
    
    
    cout << &val << " - " << val << endl;
    cout << ptrval << " - " << *ptrval << endl;
    
    Tree oak;
    oak.name = "Дуб";
    oak.age = 24;
    oak.place.x = 232;
    oak.place.y = 100;
    
    oak.get_info();
    
    
    
    
    
    
    return 0;
}
