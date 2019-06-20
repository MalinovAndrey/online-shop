#include <sstream> // ��� ������ � ������� ostringstream
#include <String>
#include <ctime> // ��� ���� time_t �������������

// ����� �������� ���������� � ������������
class userInfo {
public:
	// ����������� 
	userInfo(std::string _name, std::string _last_name, std::time_t _regDate, std::string _phone) {
		name = _name;
		last_name = _last_name;
		regDate = _regDate;
		phone = _phone;
		_rull = UFO; // �� ������� ������������ �� ���������, ��������������� � �������� 
	}
	// ���������� 
	~userInfo() {
		// ~Memory clear
	}

	// ���������� � ������������ 
	std::string getInfo() {
		std::ostringstream full_name;
		full_name << this->last_name 
			<< " "<< this->name 
			<< " ��������������� � " << regDate;
		return full_name.str();
	}
	// ��������� ������������ ����, ����� ������������ proxy
	void setRull(int rullLvl) {
		_rull = rull(rullLvl);
	}

	// ������������� �� ������������� � ������������� ������������� ������� userInfo
	void setMetaUserInfo(std::string login, std::string _pass) {
		this->logIn = login;
		this->pass = decrypt(_pass);
	}

	bool checkLogPass(std::string login, std::string _pass) {
		return this->logIn == login && this->pass == decrypt(_pass);
	}

private:
	// �������� ���������� �������� ��������� �����
	std::string decrypt(std::string pass) {
		return pass;
	}

	std::string 
		name,
		last_name,
		logIn,
		pass, // ������ ������ ����� ������ � ������������� ����
		phone; 
	std::time_t regDate;
	rull _rull;
};

enum rull { 
	ADMIN = -1, // �������������
	BOSS = -2, // ����
	MANAGER = 1,  // �������� 
	CLIENT = 2, // ������ 
	UFO = 0 // �� ���������� 
}; 



