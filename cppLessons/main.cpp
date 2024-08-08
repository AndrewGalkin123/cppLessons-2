#include "iostream"
#include "string"

using namespace std;

class Building {
private:
    int year;
    string type;
public:
    Building(int year, string type){
        set_data(year,type);
    }
public:
    void set_data(int year, string type){
        this->year = year;
        this->type = type;
    }
    void get_info(){
        cout << "Type: " << type << ". Year: " << year << endl;
    }
    ~Building(){
        cout << "Object was deleted" << endl;
    }
};

int main(){
    setlocale(LC_ALL, "RU");
    
    Building school(2003, "Школа");
    school.get_info();
    Building house(2023, "Дом");
    house.get_info();
}
