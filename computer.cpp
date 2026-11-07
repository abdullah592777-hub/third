#include<iostream>
using namespace std;
class hardisk{
public:
    string brand;
    int capacity;
    float price;
    hardisk(string b, int c, float p){
        brand = b;
        capacity = c;
        price = p;
    }
    void display(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Capacity: "<<capacity<<" GB"<<endl;
        cout<<"Price: $"<<price<<endl;
    }
};
class processor{
public:
    string brand;
    int frequency;
    processor(string b, int f){
        brand = b;
        frequency = f;
    }
    void display(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Frequency: "<<frequency<<" GHz"<<endl;
    }
};
class computer{
hardisk h;
processor p;
string model;
public:
    computer(string b, int c, float pr, string pb, int f, string m):h(b, c, pr), p(pb, f), model(m){
    }
    void display(){
        cout<<"Model: "<<model<<endl;
        h.display();
        p.display();
    }
};
int main(){
    computer c("Seagate", 1000, 59.99, "Intel", 3, "Dell Inspiron");
    c.display();
    cout<<"am add in a1"<<endl;
    return 0;
}
