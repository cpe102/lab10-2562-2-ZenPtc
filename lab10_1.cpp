// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    string grade;
    int randNum;
    srand(time(0));

    cout << "Press Enter 3 times to reveal your future.";

    for(int i=0; i<3; i++){
        cin.get();
    }

    for(int i=0; i<9; i++){
        randNum = rand()%9;
    }

    switch(randNum){
        case 0: grade = "A"; break;
        case 1: grade = "B+"; break;
        case 2: grade = "B"; break;
        case 3: grade = "C+"; break;
        case 4: grade = "C"; break;
        case 5: grade = "D+"; break;
        case 6: grade = "D"; break;
        case 7: grade = "F"; break;
        case 8: grade = "W"; break;

    }

    cout << "You will get " << grade << " in this 261102.";

    return 0;
}