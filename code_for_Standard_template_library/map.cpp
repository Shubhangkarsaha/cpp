#include <iostream> 
#include <map>

using namespace std;

int main () {

    map<int, string> m;

    m[1] = "Shubha";
    m[4] = "rajan";
    m[0] = "rinku";
    m[5] = "sohan";
    m[3] = "abhijit";
    m[2] = "sibon";

    m.insert({6,"tagor"});
    m.insert({7,"tanmoy"});

    cout << "before erase:" << endl;

    cout << "printing the key & value:" << endl;
    for (auto i:m) {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 1:" << m.count(1) << endl;
    m.erase(1);

    cout << "after erase:" << endl;

    cout << "printing the key & value:" << endl;
    for (auto i:m) {
        cout << i.first << " " << i.second << endl;
    }cout << endl;

    cout << "reference:" << endl << endl;

    auto it = m.find(3);

    for (auto i=it; i!=m.end();i++) {
        cout << (*i).first << " " << (*i).second << endl;
    }

    return 0;
}