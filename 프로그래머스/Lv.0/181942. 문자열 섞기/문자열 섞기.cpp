#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string n;
    for(int i=0; i<str1.size();i++)
    {
        n+=str1[i];
        n+=str2[i];
    }
    return n;
}