#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Patient {
    int id;
    string name;
    int age;
    int severity;
};

bool compare(Patient a, Patient b) {
    if (a.severity != b.severity) 
        return a.severity > b.severity;
    return a.age < b.age;
}

int main() {
    int n;
    cin >> n;

    vector<Patient> patients(n);
    
    for (int i = 0; i < n; i++) {
        cin >> patients[i].id >> patients[i].name >> patients[i].age >> patients[i].severity;
    }

    sort(patients.begin(), patients.end(), compare);

    for (auto p : patients) {
        cout << p.id << " " << p.name << " " << p.age << " " << p.severity << endl;
    }

    return 0;
}
