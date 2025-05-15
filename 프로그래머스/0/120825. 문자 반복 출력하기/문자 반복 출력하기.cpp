#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    string my_char = "";
    for (int i=0; i<my_string.length(); i++) {
        my_char = my_string.substr(i,1);
        for (int i=0; i<n; i++) {
            answer += my_char;
        }
    }
    return answer;
}