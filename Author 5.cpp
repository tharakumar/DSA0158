#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> authors(4);
    int newAuthor;
    cout << "Enter the details of 4 authors: ";
    for (int i = 0; i < 4; i++) {
        cin >> authors[i];
    }
    cout << "Enter the details of the 5th author: ";
    cin >> newAuthor;
    int notWorkedAuthor = 1;
    auto it = find(authors.begin(), authors.end(), notWorkedAuthor);
    if (it != authors.end()) {
        authors.erase(it);
        cout << "Author No. " << notWorkedAuthor << " is removed from the paper..." << endl;
    }
    authors.push_back(newAuthor);
    cout << "5th author inserted..." << endl;
    cout << "Updated list of authors: ";
    for (int i = 0; i < authors.size(); i++) {
        cout << authors[i] << " ";
    }
    cout << endl;
    return 0;
}