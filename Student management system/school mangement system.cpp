#include <iostream>
#include <string>

using namespace std;

class Subject {
protected:
    string name;
    int maxMarks;

public:
    Subject(const string& name, int maxMarks) : name(name), maxMarks(maxMarks) {}

    const string& getName() const {
        return name;
    }

    int getMaxMarks() const {
        return maxMarks;
    }
};

class Classroom {
protected:
    int roomNumber;
    int capacity;

public:
    Classroom(int roomNumber, int capacity) : roomNumber(roomNumber), capacity(capacity) {}

    int getRoomNumber() const {
        return roomNumber;
    }

    int getCapacity() const {
        return capacity;
    }
};

class Student : public Classroom {
private:
    string studentID;
    string name;
    string gradeLevel;
    int mathMarks;
    int scienceMarks;
    int englishMarks;

public:
    Student(int roomNumber, int capacity, const string& studentID, const string& name, const string& gradeLevel)
        : Classroom(roomNumber, capacity), studentID(studentID), name(name), gradeLevel(gradeLevel) {}

    const string& getStudentID() const {
        return studentID;
    }

    const string& getName() const {
        return name;
    }

    const string& getGradeLevel() const {
        return gradeLevel;
    }

    void setMathMarks(int marks) {
        mathMarks = marks;
    }

    int getMathMarks() const {
        return mathMarks;
    }

    void setScienceMarks(int marks) {
        scienceMarks = marks;
    }

    int getScienceMarks() const {
        return scienceMarks;
    }

    void setEnglishMarks(int marks) {
        englishMarks = marks;
    }

    int getEnglishMarks() const {
        return englishMarks;
    }

    float calculatePercentage(const Subject& subject) const {
        if (subject.getName() == "Math") {
            return static_cast<float>(mathMarks) / subject.getMaxMarks() * 100.0f;
        } else if (subject.getName() == "Science") {
            return static_cast<float>(scienceMarks) / subject.getMaxMarks() * 100.0f;
        } else if (subject.getName() == "English") {
            return static_cast<float>(englishMarks) / subject.getMaxMarks() * 100.0f;
        } else {
            return 0.0f;
        }
    }
};

int main() {
    Subject math("Math", 100);
    Subject science("Science", 100);
    Subject english("English", 100);

    Classroom classroom1(101, 30);
    Classroom classroom2(102, 25);
    Classroom classroom3(103, 35);

    Student student1(classroom1.getRoomNumber(), classroom1.getCapacity(), "S001", "John Doe", "Grade 10");
    Student student2(classroom1.getRoomNumber(), classroom1.getCapacity(), "S002", "Jane Smith", "Grade 11");
    Student student3(classroom2.getRoomNumber(), classroom2.getCapacity(), "S003", "Michael Johnson", "Grade 9");

    student1.setMathMarks(90);
    student2.setScienceMarks(70);
    student3.setEnglishMarks(82);

    cout << "Student 1 Percentage in Math: " << student1.calculatePercentage(math) << "%" << endl;
    cout << "Student 2 Percentage in Science: " << student2.calculatePercentage(science) << "%" << endl;
    cout << "Student 3 Percentage in English: " << student3.calculatePercentage(english) << "%" << endl;

    return 0;
}
