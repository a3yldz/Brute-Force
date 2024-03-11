#include <iostream>
#include <random>
using namespace std;

int force() {
    srand(time(NULL));
    int target = 100 + rand() % 900;
    cout<<"Target is finding... "<<endl;

    for (int i = 99; i < 999; ++i) {
        if (i==target){
            cout<<"Target is: " << i<<endl;
            break;
        }

        else{
            continue;
        }
    }


    return 0;
}
