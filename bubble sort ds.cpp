/*Game Development:
write a game development program that implements the Bubble Sort algorithm. The program will simulate a simple game where the player can 
input a set of numbers, and the numbers will be sorted using Bubble Sort to simulate a "level-up" scenario where the player's scores are
sorted in ascending order.*/

#include <iostream>
using namespace std;
int main() {
    int a;
    float score1[20], score2[20];
cout << "Enter total scores: ";
    cin >> a;
cout << "Enter scores for Player 1: \n";
    for (int i = 0; i < a; i++) {
        cin >> score1[i];
    }
 cout << "Enter scores for Player 2: \n";
    for (int i = 0; i < a; i++) {
        cin >> score2[i];
    }
 cout << "\nDisplaying scores entered:\n";
    cout << "Player1:\n";
    for (int i = 0; i < a; i++) {
        cout << score1[i] << " ";
    }
    cout << "\nPlayer2:\n";
    for (int i = 0; i < a; i++) {
        cout << score2[i] << " ";
    }
    cout << endl;
for (int i = a; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            if (score1[j] < score1[j + 1]) {
                float temp = score1[j];
                score1[j] = score1[j + 1];
                score1[j + 1] = temp;
            }
            if (score2[j] < score2[j + 1]) {
                float temp = score2[j];
                score2[j] = score2[j + 1];
                score2[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted Scores:\n";
    cout << "Player1: ";
    for (int k = 0; k < a; k++) {
        cout << score1[k] << " ";
    }
    cout << "\nPlayer2: ";
    for (int k = 0; k < a; k++) {
        cout << score2[k] << " ";
    }
    cout << endl;
 if (score1[0] > score2[0]) {
        cout << "\n Player 1 wins!" << endl;
    } else if (score2[0] > score1[0]) {
        cout << "\n Player 2 wins!" << endl;
    } else {
        cout << "\n It's a tie!" << endl;
    }

    return 0;
}
