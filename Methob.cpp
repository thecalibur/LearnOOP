#include<iostream>
#include<string>

class Phu_nu
{
public: 
    std::string ho_ten;
    void trang_diem() {

    }

    std::string choi_nhac_cu(std::string nhac_cu) //std::nhac_cu nghĩa là cho tham số truyền vào
    {
        // Các hàm khác đều có kiểu trả về là return trừ hàm void
        return ""; // Ở đây cho kiểu trả về là rỗng
    }
private: 
    bool con_zin;
};

class Dan_ong 
{

};
int main() {
    Phu_nu thao; 
    Phu_nu *maria_ozawa = new Phu_nu; 
    maria_ozawa -> ho_ten = "Maria Ozawa";
    maria_ozawa -> choi_nhac_cu("Ken")
    Dan_ong *Bill = new Dan_ong;
    return 0;
}
