#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string s1;

    s1 += to_string(a);
    s1 += to_string(b);
    int n1 = stoi(s1);
    int n2 = 2*a*b;
    
    
    
    return n1 > n2 ? n1:n2;;
}