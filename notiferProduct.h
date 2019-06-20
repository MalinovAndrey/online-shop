#include "product.h"
#include <String>

// ��������� �������� 
class notiferProduct {
public:

	notiferProduct(product i_product, int _quantity) {
		_product = i_product;
		quantity = _quantity;
		total = i_product.getPrice() * _quantity;
	}
	// �������� ����� setQuantity
	double getTotal() {
		updateTotal();
		return total;
	}
	
	// ��������� ���������� ������
	void setQuantity(int _quantity) {
		quantity = _quantity;
		total = _product.getPrice() * _quantity;
	}

private:
	// ��������� ��������� ������ 
	void updateTotal() {
		total = _product.getPrice() * quantity;
	}

	double total; // ���� 
	int quantity; // ���-��
	product _product; // �������
};

