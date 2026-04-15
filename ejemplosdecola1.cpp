#include <iostream>
using namespace std;
int main()
{
    int d;
    Queue q;

    for (d = 'A'; d <= 'Z'; d++) q.put(d);

    cout << "Items = " << q.size() << endl;

    while (q.size()) {
        cout << (char)q.get() << " ";
    }

    cout << "\nPara terminar oprima <Enter> ...";
    cin.get();
    return 0;
    
}