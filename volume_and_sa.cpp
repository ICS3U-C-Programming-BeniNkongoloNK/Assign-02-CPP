//!/ usr / bin / env python3
//Created By : Beni
//Date : February 28 2025
//A program to calculate the volume and lateral surface area of a square - based pyramid

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Introduction and explanation as to what to do
    cout << "Hello, I am a calculator" << endl;
    cout << "I am going to calculate stuff frfr. But only for a square-based pyramid cuz im dumb fr" << endl;

    // Decides if you're working with volume or lateral surface area
    cout << "Do you want to calculate the volume or the surface area (v=volume; a= lateral surface area):  " << endl;
    string calculate;
    cin >> calculate;
    int input_again = 3;

    // If you did not input 'v' or 'a' a loop starts making you repeat the input. If you fail 3 times the program ends
    while (calculate != "v" && calculate != "a") {
        input_again--;
        if (input_again == 0) {
            cout << "Clearly you're dumber than me, and i'm the dumb calculator. So u don't get to use me" << endl;
            break;
        }

        cout << "Thats not a valid input, try again" << endl;
        cin >> calculate;
    }

    // If the person wants to calculate the volume
    if (calculate == "v") {
        cout << "What is the base edge?: " << endl;
        double base_edge;
        cin >> base_edge;
        cout << "Thank you. Now, what is the height of your pyramid" << endl;
        double height;
        cin >> height;
        cout << "The volume of your square-based pyramid is: " << (pow(base_edge, 2) * height / 3) << endl;
    }

    // If the person wants to calculate the lateral surface area
    if (calculate == "a") {
        cout << "What is the base edge?: " << endl;
        double base_edge;
        cin >> base_edge;
        cout << "Thank you. Now, what is the height of your pyramid" << endl;
        double height;
        cin >> height;
        cout << "The lateral surface or something of your square-based pyramid is: " << (base_edge * sqrt(pow(base_edge, 2) + 4 * pow(height, 2))) << endl;
    }

    return 0;
}
