#include<iostream>
#include<string>

class Phu_nu
{
public: 
    std::string ho_ten;
    Phu_nu() // Hàm khởi tạo tường minh. Tên hàm sẽ trùng với tên class -> có thể định nghĩa lại và không có kiểu trả về (return)
    {
        //Nếu gọi new Phu_nu thì nó sẽ gọi hàm này
    }
    // Có thể thêm tham số cho các hàm, có thể định nghĩa thêm các phương thức constractor khác
    Phu_nu(std::string ht, bool z = true) //bool z = true là tham số mặc định, nếu truyền tham số mặc định vào hàm rồi thì hàm main không cần truyền vào nữa
    {
        // Nếu truyền tham số đi kèm new Phu_nu thì nó sẽ gọi hàm này và sẽ khởi tạo dữ liệu cho object đó
        ho_ten = ht;
        con_zin = z;
    }
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
    Phu_nu *maria_ozawa = new Phu_nu("Maria Ozawa"); 
    // maria_ozawa -> ho_ten = "Maria Ozawa";
    maria_ozawa -> choi_nhac_cu("Ken")
    Dan_ong *Bill = new Dan_ong;
    return 0;
}
