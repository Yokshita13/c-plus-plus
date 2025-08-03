#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
    
    string balance;
    string password;
    
    public:
    
    string accountID;
    string username;
    
};

int main() {
    Account details;
    details.accountID = "xxxxxxxx7815";
    details.username = "Y";
    
    
    cout << "Username is: " << details.username << endl;
    cout << "Account ID is: " << details.accountID << endl;
    return 0;
}
