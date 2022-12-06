#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cout << "Starting Calories program" << endl;

    ifstream file("AOCinput1-1.txt");
    if (file.fail()) cout << "Didn't open file" << endl;
    string num;
    int elf = 0;
    vector<pair<int, int>> vect;
    pair<int, int> temp;

    while (getline(file, num))
    {
        if(num.empty())
        {
            temp.second = elf;
            vect.push_back(temp);
            ++elf;
            temp.first = 0;
        }
        else
        {
            temp.first += stoi(num);
        }     
    }

    sort(vect.begin(), vect.end());

    int totalCalories = 0;
    for(int i = 1; i<=3; i++)
    {
        cout << "Elf " << i << ": "<< vect.at(elf - i).second << " Calories: " << vect.at(elf - i).first << endl;
        totalCalories += vect.at(elf - i).first;
    }
    
    cout << "Total Top Calories = " << totalCalories << endl;
}