#include<iostream>
#include<string>

class Phu_nu
{
public: 
    std::string ho_ten;
    Phu_nu() 
    {
        
    }
    
    Phu_nu(const std::string &ht, bool z = true) //&ht là tham chiếu (Nếu không có dấu "&" thì tham số ht sẽ thực hiện sao chép dữ liệu từ "Maria_Ozawa" vào tham số ht, còn nếu có dấu "&" thì sẽ truyền thẳng string gốc Maria_Ozawa vào mà không cần thông qua sao chép dữ liệu) 
    // Trong thực tế sẽ viết như thế này
        : ho_ten(ht), con_zin(z)
    {
        // ho_ten = ht;
        // con_zin = z;
    }
    ~Phu_nu() // Hàm hủy được gọi khi chúng ta cần hủy đối tượng đấy đi 
    {
        std::cout << "Chia tay" << ho_ten << std::endl;
    }
    void trang_diem() {

    }

    std::string choi_nhac_cu(std::string nhac_cu) 
    {
        return ""; 
    }
private: 
    bool con_zin;
};

class Dan_ong 
{

};
int main() {
    // Phu_nu thao; 
    Phu_nu *maria_ozawa = new Phu_nu("Maria Ozawa"); 
    maria_ozawa -> choi_nhac_cu("Ken")
    delete maria_ozawa; // Xóa object sẽ đi kèm với hàm hủy
    Dan_ong *Bill = new Dan_ong;
    return 0;
}
