#include <iostream>
#include <string>
using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;

void push_front(int x){
  dat[--head] = x;
}

void push_back(int x){
    dat[tail++] = x;
}

void pop_front(){
  head++;
}

void pop_back(){
  tail--;
}

int front(){
  return dat[head];
}

int back(){
  return dat[tail - 1];
}

bool empty() {
  return head == tail;
}

int size() {
  return tail - head;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string s;
    for (int i = 0; i < N; i++) {
        cin >> s;
        if(s == "push_back") {
            int op;
            cin >> op;
            push_back(op);
        } else if(s == "push_front") {
            int op;
            cin >> op;
            push_front(op);
        } else if(s == "pop_front") {
            if(!empty()) {
                cout << front() << "\n";
                pop_front();
            }
            else cout << -1 << "\n";
        } else if(s == "pop_back") {
            if(!empty()) {
                cout << back() << "\n";
                pop_back();
            }
            else cout << -1 << "\n";
        } else if(s == "size") {
            cout << size() << "\n";
        } else if(s == "empty") {
            if(empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if(s == "front") {
            if(!empty()) cout << front() << "\n";
            else cout << -1 << "\n";
        } else if(s == "back") {
            if(!empty()) cout << back() << "\n";
            else cout << -1 << "\n";
        }   
    }
    return 0;
}