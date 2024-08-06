#include<iostream>
#include<vector>
using namespace std;

void display(const vector<int>& v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter size of first Array: ";
    cin >> n;
    vector<int> v1;
    cout << "Enter Array Elements:" << endl;
    for(int i = 0; i < n; i++) {
        int q;
        cin >> q;
        v1.push_back(q);
    }
    display(v1);

    int m;
    cout << "Enter Size of Second Array: ";
    cin >> m;
    vector<int> v2;
    cout << "Enter Elements in Second Array:" << endl;
    for(int i = 0; i < m; i++) {
        int q;
        cin >> q;
        v2.push_back(q);
    }
    display(v2);

    vector<int> v3;
    // Copy elements from v1 to v3
    for(int i = 0; i < v1.size(); i++) {
        v3.push_back(v1[i]);
    }
    // Copy elements from v2 to v3
    for(int i = 0; i < v2.size(); i++) {
        v3.push_back(v2[i]);
    }
    display(v3);
    return 0;
}
