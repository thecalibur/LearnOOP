#include<iostream>
#include<string>

class Phu_nu
{
public: 
    Phu_nu() 
    {
        
    }
    
    Phu_nu(const std::string &ht, int t ,bool z = true) 
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


    void va_zin () 
    { 
        if(tuoi < 25)
        {
            con_zin = true;

        }
        // con_zin = true;

    }
    void show_hang() 
    {
        std:: cout << ho_ten << " " << (con_zin ? "Con zin nha!" : "Mat zin roi nha!") << std::endl; 
    } 

private: 
    bool con_zin;
    std::string ho_ten;
    int tuoi;
};

// Bây giờ chúng ta sẽ tạo một số loại phụ nữ khác nhau trong cuộc sống
// Chúng ta thấy dù là gái ngoan hay gái hư thì họ vẫn là phụ nữ và có những hành vi chung (trong lập trình gọi là kế thừa)
class Gai_ngoan : public Phu_nu // Chỉ ra class Phu_nu mà Gai_ngoan muốn kế thừa và phải đề public
{
     // Những hàm ngầm định có sẵn thì nó sẽ không kế thừa mà phải định nghĩa lại vì hàm khởi tạo Phu_nu trùng tên với class Phu_nu
    public:
        Gai_ngoan(const std::string &ht, int t ,bool z = true) 
            : Phu_nu(ht, t, z)
        {

        }
        void noi_tro() // Ở đây có thể hiểu là tạo thêm hành vi hay là nét đặc trưng của gái ngoan
        {
            // Chúng ta có thể ngầm hiểu phụ nữ không phải ai cũng biết nội trợ nên sẽ không định nghĩa phương thức nội trợ ở hàm Phu_nu

        }

};

class Gai_hu : public Phu_nu // Chỉ ra class Phu_nu mà Gai_hu muốn kế thừa
{
    public:
        Gai_hu(const std::string &ht, int t ,bool z = true) 
            : Phu_nu(ht, t, z)
        {

        }
        void di_bar() 
        {

        }

}


class Dan_ong 
{

};
int main() {

    // Phu_nu *maria_ozawa = new Phu_nu("Maria Ozawa", 22 , false); 
    Gai_ngoan *maria_ozawa = new Gai_ngoan("Maria Ozawa", 23, false);
    maria_ozawa -> choi_nhac_cu("Ken")
    maria_ozawa -> va_zin(); 
    maria_ozawa -> show_hang(); 
    maria_ozawa -> noi_tro();



    Dan_ong *Bill = new Dan_ong;
    return 0;
}

