#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int generate_random_number(){
    int MIN_INT = 0;
    int MAX_INT = 2;

    int random_number = (rand() % MAX_INT) + MIN_INT;

    return random_number;
}

void spin_slot(){
    srand(time(0));

    string spin_values[] = {"|", "-", "+"};

    for(int i = 0; i < 3; i++){
        int random_q = generate_random_number();

        string val = spin_values[random_q];

        cout << val << " ";
    }       
}

int main(){
    spin_slot();

    return 1;
}