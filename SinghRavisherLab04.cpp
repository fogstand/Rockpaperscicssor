/****************
 * Name:
 * Lab Partner:
 * Class: CSCI 1411-00X
 * Due Date:
 * Description:
 * Status: successfully compiled on CLion
 * [if it doesn’t run or meet all of the requirements, list
 * the actual status!]
 ****************/
#include<iostream>

#include<string.h>

using namespace std;

int main() {
    char p1RPS, p2RPS;
    string player1, player2;
    cout << "Name of player1: \n";
    getline(cin, player1);
    cout << "Name of player2: \n";
    getline(cin, player1);
    cout << "Enter player1s input: \n";
    cin >> p1RPS;
    cout << "Enter player2s input: \n";
    cin >> p2RPS;
    if (p1RPS == 'r' || p1RPS == 'R') {
        switch (p2RPS) {
            case 'r':
            case 'R':
                std::cout << "DRAW" << endl;
                break;
            case 's':
            case 'S':
                std::cout << "Player1 wins" << endl;
                break;
            case 'p':
            case 'P':
                std::cout << "player2 wins" << endl;
                break;
            default:
                cout << "Invalid input" << endl;
        }
    } else if (p1RPS == 's' || p1RPS == 'S') {
        switch (p2RPS) {
            case 'r':
            case 'R':
                std::cout << "Player2 wins" << endl;
                break;
            case 's':
            case 'S':
                std::cout << "Draw" << endl;
                break;
            case 'p':
            case 'P':
                std::cout << "Player1 wins" << endl;
                break;
            default:
                cout << "Invalid input" << endl;
        }
    } else if (p1RPS == 'p' || p1RPS == 'P') {
        switch (p2RPS) {
            case 'r':
            case 'R':
                std::cout << "Player1 wins" << endl;
                break;
            case 's':
            case 'S':
                std::cout << "Player2 wins" << endl;
                break;
            case 'p':
            case 'P':
                std::cout << "Draw" << endl;
                break;
            default:
                cout << "Invalid input" << endl;
        }
    }
    else {cout << "Invalid input" << endl;

}
 return 0;
    }










