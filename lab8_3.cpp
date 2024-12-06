#include<iostream>

using namespace std;

int main(){
    int age,hight,bou;
    string soul;
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 25){
        cout << "Enter your height: ";
        cin >> hight;
        if(hight < 100) soul = "Chopper";
        else if(hight < 180) soul = "Usopp";
        else {
            cout << "Enter your bounty: ";
            cin >> bou;
            soul = (bou > 1.1e9) ? "Zoro" : "Sanji";
        }

    }else if(age <= 60){
        cout << "Enter your bounty: ";
        cin >> bou;
        soul = (bou > 5e8) ? "Jinbe" : "Franky";
    }
    else soul = "Brook";

    cout << "Your character = " << soul;

    return 0;
}


/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
