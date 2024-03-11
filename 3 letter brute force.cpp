#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

int letter() {
    srand(time(NULL));
    char target[4];
    cout << "Hedef bulunuyor... " << endl;

    for (int i = 0; i < 3; ++i) {
        target[i] = 'a' + rand() % 26;
    }
    target[3] = '\0';

    cout << "Rastgele 3 karakter: " << target << endl;

    for (char c1 = 'a'; c1 <= 'z'; ++c1) {
        for (char c2 = 'a'; c2 <= 'z'; ++c2) {
            for (char c3 = 'a'; c3 <= 'z'; ++c3) {
                char currentCombination[4] = {c1, c2, c3, '\0'};

                if (strcmp(target, currentCombination) == 0) {
                    cout << "Hedef kombinasyon bulundu: " << currentCombination << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Hedef kombinasyon bulunamadı." << endl;

    return 0;
}
