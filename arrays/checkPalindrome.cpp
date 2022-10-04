#include <iostream>
#include <cstring>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i = 0; input[i] !='\0'; i++){
        count++;
    }
    return count;
}
bool checkPalindrome(char input[]){
    int len = length(input);
    int i = 0;
    int j = len - 1;
    int pal = 0;
    while(i<=j){
        if(input[i] != input[j])
        {
            return false;
        }
            i++;
            j--;
    }
    return true;
    }

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}