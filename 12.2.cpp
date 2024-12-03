#include <iostream>
#include <string.h>
#include "windows.h"
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    char S[100], S1[20], S2[20];

    cout << "Введіть рядок S: ";
    cin.getline(S, 100); 

    cout << "Введіть рядок S1 (підрядок для заміни рядка S): ";
    cin.getline(S1, 20); 

    cout << "Введіть рядок S2 (рядок для заміни рядка S): ";
    cin.getline(S2, 20); 

    char* pos = strstr(S, S1);

    if (pos != nullptr) {
        
        char result[100] = ""; 
   
        strncat_s(result, S, pos - S);

        strcat_s(result, S2);

        strcat_s(result, pos + strlen(S1));

        cout << "Результат після заміни: " << result << endl;
    }

}

