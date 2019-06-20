#include <sstream> // Для работы с потоком ostringstream
#include <String>
#include <ctime> // Для типа time_t универсальный

// Класс продуктов 
class product {
public:
	// Конструктор по-умолчанию
	product() {}
	// Параметризированный
	product(
		std::string _name, 
		std::string _poductBy, 
		std::string _produser, 
		double _price, 
		int _unt) {
		name = _name; // Наименование товара 
		poductBy = _poductBy; // Страна производства
		produser = _produser; // Производитель 
		price = _price < 0 ? 0 : _price; // Стоимость, не может быть отрицательной 
		unt = units(_unt); // Тип единицы хранения товара число 
	}

	~product() {	
	}

	bool equlas() {
		
	}

	// Изменить стоимость 
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
	liters = 0, // Литры 
	kilos = 1, // Килограммы
	piece = 2 // Штуки 
};

