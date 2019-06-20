#include <String>
#include "product.h"

// Товар монитор
class prodMonitor : public product {
public:
	prodMonitor(
		std::string _name,
		std::string _poductBy,
		std::string _produser,
		double _price,
		int _unt,
		int _diagonal,
		int _matrix
	) : product(
		_name,
		_poductBy,
		_produser,
		_price,
		(int)2) {
	} {
		diagonal = _diagonal;
		matrix = matrixType(_matrix);
	}

	
	int getDiagonal() {
		return diagonal;
	}

	// Сравнивает два HDD
	bool equlas(prodMonitor monitor) {
		return monitor.getDiagonal() < diagonal && monitor.getPrice() > getPrice();
	}

private: 
	int diagonal;
	matrixType matrix;
};

enum matrixType { TN  = 0, IPS = 1, VA = 2};



