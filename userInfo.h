#include <sstream> // Для работы с потоком ostringstream
#include <String>
#include <ctime> // Для типа time_t универсальный

// Класс родитель Информация о пользователе
class userInfo {
public:
	// Конструктор 
	userInfo(std::string _name, std::string _last_name, std::time_t _regDate, std::string _phone) {
		name = _name;
		last_name = _last_name;
		regDate = _regDate;
		phone = _phone;
		_rull = UFO; // По дефолту пользователь не определен, переопределится в родителе 
	}
	// Деструктор 
	~userInfo() {
		// ~Memory clear
	}

	// Информация о пользователе 
	std::string getInfo() {
		std::ostringstream full_name;
		full_name << this->last_name 
			<< " "<< this->name 
			<< " Зарегестрирован с " << regDate;
		return full_name.str();
	}
	// Установка пользователю прав, можно использовать proxy
	void setRull(int rullLvl) {
		_rull = rull(rullLvl);
	}

	// Инкапсулирует от пользователей и программистов использование объекта userInfo
	void setMetaUserInfo(std::string login, std::string _pass) {
		this->logIn = login;
		this->pass = decrypt(_pass);
	}

	bool checkLogPass(std::string login, std::string _pass) {
		return this->logIn == login && this->pass == decrypt(_pass);
	}

private:
	// Вариация реализации хранения открытого ключа
	std::string decrypt(std::string pass) {
		return pass;
	}

	std::string 
		name,
		last_name,
		logIn,
		pass, // Вообще говоря лучше хрнить в зашифрованном виде
		phone; 
	std::time_t regDate;
	rull _rull;
};

enum rull { 
	ADMIN = -1, // Администратор
	BOSS = -2, // Босс
	MANAGER = 1,  // Менеджер 
	CLIENT = 2, // Клиент 
	UFO = 0 // Не определено 
}; 



