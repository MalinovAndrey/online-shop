#include <String>
#include "product.h"

// Товар жесткий диск
class prodHDD : public product {
public:
	prodHDD(
		std::string _name,
		std::string _poductBy,
		std::string _produser,
		double _price,
		int _unt
	) : product(
			_name, 
			_poductBy, 
			_produser, 
			_price, 
			(int)2) {
	} {
		avdST = 0;
		spindleSpeed = 0;
		size = 0;
	}

	void setAvdST(int _avdST) {
		avdST = _avdST;
	}

	void setSpindleSpeed(int _spindleSpeed) {
		spindleSpeed = _spindleSpeed;
	}

	void setSize(int _size) {
		size = _size;
	}

	int getAvdST() {
		return avdST;
	}

	int getSpindleSpeed() {
		return  spindleSpeed;
	}

	int getSize() {
		return size;
	}

	// Сравнивает два HDD
	bool equlas(prodHDD _prodHDD) {
		return _prodHDD.getSize < size 
			&& _prodHDD.getSpindleSpeed < spindleSpeed
			&& _prodHDD.getPrice > getPrice();
	}

private:
	std::string marker; // Маркировка/место на складе 
	int avdST, // Среднее время доступа (Average Seek Time)
		spindleSpeed, // Скорость вращения
		size; // Объём.Измеряется в гигабайтах(Gb).
};

