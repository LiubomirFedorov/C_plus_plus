#include <iostream>
#include <string>
#include <regex>
#include <Windows.h>

using namespace std;


class IPAddress {
public:
    IPAddress(const string& ip) : ipAddress(ip) {}
    IPAddress(const IPAddress& other) : ipAddress(other.ipAddress) {}
    virtual void print() const {
        cout << ipAddress;
    }
protected:
    string ipAddress;
};


class IPAddressChecked : public IPAddress {
public:
    IPAddressChecked(const string& ip);
    IPAddressChecked(const IPAddressChecked& other);
    void print() const override;

private:
    bool isValidIP(const string& ip) const;
    bool isCorrect;
};

IPAddressChecked::IPAddressChecked(const string& ip) : IPAddress(ip) {
    isCorrect = isValidIP(ip);
}

IPAddressChecked::IPAddressChecked(const IPAddressChecked& other) : IPAddress(other), isCorrect(other.isCorrect) {}

bool IPAddressChecked::isValidIP(const string& ip) const {
    
    const regex pattern("(\\d{1,3})\\.(\\d{1,3})\\.(\\d{1,3})\\.(\\d{1,3})");
    smatch match;
    if (regex_match(ip, match, pattern)) {
        for (int i = 1; i <= 4; ++i) {
            int num = stoi(match[i].str());
            if (num < 0 || num > 255) {
                return false;
            }
        }
        return true;
    }
    return false;
}

void IPAddressChecked::print() const {
    IPAddress::print();
    cout << " - " << (isCorrect ? "Коректна" : "Некоректна");
}

int main() {
    SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
    SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення
    
    string ip1, ip2, ip3;
    cout << "Введіть першу IP-адресу: ";
    cin >> ip1;
    cout << "Введіть другу IP-адресу: ";
    cin >> ip2;
    cout << "Введіть третю IP-адресу: ";
    cin >> ip3;

    IPAddress ipAddress1(ip1);
    IPAddressChecked ipAddressChecked1(ip2);
    IPAddressChecked ipAddressChecked2(ip3);

    
    ipAddress1.print();
    cout << endl;
    ipAddressChecked1.print();
    cout << endl;
    ipAddressChecked2.print();
    cout << endl;

    return 0;
}
