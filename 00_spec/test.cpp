#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Ripple Carry Adder (CRA)
vector<int> CRA(vector<int> A, vector<int> B, int &delay) {
    int n = A.size();
    vector<int> sum(n + 1, 0);
    int carry = 0;
    delay = 0;
    
    for (int i = 0; i < n; i++) {
        sum[i] = A[i] ^ B[i] ^ carry;
        carry = (A[i] & B[i]) | (carry & (A[i] ^ B[i]));
        delay += 1; // Mỗi bit cần thời gian lan truyền
    }
    sum[n] = carry;
    return sum;
}

// Carry Lookahead Adder (CLA)
vector<int> CLA(vector<int> A, vector<int> B, int &delay) {
    int n = A.size();
    vector<int> sum(n + 1, 0);
    vector<int> P(n), G(n);
    int carry = 0;
    delay = 2; // CLA tính toán P, G và carry nhanh hơn CRA
    
    for (int i = 0; i < n; i++) {
        P[i] = A[i] ^ B[i];
        G[i] = A[i] & B[i];
    }
    
    sum[0] = P[0] ^ carry;
    for (int i = 1; i < n; i++) {
        carry = G[i - 1] | (P[i - 1] & carry);
        sum[i] = P[i] ^ carry;
    }
    sum[n] = carry;
    return sum;
}

// Carry Save Adder (CSA) - chỉ cộng từng nhóm 3 số một cách song song
vector<int> CSA(vector<int> A, vector<int> B, vector<int> C, int &delay) {
    int n = A.size();
    vector<int> sum(n, 0), carry(n, 0);
    delay = 1; // CSA có độ trễ thấp hơn vì không lan truyền carry
    
    for (int i = 0; i < n; i++) {
        sum[i] = A[i] ^ B[i] ^ C[i];
        carry[i] = (A[i] & B[i]) | (B[i] & C[i]) | (A[i] & C[i]);
    }
    return sum; // Carry phải cộng tiếp vào giai đoạn sau
}

int main() {
    vector<int> A = {1, 0, 1, 1}; // 13
    vector<int> B = {1, 1, 0, 1}; // 11
    vector<int> C = {0, 1, 1, 0}; //  6
    int delayCRA, delayCLA, delayCSA;

    auto start = high_resolution_clock::now();
    CRA(A, B, delayCRA);
    auto stop = high_resolution_clock::now();
    auto durationCRA = duration_cast<nanoseconds>(stop - start);

    start = high_resolution_clock::now();
    CLA(A, B, delayCLA);
    stop = high_resolution_clock::now();
    auto durationCLA = duration_cast<nanoseconds>(stop - start);

    start = high_resolution_clock::now();
    CSA(A, B, C, delayCSA);
    stop = high_resolution_clock::now();
    auto durationCSA = duration_cast<nanoseconds>(stop - start);

    cout << "Delay CRA: " << delayCRA << " cycles, Time: " << durationCRA.count() << " ns" << endl;
    cout << "Delay CLA: " << delayCLA << " cycles, Time: " << durationCLA.count() << " ns" << endl;
    cout << "Delay CSA: " << delayCSA << " cycles, Time: " << durationCSA.count() << " ns" << endl;

    return 0;
}
