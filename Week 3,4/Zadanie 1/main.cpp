#include <iostream>

using namespace std;

int main(){
    
    int n;
    setlocale(LC_ALL, "Rus");
    cout <<"¬ведите количество строк: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
       cout << "" << endl;
        for (int j = 1; j <= i;) {
            j++;
          cout << "0";
        }
    }
    return 0;
}