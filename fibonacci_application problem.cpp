#include <iostream>
#include <vector>
using namespace std;

int main() {
int years;

cout << "Enter years of customer loyalty: ";  
cin >> years;  

if (years <= 0) {  
    cout << "Please enter a positive number of years."  
         << endl;  
    return 0;  
}  

vector<long long> rewards(years);  

rewards[0] = 0;  

if (years > 1) {  
    rewards[1] = 1;  
}  

for (int i = 2; i < years; i++) {  
    rewards[i] = rewards[i - 1] + rewards[i - 2];  
}  

cout << "\nCustomer Loyalty Reward Points" << endl;  

for (int i = 0; i < years; i++) {  
    cout << "Year " << i + 1 << ": "  
         << rewards[i] << " points" << endl;  
}  

return 0;

}