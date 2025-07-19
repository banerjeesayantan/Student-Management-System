#include <iostream>
#include <string>

using namespace std;

// Max student limit
const int MAX = 20;

// Data storage
string regr[MAX];       // Registration numbers
string nameIr[MAX];     // Names
string rollId[MAX];     // Roll IDs
string marksId[MAX];    // Marks

int choosecount = 0;    // Number of students entered

// Function: Add new students
void nameIn() {
    int x;
    cout << "Number of Students for CSE Department (LIMIT - 20): ";
    cin >> x;

    if (x > MAX) {
        cout << "Sorry! ONLY 20 people are allowed.\n";
        return;
    }

    cin.ignore(); // To consume newline after cin
    choosecount = x;

    for (int i = 0; i < x; i++) {
        cout << "\nEnter Detail of Student [ " << i + 1 << " ] : \n";
        cout << "- Name: ";
        getline(cin, nameIr[i]);

        cout << "- Registration: ";
        getline(cin, regr[i]);

        cout << "- Roll ID: ";
        getline(cin, rollId[i]);
    }
}

// Function: Faculty Login
void fltIn() {
    string x;
    int x1;

    cout << "Enter your subject code: ";
    cin >> x;

    if (x != "CSE2") {
        cout << "Invalid Subject Code. Access Denied.\n";
        return;
    }

    cout << "\nAvailable operations:\n";
    cout << "1. Add data about marks\n";
    cout << "2. View data\n";

    cout << "\nEnter option: ";
    cin >> x1;
    cin.ignore();

    switch (x1) {
        case 1:
            for (int i = 0; i < choosecount; i++) {
                cout << "\nEnter Marks of Student [ " << nameIr[i] << " ]: ";
                getline(cin, marksId[i]);
            }
            break;

        case 2:
            cout << "\n----------------<< RESULT >>----------------\n\n";
            cout << "\t|\tName\t|\tMarks\n";
            cout << "-----------------------------\n";
            for (int i = 0; i < choosecount; i++) {
                cout << i + 1 << "\t|\t" << nameIr[i] << "\t|\t" << marksId[i] << endl;
            }
            break;

        default:
            cout << "Invalid Option! Try Again.\n";
            return;
    }
}

// Student Login
void stdIn() {
    int x;
    cout << "Student Login ~ Welcome ~\n";
    cout << "1. Edit Name\n";
    cout << "2. Return to Main Menu\n";
    cout << "\nOption: ";
    cin >> x;
    cin.ignore();

    switch (x) {
        case 1: {
            cout << "\t|\tName\t|\tRegistration No\t|\tRoll No\t|\n";
            cout << "--------------------------------------------------------\n";
            for (int i = 0; i < choosecount; i++) {
                cout << i + 1 << " |\t" << nameIr[i] << "\t|\t" << regr[i] << "\t|\t" << rollId[i] << endl;
            }

            int index;
            string newName;
            cout << "\nEnter your student number (1-" << choosecount << ") : ";
            cin >> index;
            cin.ignore();

            if (index < 1 || index > choosecount) {
                cout << "Invalid number!\n";
                return;
            }

            cout << "Enter new name: ";
            getline(cin, newName);
            nameIr[index - 1] = newName;

            cout << "Name updated successfully!\n";
            break;
        }

        case 2:
            cout << "Returning to Main Menu.\n";
            return;

        default:
            cout << "Try Again!\n";
            return;
    }
}

// Proctor Login (placeholder)
void ptdIn() {
    cout << "Proctor Login Feature Coming Soon...\n";
}

// Admin View
void adnIn() {
    string password;
    cout << "\nEnter the admin password : ";
    cin >> password;
    cout<<"\n"<<endl;

    if (password != "Admin") {
        cout << "Sorry. Retry!\n";
        return;
    }

    cout << "\t|\tName\t|\tRegistration No\t|\tRoll No\t|\tMarks\t|\n";
    cout << "---------------------------------------------------------------\n";
    for (int i = 0; i < choosecount; i++) {
        cout << i + 1 << "\t|\t" << nameIr[i] << "\t|\t" << regr[i]
             << "\t|\t" << rollId[i] << "\t|\t"<<marksId[i]<< endl;
    }
}

int main() {
    int ans;
    char try1;

    cout << "\n** Available operations: **\n" << endl;
    do {
        cout << "1. Add New Students\n"
             << "2. Student Login\n"
             << "3. Faculty Login\n"
             << "4. Proctor Login\n"
             << "5. Admin View\n"
             << "6. Exit\n\n";

        cout << "Enter option: ";
        cin >> ans;
        cout << "\n-----------Result-----------\n\n";

        switch (ans) {
            case 1: nameIn(); break;
            case 2: stdIn(); break;
            case 3: fltIn(); break;
            case 4: ptdIn(); break;
            case 5: adnIn(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "\nInvalid Value. Try Again!\n\n"; break;
        }

        cout << "\n------------END------------\n\n";
        cout << "Want To Start Again? (y/n) ~ ";
        cin >> try1;
        if (tolower(try1) == 'y') {
            cout << "\n-----------FRESH-----------\n\n";
        }

    } while (tolower(try1) == 'y');

    return 0;
}
