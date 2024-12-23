#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

class PersonName {

private:
	string Name;
	string Surname;
	string Otchestvo;

public:
	PersonName(string name = "", string surname = "", string otchestvo = "") {//�����������
		Name = name;
		Surname = surname;
		Otchestvo = otchestvo;
	}

	string GetName() const {//����� �����, ������� � �������� �� �����������
		return Name;
	}
	string GetSurname() const {
		return Surname;
	}
	string GetOtchestvo() const {
		return Otchestvo;
	}

	string Print() const {//����� ��������

		string result;
		if (!Surname.empty()) {
			result += Surname;
		}
		if (!Name.empty()) {
			if (!result.empty()) result += " ";
			result += Name;
		}
		if (!Otchestvo.empty()) {
			if (!result.empty()) result += " ";
			result += Otchestvo;
		}

		return result;
	}
};

class Person {
private:
    string Name;
    string Surname;
    string Otchestvo;
    string svyazka;
    int Height;
    Person* Father;

public:
    Person(string name = "", string surname = "", string otchestvo = "", int height = 0, Person* father = nullptr) {//�����������
        Name = name;
        Surname = surname;
        Otchestvo = otchestvo;
        Height = height;
        svyazka = "� ������";
        Father = father;
    }

    string GetName() const {//����� �����, �������, �������� � ����� �� �����������
        return Name;
    }
    string GetSurname() const {
        return Surname;
    }
    string GetOtchestvo() const {
        return Otchestvo;
    }
    int GetHeight() const {
        return Height;
    }

    string Print() {//����� ��������
        string result;
        string strHeight = to_string(Height);

        // �������� � ������������� ������ �� ����
        if (Surname.empty() and Father != nullptr and !Father->GetSurname().empty()) {//���������� ������� � ��������
            Surname = Father->GetSurname();
        }
        if (Otchestvo.empty() and Father != nullptr and !Father->GetName().empty()) {
            Otchestvo = Father->GetName() + "����";
        }

        // ������������ ������
        if (!Surname.empty()) {
            result += Surname;
        }
        if (!Name.empty()) {
            if (!result.empty()) result += " ";
            result += Name;
        }
        if (!Otchestvo.empty()) {
            if (!result.empty()) result += " ";
            result += Otchestvo;
        }
        if (!svyazka.empty()) {
            if (!result.empty()) result += " ";
            result += svyazka;
        }
        if ((!strHeight.empty()) and (strHeight != "0")) {
            if (!result.empty()) result += " ";
            result += strHeight;
        }

        return result;
    }

    void SetFather(Person* father) {//���������� ����
        Father = father;
    }
};

class City {
private:
    string Name;
    vector<pair<City*, int>>Way;//������ ��� �����

public:
    City(string name) {//�����������
        Name = name;
    }

    void SetWay(City* ways, int value) {//���������� ����
        Way.emplace_back(ways, value);
    }

    string Print() {//�����
        string result = "�����: " + Name + '\n';
        if (!Way.empty()) {
            for (const auto& way : Way) {
                result += way.first->Name + " ���������: " + to_string(way.second) + '\n';
            }
        }
        else {
            result += "����� �� ��������.";
        }
        return result;
    }
};

class PersonName4 {

private:
    string Name;
    string Surname;
    string Otchestvo;

public:
    PersonName4(string name = "", string surname = "", string otchestvo = "") {//�����������
        Name = name;
        Surname = surname;
        Otchestvo = otchestvo;
    }

    string GetName() const {//����� �����, ������� � �������� �� �����������
        return Name;
    }
    string GetSurname() const {
        return Surname;
    }
    string GetOtchestvo() const {
        return Otchestvo;
    }

    string Print() const {//����� ��������

        string result;
        if (!Surname.empty()) {
            result += Surname;
        }
        if (!Name.empty()) {
            if (!result.empty()) result += " ";
            result += Name;
        }
        if (!Otchestvo.empty()) {
            if (!result.empty()) result += " ";
            result += Otchestvo;
        }

        return result;
    }
};

class Person4 {
private:
    string Name;
    string Surname;
    string Otchestvo;
    string svyazka;
    int Height;
    Person4* Father;

public:
    Person4(string name = "", string surname = "", string otchestvo = "", int height = 0, Person4* father = nullptr) {//�����������
        Name = name;
        Surname = surname;
        Otchestvo = otchestvo;
        Height = height;
        svyazka = "� ������";
        Father = father;
    }

    string GetName() const {//����� �����, ������� � ��������, � ����� �� �����������
        return Name;
    }
    string GetSurname() const {
        return Surname;
    }
    string GetOtchestvo() const {
        return Otchestvo;
    }
    int GetHeight() const {
        return Height;
    }

    string Print() {//����� ��������
        string result;
        string strHeight = to_string(Height);

        // �������� � ������������� ������ �� ����
        if (Surname.empty() and Father != nullptr and !Father->GetSurname().empty()) {//���������� ������� � ��������
            Surname = Father->GetSurname();
        }
        if (Otchestvo.empty() and Father != nullptr and !Father->GetName().empty()) {
            Otchestvo = Father->GetName() + "����";
        }

        // ������������ ������
        if (!Surname.empty()) {
            result += Surname;
        }
        if (!Name.empty()) {
            if (!result.empty()) result += " ";
            result += Name;
        }
        if (!Otchestvo.empty()) {
            if (!result.empty()) result += " ";
            result += Otchestvo;
        }
        if (!svyazka.empty()) {
            if (!result.empty()) result += " ";
            result += svyazka;
        }
        if ((!strHeight.empty()) and (strHeight != "0")) {
            if (!result.empty()) result += " ";
            result += strHeight;
        }

        return result;
    }

    void SetFather(Person4* father) {//���������� ����
        Father = father;
    }
};

class Cat {
private:
    string Name; // ��� ����

public:
    // �����������, ����������� ��� ����
    Cat(string name) {
        Name = name;
    }

    // �������������� ���� � ������
    string ToString() const {
        return "���: " + Name;
    }

    // ����� �������� (������������)
    void Meow() const {
        cout << Name << ": ���!" << endl;
    }

    // ����� �������� N ���
    void Meow(int n) const {
        if (n <= 0) {
            cout << Name << ": ������..." << endl;
            return;
        }

        cout << Name << ": ";
        for (int i = 0; i < n; ++i) {
            cout << "���";
            if (i < n - 1) {
                cout << "-";
            }
        }
        cout << "!" << endl;
    }
};

int main() {

    int choise;
    setlocale(LC_ALL, "Russian");
    wcout.imbue(std::locale("ru_RU.UTF-8"));

    cout << "������� ����� ������� (1-5): ";
    while (!(cin >> choise)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "������ �����. ";
    }

    if (choise == 1) {
        PersonName Cleopatra("���������");
        PersonName Pushkin("���������", "������", "���������");
        PersonName Mayakovskiy("��������", "����������");

        cout << Cleopatra.Print();
        cout << '\n';
        cout << Pushkin.Print();
        cout << '\n';
        cout << Mayakovskiy.Print();
        return 0;
    }
    if (choise == 2) {
        Person Cleopatra("���������", "", "", 152);
        Person Pushkin("���������", "������", "���������", 167);
        Person Mayakovskiy("��������", "����������", "", 189);
        Person Ivan("����", "�����", "", 177);
        Person Petr("����", "�����", "", 181, &Ivan);
        Person Boris("�����", "", "", 184, &Petr);

        // ����� ����������
        cout << Cleopatra.Print() << endl;
        cout << Pushkin.Print() << endl;
        cout << Mayakovskiy.Print() << endl;
        cout << Ivan.Print() << endl;
        cout << Petr.Print() << endl;
        cout << Boris.Print() << endl;
        return 0;
    }
    if (choise == 3) {
        string ChangeCity;
        char changeCity;
        cin >> changeCity;
        ChangeCity = toupper(changeCity);

        City A("A");
        City B("B");
        City C("C");
        City D("D");
        City E("E");
        City F("F");

        A.SetWay(&B, 5);
        A.SetWay(&D, 6);
        A.SetWay(&F, 1);
        B.SetWay(&C, 3);
        B.SetWay(&A, 5);
        C.SetWay(&B, 3);
        C.SetWay(&D, 4);
        D.SetWay(&C, 4);
        D.SetWay(&A, 6);
        D.SetWay(&E, 2);
        E.SetWay(&F, 2);
        F.SetWay(&E, 2);
        F.SetWay(&B, 1);

        cout << "������� �������� ������: ";

        if (ChangeCity == "A") {
            cout << A.Print();
            return 0;
        }
        if (ChangeCity == "B") {
            cout << B.Print();
            return 0;
        }
        if (ChangeCity == "C") {
            cout << C.Print();
            return 0;
        }
        if (ChangeCity == "D") {
            cout << D.Print();
            return 0;
        }
        if (ChangeCity == "E") {
            cout << E.Print();
            return 0;
        }
        if (ChangeCity == "F") {
            cout << F.Print();
            return 0;
        }
        else {
            cout << "������ � ����� ��������� ���.";
            return 0;
        }
        return 0;
    }
    if (choise == 4) {
        PersonName4 Cleopatra("���������");
        PersonName4 Pushkin("���������", "������", "���������");
        PersonName4 Mayakovskiy("��������", "����������");

        cout << Cleopatra.Print();
        cout << '\n';
        cout << Pushkin.Print();
        cout << '\n';
        cout << Mayakovskiy.Print() << endl;

        Person4 Lev("���", "", "", 170);
        Person4 SerGay("������", "������", "", 168, &Lev);
        Person4 Alex("���������", "", "", 167, &SerGay);

        cout << Lev.Print() << endl;
        cout << SerGay.Print() << endl;
        cout << Alex.Print() << endl;
        return 0;
    }
    if (choise == 5) {
        Cat Barsik("������");
        // ������� ��������� ������������� ����
        cout << Barsik.ToString() << endl;
        // ������ ������� ���� ���
        Barsik.Meow();
        // ������ ������� ��� ����
        Barsik.Meow(3);
        return 0;
    }
    else {
        cout << "������� � ����� ������� ���.";
        return 0;
    }

    return 0;
}