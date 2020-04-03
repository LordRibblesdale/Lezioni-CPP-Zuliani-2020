#include <iostream>
#include "stage.h"

using namespace std;

void printChoices() {
   cout << "\'a\': add new stage" << endl;
   cout << "\'r\': remove a stage" << endl;
   cout << "\'q\': quit" << endl;
}

void createStage(Stage* head, Stage*& iter) {
   int id;
   int difficulty;

   cout << "Insert id:";
   cin >> id;

   cout << "Insert difficulty:";
   cin >> difficulty;

   iter = head;

   while (iter->next != nullptr) {
      iter = iter->next;
   }

   iter->next = new Stage(id, difficulty);
}

void removeStage(Stage* const head, Stage*& iter, int index) {
   Stage* tmp;
   Stage* previous;

   iter = head;

   while (index > 0 && iter != nullptr) {
      previous = iter;
      iter = iter->next;
      index--;
   }

   if (iter == nullptr) {
      cout << "Element not found!" << endl;
   } else {
      if (iter->next != nullptr) {
         tmp = iter->next;
         iter->id = iter->next->id;
         iter->difficulty = iter->next->difficulty;
         iter->next = iter->next->next;

         tmp->next = nullptr;

         delete(tmp);
      } else {
         delete(previous->next);
         previous->next = nullptr;
      }
   }
   /*
   Stage* tmp;

   iter = head;

   while (index > 1 && iter != nullptr) {
      iter = iter->next;
      index--;
   }

   if (iter == nullptr) {
      cout << "Element not found!" << endl;
   } else {
      if (iter->next != nullptr) {
         tmp = iter->next;
         iter->next = iter->next->next;

         tmp->next = nullptr;

         delete(tmp);
      } else {
         delete(iter->next);
         iter->next = nullptr;
      }
   }
    */
}

int askIndex() {
   int index = 0;

   cout << "Insert new array size:";
   cin >> index;

   return index;
}

void print(Stage* head) {
   while (head != nullptr) {
      cout << "ID: " << head->id << "; Difficulty: " << head->difficulty << " -> " << endl;

      head = head->next;
   }
}

int main() {
   Stage* head = new Stage(-1, 0);
   Stage* iter = nullptr;

   while (true) {
      char selection;

      cout << endl;
      print(head);
      printChoices();
      cout << "Select a choice:" << endl;
      cin >> selection;

      switch (selection) {
         case 'a':
            createStage(head, iter);
            break;
         case 'r':
            removeStage(head, iter, askIndex());
            break;
         default:
            if (selection != 'q') {
               cout << "Character not allowed" << endl;
            }
      }

      if (selection == 'q') {
         delete(iter);
         delete(head);
         break;
      }
   }

   return 0;
}