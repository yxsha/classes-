#include <iostream>

using namespace std;

void add();
void search();
void d();


int main() {
  int choice;
  cout << "1. add" << endl;
  cout << "2. search" << endl;
  cout << "3. delete" << endl;
  cin >> choice;

  switch(choice) {
    case 1:
    add();
    break;
    case 2:
    search();
    break;
    case 3: 
    d();
    break;

    cin.get();

  }
}

void add() {
  int addmedia;
  string title, title2, title3, publisher, publisher2, artist, director;
  int year, year2, year3, rating, rating2, duration, duration2;

  cout << "1. video games" << endl;
  cout << "2. music" << endl;
  cout << "3. movies" << endl;
  cin >> addmedia;

  switch(addmedia) {
    case 1:
    cout << "enter the title: " << endl;
    cin >> title;

    cout << "enter the year: " << endl;
    cin >> year;

    cout << "enter the publisher: " << endl;
    cin >> publisher;

    cout << "enter the rating: " << endl;
    cin >> rating;
    main();
    case 2: 
    cout << "enter the title: " << endl;
    cin >> title2;

    cout << "enter the artist: " << endl;
    cin >> artist;

    cout << "enter the year: " << endl;
    cin >> year2;

    cout << "enter the duration: " << endl;
    cin >> duration;

    cout << "enter the publisher: " << endl;
    cin >> publisher2;
    break;
    case 3:
    cout << "enter the title: " << endl;
    cin >> title3;

    cout << "enter the director: " << endl;
    cin >> director;

    cout << "enter the year: " << endl;
    cin >> year3;

    cout << "enter the duration: " << endl;
    cin >> duration2;

    cout << "enter the rating: " << endl;
    cin >> rating2;
    break;

  }

}

void search() {
  int searchobject, yearsearch;
  string titlesearch;
  string title, title2, title3, publisher, publisher2, artist, director;
  int year, year2, year3, rating, rating2, duration, duration2;
  cout << "1. title" << endl;
  cout << "2. year" << endl;
  cin >> searchobject;

  switch(searchobject) {
    case 1:
    cout << "enter the title: " << endl;
    cin >> titlesearch;
    if (titlesearch == title) {
      cout << title << year << publisher << rating << endl;
    }
    else if (titlesearch == title2) {
      cout << title2 << artist << year2 << duration << publisher2 << endl;
    }
    else if (titlesearch == title3) {
      cout << title3 << director << year3 << duration2 << rating2 << endl;
    }
    break;
    case 2:
    cout << "enter the year: " << endl;
    cin >> yearsearch;
    if (yearsearch == year) {
      cout << year << title << publisher << rating << endl;
    }
    else if (yearsearch == year2) {
      cout << year2 << title2 << artist << duration << publisher2;
    }
    else if (yearsearch == year3) {
      cout << year3 << title3 << director << duration2 << rating2 << endl;
    }
    break;
    
  }

}

void d() {

}