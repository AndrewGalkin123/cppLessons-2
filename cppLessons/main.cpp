#include "iostream"
#include "string"

using namespace std;

class PC {
private:
    int diagonal;
    string os;
public:
    PC(int diagonal, string os){
        this->diagonal = diagonal;
        this->os = os;
    }
    void get_info(){
        cout << "OS: " << os << " Diagonal: " << diagonal;
    }
};

class Laptop: public PC{
private:
    float weight;
public:
    Laptop(int diagonal, string os, float weight): PC(diagonal, os){
        this->weight = weight;
    }
    void get_info(){
        PC::get_info();
        cout << ". Weight: " << weight << endl;
    }
};

int main(){
    setlocale(LC_ALL, "RU");
    
    Laptop mac(16, "MacOS", 1.5f);
   
    mac.get_info();
   
}
