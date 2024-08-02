#include <iostream>
#include <string>

using namespace std;


int main() {
    int *nums = new int[3];
    nums[0] = 45;
    cout << nums[0] << endl;
    delete[] nums;
    
    char word[] = {'H', 'i'};
    for(int i = 0; i < 2; i++){
        cout << word[i];
    }
    
    string words = "Hello world!";
    cout << "\n" << words << endl;
    
    cout << "New: ";
    cin >> words;
    cout << words << endl;
    
    
    return 0;
}
