#include <iostream>
using namespace std;

void RecSubsets(string soFar, string rest) {
    if (rest == "") {
        cout << soFar << endl;
    }
    else {
        RecSubsets(soFar + rest[0], rest.substr(1));
        RecSubsets(soFar, rest.substr(1));
    }
}

void ListSubsets(string str) {
    RecSubsets("", str);
}

int main() {
    ListSubsets("abcd");
}
