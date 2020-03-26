#include <iostream>
#include <vector>
#include "stage.h"

using namespace std;

void printChoices() {
   cout << "\'a\': add new stage" << endl;
   cout << "\'r\': remove a stage" << endl;
   cout << "\'q\': quit" << endl;
}

void createStage(vector<Stage>& vector) {
   int id;
   int difficulty;

   cout << "Insert id:";
   cin >> id;

   cout << "Insert difficulty:";
   cin >> difficulty;

   vector.insert(vector.end(), Stage(id, difficulty));
}

void removeStage(vector<Stage>& vector, int index) {
   vector.erase(vector.begin()+index);
}

int askIndex() {
   int index = 0;

   cout << "Insert new array size:";
   cin >> index;

   return index;
}

void print(vector<Stage> vector) {
   auto index = vector.begin();
   while (index != vector.end()) {
      cout << "ID: " << index->id << "; Difficulty: " << index->difficulty << " -> " << endl;

      index++;
   }
}

int main() {
   vector<Stage> array;
   array.insert(array.begin(), Stage(-1, 0));

   while (true) {
      char selection;

      cout << endl;
      print(array);
      printChoices();
      cout << "Select a choice:" << endl;
      cin >> selection;

      switch (selection) {
         case 'a':
            createStage(array);
            break;
         case 'r':
            removeStage(array, askIndex());
            break;
         default:
            if (selection != 'q') {
               cout << "Character not allowed" << endl;
            }
      }

      if (selection == 'q') {
         array.clear();
         break;
      }
   }

   return 0;
}