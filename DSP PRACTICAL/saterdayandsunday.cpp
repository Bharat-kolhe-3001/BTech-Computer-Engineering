#include <iostream> // आयओ स्ट्रीम हेडर समाविष्ट करणे
using namespace std; // std नावांच्या स्पेसचा वापर

class First { // First क्लास
public:
    void print() { // print() फंक्शन
        cout << "This is First class" << endl; // संदेश प्रदर्शित करणे
    }

    class Number { // Number नावाचा इतर क्लास
    public:
        void second() { // second() फंक्शन
            cout << "This is Second class" << endl; // संदेश प्रदर्शित करणे
        }
    };
};

int main() {
    First firstObj; // First क्लासचा ऑब्जेक्ट
    firstObj.print(); // First क्लासचा फंक्शन कॉल करणे

    First::Number numberObj; // Number क्लासचा ऑब्जेक्ट
    numberObj.second(); // Number क्लासचा फंक्शन कॉल करणे

    return 0; // प्रोग्राम यशस्वीरित्या पूर्ण झाला
}
