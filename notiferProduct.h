#include "product.h"
#include <String>

// Декоратор продукта 
class notiferProduct {
public:

	notiferProduct(product i_product, int _quantity) {
		_product = i_product;
		quantity = _quantity;
		total = i_product.getPrice() * _quantity;
	}
	// Вызывать после setQuantity
	double getTotal() {
		updateTotal();
		return total;
	}
	
	// Изменение количества товара
	void setQuantity(int _quantity) {
		quantity = _quantity;
		total = _product.getPrice() * _quantity;
	}

private:
	// Обновляет стоимость набора 
	void updateTotal() {
		total = _product.getPrice() * quantity;
	}

	double total; // Итог 
	int quantity; // Кол-во
	product _product; // Продукт
};

