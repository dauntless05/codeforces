#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    int size = 1000;
    char a[size];
    int count = 0; 

    cin.getline(a, size);
    int total = strlen(a); 

    for (int i = 0; i < total; i++) {
        bool isUnique = true; 
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                isUnique = false; 
                break;
            }
        }
        if (isUnique) {
            count++; 
        }
    }

    if ((count % 2) == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}
 