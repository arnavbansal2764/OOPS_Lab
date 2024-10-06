#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    void getData() {
        cout << "Enter title: ";
        cin >> ws; 
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter year: ";
        cin >> year;
    }

    void displayData() const {
        cout << "Title: " << title << ", Author: " << author << ", Year: " << year << endl;
    }
};
int main(){
	int n;
    cout << "Enter number of books: ";
    cin >> n;
    vector<Book> books(n);

    for (int i = 0; i < n; ++i) {
        cout << "Enter details for book " << i + 1 << endl;
        books[i].getData();
    }

    cout << "\nDisplaying book details:\n";
    for (const auto &book : books) {
        book.displayData();
    }

	return 0;
}