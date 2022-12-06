#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    cout << "Starting Calories program" << endl;

    ifstream file("AOCinput1-1.txt");
    if (file.fail()) cout << "Didn't open file" << endl;
    string num;
    int calories = 0;
    int maxCalories = 0;
    int elf = 0;
    int maxElf = 0;

    while (getline(file, num))
    {
        cout << num << endl;
        if(num.empty())
        {
            calories = 0;
            ++elf;
        }
        else
        {
            calories += stoi(num);
        }

        if(calories > maxCalories)
        {
            maxCalories = calories;
            maxElf = elf; 
        }
        
    }

    cout << "Max Calories: " << maxCalories << " & Elf: " << maxElf << endl;
}