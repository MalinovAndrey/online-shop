#include <sstream> // ��� ������ � ������� ostringstream
#include <String>
#include <ctime> // ��� ���� time_t �������������

// ����� ��������� 
class product {
public:
	// ����������� ��-���������
	product() {}
	// �������������������
	product(
		std::string _name, 
		std::string _poductBy, 
		std::string _produser, 
		double _price, 
		int _unt) {
		name = _name; // ������������ ������ 
		poductBy = _poductBy; // ������ ������������
		produser = _produser; // ������������� 
		price = _price < 0 ? 0 : _price; // ���������, �� ����� ���� ������������� 
		unt = units(_unt); // ��� ������� �������� ������ ����� 
	}

	~product() {	
	}

	bool equlas() {
		
	}

	// �������� ��������� 
	void changePrice(double _price) {
		price = _price;
	}

	double getPrice() {
		return price;
	}

private: 
	std::string name,
		poductBy,
		produser;
	double price;
	units unt;
};

enum units {
	liters = 0, // ����� 
	kilos = 1, // ����������
	piece = 2 // ����� 
};

