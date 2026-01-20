    #include <iostream>
    #include <deque>

    using namespace std;

    int cnt = 0;

    void one(deque<int> &Dq) {
        Dq.pop_front();
    }

    void two(deque<int> &Dq) {
        int a = Dq.front();
        Dq.pop_front();
        Dq.push_back(a);
        cnt++;
    }

    void three(deque<int> &Dq) {
        int b = Dq.back();
        Dq.pop_back();
        Dq.push_front(b);
        cnt++;
    }

    int main() {

        int N, M;
        cin >> N >> M;

        deque<int> Dq;
        for (int i = 1; i <= N; i++) {
            Dq.push_back(i);
        }

        int x;
        while(M--) {
            cin >> x;
            int pos = 0;
            for(auto a : Dq) {
                if(a == x) break;
                pos++;
            }
            int s = (int)Dq.size() / 2;

            if(pos <= s) {
                while(1) {
                    if(Dq.front() == x) {
                        one(Dq);
                        break;
                    }
                    two(Dq);
                }
            } else {
                while(1) {
                    if(Dq.front() == x) {
                        one(Dq);
                        break;
                    }
                    three(Dq);
                }
            }
        }
        cout << cnt << "\n";
        
        return 0;
    }