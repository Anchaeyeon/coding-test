#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    for (int i=0; i<numbers.size(); i++) {
        for (int j=0; j<=9; j++) {
            if (numbers[i] == j) {
                answer -= j;
            }
        }
    }
    return answer;
}