
#include <iostream>

using namespace std;

int main()
{
    int bread = 100;
    int butter = 1000;

    int bread_cost = 5;
    int butter_cost = 10;

    cout << "Dear customer!" << endl;
    int required_bread = 0;
    cout << "How many bread you want?" << endl;
    cin >> required_bread;


    int required_butter = 0;
    cout << "How many butter you want?" << endl;
    cin >> required_butter;


    bread -= required_bread;
    butter -= required_butter;

    cout << "The shop has " << bread << " left" << endl;
    cout << "The shop has " << butter << " left" << endl;

    int total_money = required_bread * bread_cost + required_butter * butter_cost;

    cout << "The the shop has total money " << total_money << endl;
    return 0;

}