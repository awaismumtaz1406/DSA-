


#include <iostream>

#include <string>

using namespace std;

// Node for a student
class Student {
public:
    int roll;
    string name;
    Student* next;

    Student(const string& n, int r) {
        name = n;
        roll = r;
        next = nullptr;
    }
};

// Linked list for student records
class StudentList {
private:
    Student* head;

public:
    StudentList() {
        head = nullptr;
    }

    // Add student at the beginning
    void addAtStart(const string& name, int roll) {
        Student* newStu = new Student(name, roll);
        newStu->next = head;
        head = newStu;
        cout << "Added " << name << " at the beginning." << endl;
    }

    // Add student at the end
    void addAtEnd(const string& name, int roll) {
        Student* newStu = new Student(name, roll);
        if (head == nullptr) {
            head = newStu;
            return;
        }
        Student* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newStu;
        cout << "Added " << name << " at the end." << endl;
    }

    // Add student at a specific position
    void addAtPos(const string& name, int roll, int pos) {
        if (pos <= 0) {
            addAtStart(name, roll);
            return;
        }
        Student* newStu = new Student(name, roll);
        Student* current = head;
        for (int i = 1; i < pos - 1 && current != nullptr; ++i) {
            current = current->next;
        }
        if (current == nullptr) {
            cout << "Position is out of bounds." << endl;
            delete newStu;
            return;
        }
        newStu->next = current->next;
        current->next = newStu;
        cout << "Added " << name << " at position " << pos << "." << endl;
    }


    void deleteByRoll(int roll) {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        if (head->roll == roll) {
            Student* temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted student with roll " << roll << "." << endl;
            return;
        }

        Student* current = head;
        while (current->next != nullptr && current->next->roll != roll) {
            current = current->next;
        }

        if (current->next == nullptr) {
            cout << "Student with roll " << roll << " not found." << endl;
        } else {
            Student* temp = current->next;
            current->next = temp->next;
            delete temp;
            cout << "Deleted student with roll " << roll << "." << endl;
        }
    }

    // Search for a student by name
    void searchByName(const string& name) {
        Student* current = head;
        bool found = false;
        while (current != nullptr) {
            if (current->name == name) {
                cout << "Student found: Name: " << current->name << ", Roll: " << current->roll << endl;
                found = true;
                break;
            }
            current = current->next;
        }
        if (!found) {
            cout << "Student " << name << " not found." << endl;
        }
    }

    // Display all student records
    void displayAll() {
        if (head == nullptr) {
            cout << "The student list is empty." << endl;
            return;
        }
        cout << "--- Student Records ---" << endl;
        Student* current = head;
        while (current != nullptr) {
            cout << "Name: " << current->name << ", Roll: " << current->roll << endl;
            current = current->next;
        }
    }
};

int main() {
    StudentList records;

    // Insert 3 students
    records.addAtStart("Awais", 101);
    records.addAtEnd("Ahmad", 102);
    records.addAtPos("Arsklan", 103, 2);

    cout << "\nRecords after insertions:\n";
    records.displayAll();

    // Delete 1 student
    records.deleteByRoll(102);
    
    cout << "\nRecords after deletion:\n";
    records.displayAll();

    // Search for a student
    records.searchByName("Awais");
    records.searchByName("Ahmad");

    return 0;
}





// int a[9]={2,3,6,7,8,9,4,3,11};
// int x=0;
// for(int i=1; i<a.size();i++){
//  if(a[i]!=a[x]){
//     x=x+1;
//     a[x]=a[i];
//  }
// }
























// #include <iostream>
// #include <vector>
// #include <string>


// using namespace std;


// class Editor {
// private:
 
//     vector<string> undoStk;

 
//     vector<string> redoStk;

//     const size_t MAX_SIZE = 100;

//     // The current content of the editor.
//     string currentText;

//     void updateStacks() {
//         undoStk.push_back(currentText);

//         // 2. Enforce the size limit (100 actions).
//         if (undoStk.size() > MAX_SIZE) {
//             undoStk.erase(undoStk.begin());
//             cout << " Max history reached. Oldest state removed." << endl;
//         }

//         redoStk.clear();
//     }

// public:
//     Editor() : currentText("") {
//         cout << "Editor started." << endl;
//     }

//     void write(const string& text) {
//         updateStacks();

//         currentText += text;
//         cout << "WROTE: \"" << text << "\". Current: \"" << currentText << "\"" << endl;
//     }

//     void undo() {
//         if (undoStk.empty()) {
//             cout << "==> Cannot UNDO. History is empty." << endl;
//             return;
//         }

//         redoStk.push_back(currentText);

//         currentText = undoStk.back();
//         undoStk.pop_back();

//         cout << "==> UNDO successful. Current: \"" << currentText << "\"" << endl;
//     }

//     void redo() {
//         if (redoStk.empty()) {
//             cout << "==> Cannot REDO. Nothing to restore." << endl;
//             return;
//         }

//         undoStk.push_back(currentText);

//         currentText = redoStk.back();
//         redoStk.pop_back();

//         cout << " REDO successful. Current: \"" << currentText << "\"" << endl;
//     }

//     string getText() const {
//         return currentText;
//     }
// };

// int main() {
//     // --- Demonstration ---
//     Editor editor;

//     editor.write("Malik. ");      
//     editor.write("Awais. ");     
//     editor.write("Mumtaz");      

//     cout << " UNDO Sequence ---" << endl;
//     editor.undo(); 
//     editor.undo(); 
//     cout << " REDO Sequence ---" << endl;
//     editor.redo(); 
//     editor.redo(); 

//     cout << " New Write Clears Redo ---" << endl;
//     editor.write(" The end."); 
//     editor.redo(); 

//     cout << "\nFinal Text: \"" << editor.getText() << "\"" << endl;

//     return 0;
// }

 


	

