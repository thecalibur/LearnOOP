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

    virtual std::string choi_nhac_cu(std::string nhac_cu) //virtual sẽ giúp chúng ta in ra đúng hành vi của object đó
    {
        return "AAAAAAAAAAA"; 
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

protected:
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
        // Định nghĩa lại hàm chơi nhạc cụ
        std::string choi_nhac_cu(std::string nhac_cu) 
        {
            return "OOOOOOOOOOO"; 
        }

        void noi_tro() 
        {
            std::cout << ho_ten << " "
                << "dang lam noi tro" << std::endl; 
        }

};

class Gai_hu : public Phu_nu 
{
    public:
        Gai_hu(const std::string &ht, int t ,bool z = true) 
            : Phu_nu(ht, t, z)
        {

        }

        std::string choi_nhac_cu(std::string nhac_cu) 
        {
            return "UUUUUUUUUU"; 
        }

        void di_bar() 
        {

        }

};

class Gai_di_tour : public Gai_hu 
{

}


class Dan_ong 
{

};
int main() {

    // Gai_ngoan *maria_ozawa = new Gai_ngoan("Maria Ozawa", 23, false);
    Phu_nu *maria_ozawa = new Gai_hu("Maria Ozawa", 23, false); // Ở đây chúng ta có thể thấy ví dụ là con trỏ kiểu Phu_nu, nhưng đối tượng lại là Gai_hu (tức là new object là Gai_hu và ép nó về kiểu Phu_nu nên nó sẽ in ra "AAAAAAAA"(Nếu xài virtual thì sẽ in ra "UUUUUUUUU"), tuy nhiên nếu làm ngược lại thì không được)
    
    
    Gai_hu *maria_ozawa = new Gai_hu("Maria Ozawa", 23, false); 
    std::cout << maria_ozawa -> choi_nhac_cu("Ken") << std::endl; // Vì phương thức choi_nhac_cu trả về kiểu string nên cần phải dùng cout xuất ra
    



    return 0;
}

