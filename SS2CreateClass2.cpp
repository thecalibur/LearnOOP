#include<iostream>
#include<string>

class Phu_nu
{
public: //Dữ liệu được phép truy cập từ bên ngoài
    std::string ho_ten;
private: //Bên ngoài không thể can thiệp trực tiếp và dữ liệu bên trong class
    bool con_zin;
};

class Dan_ong 
{

};

int main() {
    Phu_nu thao; // Cấp phát tỉnh
    Phu_nu *maria_ozawa = new Phu_nu; // Cấp phát động
    maria_ozawa -> ho_ten = "Maria Ozawa";
    // maria_ozawa -> con_zin = true; Ở đây không truy cập trực tiếp vào private
    Dan_ong *Bill = new Dan_ong;
    return 0;
}
