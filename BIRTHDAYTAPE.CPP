#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double eye_h_inches,
    d_feet,
    d_inches,
    angle_degrees;

    // Reading input values from the keyboard
    cout << "Enter the height of your eye (in inches): ";
    cin >> eye_h_inches;
    cout << "Enter the distance from the tree (in feet and inches): ";
    cin >> d_feet >> d_inches;
    cout << "Enter the angle (in degrees): ";
    cin >> angle_degrees;

    // Convert distance from feet and inches to total inches
    double total_d_inches = d_feet * 12 + d_inches;

    // Convert angle from degrees to radians
    double angle_radians = angle_degrees * M_PI / 180.0;

    // Calculate the height of the tree
    double tree_h_feet = (eye_h_inches / 12.0) + (total_d_inches * tan(angle_radians)) / 12.0;

    // Output the height of the tree in feet
    cout << "The height of the tree is: " << tree_h_feet << " feet" << endl;

    return 0;
}
