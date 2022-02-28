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

bool check_for_win(string val1, string val2, string val3){
    if(val1 == val2 & val2 == val3){
        return true;
    }

    return false;
}

void spin_slot(){
    srand(time(0));

    string spin_values[] = {"|", "-", "+"};
    string vals[] = {"", "", ""};

    for(int i = 0; i < 3; i++){
        int random_v = generate_random_number();

        string val = spin_values[random_v];

        vals[i] = val;

        cout << val << " ";
    }  

    string val1 = vals[0];  
    string val2 = vals[1];  
    string val3 = vals[2];  

    bool won = check_for_win(val1, val2, val3);

    if(won){
        cout << endl << "You win!";
    }else{
        cout << endl << "You lose!";
    }
}

int main(){
    spin_slot();

    return 1;
}