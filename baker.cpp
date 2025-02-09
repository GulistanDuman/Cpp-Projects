#include <iostream>
#include <queue>

using namespace std;

class Customer {
private:
    string name;
    int pieces;

public:
    Customer(string name, int pieces) : name(name), pieces(pieces) {}

    
    string getName() const { return name; }
    int getPieces() const { return pieces; }

    friend ostream& operator<<(ostream& o, const Customer& m);
};


ostream& operator<<(ostream& o, const Customer& m) {
    o << m.name << " wants to buy " << m.pieces << " pieces.";
    return o;
}

class Baker {
private:
    queue<Customer*> customerQueue;

public:
    void breadsell() {
        if (customerQueue.empty()) {
            cout << "There is no customer in the queue." << endl;
        } else {
            Customer* m = customerQueue.front();
            customerQueue.pop();
            cout << *m << " - Bread given to the customer." << endl;

        
            cout << *this << endl;
        }
    }

    void getinqueue(Customer* m) {
        if (m) {
            customerQueue.push(m);
        }
    }

    
    friend ostream& operator<<(ostream& o, Baker& b);
};


ostream& operator<<(ostream& o, Baker& b) {
    if (b.customerQueue.empty()) {
        o << "There is no customer in the queue." << endl;
    } else {
        int i = 1;
        o << "Customers in queue:" << endl;
        queue<Customer*> tempQueue = b.customerQueue;
        while (!tempQueue.empty()) {
            Customer* m = tempQueue.front();
            o << i << " -> " << m->getName() << " " << m->getPieces() << " pieces he/she wants to buy bread." << endl;
            tempQueue.pop();
            i++;
        }
        o << endl;
    }
    return o;
}

int main() {
    Baker baker;
    Customer m("Ragip", 3);
    Customer m2("Ravza", 8);
    Customer m3("Rana", 5);
    Customer m4("Rabia", 2);
    Customer m5("Gülistan", 1);
    
    
    baker.getinqueue(&m);
    baker.getinqueue(&m2);
    baker.getinqueue(&m3);
    baker.getinqueue(&m5);

    cout << baker;
    baker.breadsell();
    cout<< baker;
    baker.breadsell();
    baker.breadsell();
    cout << baker;
    baker.getinqueue(&m4);  
    cout << baker;  
    baker.breadsell();
    baker.breadsell();
    baker.breadsell();
    return 0;
}
