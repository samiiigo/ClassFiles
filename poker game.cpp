#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

vector<string> suites = { "C", "S", "H", "D" };

auto buildDeck() {
    vector<string> deck;

    for (string suite : suites) {
        for (int i = 1; i < 14; i++) {
            deck.push_back(suite + to_string(i));
        }
    }
    return deck;
}

auto buildNestedDeck() {
    vector<vector<string>> deck;

    for (string& suite : suites) {
        vector<string> suiteDeck;
        for (int i = 1; i < 14; i++) {
            suiteDeck.push_back(suite + to_string(i));
        }
        deck.push_back(suiteDeck);
    }
    return deck;
}

auto shuffleDeck(vector<vector<string>>& deck) {
    vector<string> flatDeck;
    for (auto& suite : deck) {
        for (auto& card : suite) {
            flatDeck.push_back(card);
        }
    }

    // Shuffle the flatDeck
    random_device rd;
    mt19937 g(rd());
    shuffle(flatDeck.begin(), flatDeck.end(), g);

    // Rebuild the nested deck from the shuffled flatDeck
    int index = 0;
    for (auto& suite : deck) {
        for (auto& card : suite) {
            card = flatDeck[index++];
        }
    }
}

auto displayDeck(const vector<vector<string>>& deck) {
    for (const auto& suite : deck) {
        for (const auto& card : suite) {
            cout << '[' << card << "] ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[]) {
    vector<vector<string>> deck;
    deck = buildNestedDeck();

    cout << "Deck:" << endl;
    displayDeck(deck);

    shuffleDeck(deck);

    cout << "Deck:" << endl;
    displayDeck(deck);

    return 0;
}
