#include <iostream>
#include <vector>

using namespace std;

int main() {
    int count;
    cin >> count;
    vector<string> letter(count);
    
    for (int i=0; i<count; i++) {
        cin >> letter[i];
    
        cout << letter[i].front() << letter[i].back() << endl;
    }
    
    return 0;
}