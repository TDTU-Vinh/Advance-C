#include <iostream>
#include <string>
using namespace std;

class SinhVien {
private:
protected:
public:
    string name;
    string mssv;
    int age;
    double gpa;
    string getName(); // Hàm trả về tên sinh viên
    void display();   // Hàm hiển thị thông tin sinh viên
};

string SinhVien::getName() {
    return name;
}

void SinhVien::display() {
    cout << "Tên: " << name << endl;
    cout << "MSSV: " << mssv << endl;
}

int main() {
    SinhVien sv;
    sv.name = "Vinh";
    sv.mssv = "42001288";

    // Hiển thị tên từ hàm getName()
    cout << "Tên từ getName(): " << sv.getName() << endl;

    // Hiển thị thông tin bằng hàm display()
    sv.display();

    return 0;
}
