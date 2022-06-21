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

protected: // protected đảm bảo không cho truy xuất dữ liệu từ bên ngoài (main) nhưng vẫn có thể truy xuất dữ liệu đối với các class dẫn xuất
    bool con_zin;
    std::string ho_ten;
    int tuoi;
};


class Gai_ngoan : public Phu_nu 
{

    public:
        Gai_ngoan(const std::string &ht, int t ,bool z = true) 
            : Phu_nu(ht, t, z)
        {

        }
        void noi_tro() 
        {
            std::cout << ho_ten << " "
                << "dang lam noi tro" << std::endl; // Vì ho_ten ta đã đặt là private nên không thể truy xuất được, vì vậy nên phải đổi từ private -> protected
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
    maria_ozawa -> choi_nhac_cu("Ken");
    maria_ozawa -> va_zin(); 
    maria_ozawa -> show_hang(); 
    maria_ozawa -> noi_tro();



    Dan_ong *Bill = new Dan_ong;
    return 0;
}

