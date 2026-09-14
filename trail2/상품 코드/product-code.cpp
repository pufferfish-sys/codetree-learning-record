#include <iostream>
#include <string>

using namespace std;

class Product {
    public :
       string p_name;
       int p_code;
    Product(string p_name, int p_code)
    :p_name(p_name),p_code(p_code){}
    Product(){}
};


string product_name;
int product_code;

int main() {
    cin >> product_name >> product_code;
    Product p1 = Product("codetree",50);
    Product p2 = Product(product_name,product_code);
    cout << "product " << p1.p_code << " is " << p1.p_name << endl;
    cout << "product " << p2.p_code << " is " << p2.p_name << endl;
    return 0;
}