#include<iostream>
#include<string>

class Phu_nu
{
public: 
    Phu_nu() 
    {
        
    }
    
    Phu_nu(const std::string &ht, int t ,bool z) 
        : ho_ten(ht), tuoi(t) ,con_zin(z)
    {

    }
    ~Phu_nu()
    {
        std::cout << "Chia tay" << ho_ten << std::endl;
    }
    void trang_diem() {

    }

    std::string choi_nhac_cu(std::string nhac_cu) 
    {
        return ""; 
    }

    // Khi người khác muốn thay đổi hay cập nhật dữ liệu thì LTV sẽ cung cấp cho họ 1 cơ chế như sau
    void va_zin () 
    { // Có thể hiểu phương thức va_zin là phương thức dùng để khôi phục biến zin (z) có thể từ false sang true
        if(tuoi < 25)
        {
                    con_zin = true;

        }
        // con_zin = true;

    }
    void show_hang() // Ta phải cung cấp thêm 1 cơ chế nữa để có thể đọc được biến con_zin ở trên
    {
        std:: cout << ho_ten << " " << (con_zin ? "Con zin nha!" : "Mat zin roi nha!") << std::endl; // Phần (con_zin ? "Con zin nha!" : "Mat zin roi nha!") này nghĩa là trạng thái của con_zin
    } 

private: 
    bool con_zin;
    std::string ho_ten;
    int tuoi;
};

class Dan_ong 
{

};
int main() {

    Phu_nu *maria_ozawa = new Phu_nu("Maria Ozawa", 22 , false); 
    maria_ozawa -> choi_nhac_cu("Ken")


    maria_ozawa -> va_zin(); //Gọi hàm va_zin
    maria_ozawa -> show_hang(); //Gọi hàm show_hang để đọc va_zin
    // delete maria_ozawa; 
    Dan_ong *Bill = new Dan_ong;
    return 0;
}

