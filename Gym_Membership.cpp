
#include <iostream>  #include <string>

using namespace std;

// Class to store information about a gym membership  class GymMembership {
public:
string name;  int timing;  string level;  int cost;
// Constructor
GymMembership(string n, int t, string l, int c) {  name = n;
timing = t;  level = l;  cost = c;
}
};

int main() {  int choice;  string name;  int timing;  string level;  int cost;
GymMembership* member = NULL;
cout << "Welcome to the Gym Management System!" << endl;  do {
// Show menu
cout << "1. Create a new membership" << endl;  cout << "2. View existing membership" << endl;  cout << "3. Exit" << endl;
cout << "Enter your choice: ";  cin >> choice;

switch (choice) {
case 1:
// Create a new membership  cout << "Enter your name: ";  cin >> name;
cout << "Select timing (1 for morning, 2 for afternoon, 3 for evening): ";  cin >> timing;
cout << "Select level (B for Basic, H for Hard): ";  cin >> level;
if (level == "B") {  cost = 1000;
} else if (level == "H") {  cost = 2000;
} else {
cout << "Invalid level selected!" << endl;  break;
}
member = new GymMembership(name, timing, level, cost);  cout << "Membership created successfully!" << endl;  break;
case 2:
// View existing membership  if (member != NULL) {
cout << "Name: " << member->name << endl;
cout << "Timing: ";
switch (member->timing) {  case 1:
cout << "Morning";  break;
case 2:
cout << "Afternoon";  break;
case 3:
cout << "Evening";  break;
default:
cout << "Invalid timing";
}
cout << endl;
cout << "Level: " << member->level << endl;  cout << "Cost: " << member->cost << endl;
} else {
cout << "No membership found!" << endl;
}
break;  case 3:
// Exit
cout << "Thank you for using the Gym Management System!" << endl;  break;
default:
cout << "Invalid choice! Please try again." << endl;
}
} while (choice != 3);

return 0;
}

