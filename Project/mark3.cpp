#include <iostream>
#include <string>
using namespace std;

int GetOption(){
    int input;
    cin >> input;
    return input;
}

int main()
{
    cout << GetOption() <<endl;
    cin.get();
    return 0;
}
