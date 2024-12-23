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
	PersonName(string name = "", string surname = "", string otchestvo = "") {//конструктор
		Name = name;
		Surname = surname;
		Otchestvo = otchestvo;
	}

	string GetName() const {//Вывод имени, фамилии и отчества по отдельности
		return Name;
	}
	string GetSurname() const {
		return Surname;
	}
	string GetOtchestvo() const {
		return Otchestvo;
	}

	string Print() const {//Вывод Человека

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
    Person(string name = "", string surname = "", string otchestvo = "", int height = 0, Person* father = nullptr) {//конструктор
        Name = name;
        Surname = surname;
        Otchestvo = otchestvo;
        Height = height;
        svyazka = "с ростом";
        Father = father;
    }

    string GetName() const {//Вывод имени, фамилии, отчества и роста по отдельности
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

    string Print() {//вывод человека
        string result;
        string strHeight = to_string(Height);

        // Проверка и заимствование данных от отца
        if (Surname.empty() and Father != nullptr and !Father->GetSurname().empty()) {//Добавление фамилии и отчества
            Surname = Father->GetSurname();
        }
        if (Otchestvo.empty() and Father != nullptr and !Father->GetName().empty()) {
            Otchestvo = Father->GetName() + "ович";
        }

        // Формирование строки
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

    void SetFather(Person* father) {//Добавление отца
        Father = father;
    }
};

class City {
private:
    string Name;
    vector<pair<City*, int>>Way;//вектор для путей

public:
    City(string name) {//конструктор
        Name = name;
    }

    void SetWay(City* ways, int value) {//Добавление пути
        Way.emplace_back(ways, value);
    }

    string Print() {//Вывод
        string result = "Город: " + Name + '\n';
        if (!Way.empty()) {
            for (const auto& way : Way) {
                result += way.first->Name + " стоимость: " + to_string(way.second) + '\n';
            }
        }
        else {
            result += "Город не соединен.";
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
    PersonName4(string name = "", string surname = "", string otchestvo = "") {//конструктор
        Name = name;
        Surname = surname;
        Otchestvo = otchestvo;
    }

    string GetName() const {//Вывод имени, фамилии и отчества по отдельности
        return Name;
    }
    string GetSurname() const {
        return Surname;
    }
    string GetOtchestvo() const {
        return Otchestvo;
    }

    string Print() const {//Вывод человека

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
    Person4(string name = "", string surname = "", string otchestvo = "", int height = 0, Person4* father = nullptr) {//конструктор
        Name = name;
        Surname = surname;
        Otchestvo = otchestvo;
        Height = height;
        svyazka = "с ростом";
        Father = father;
    }

    string GetName() const {//Вывод имени, фамилии и отчества, и роста по отдельности
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

    string Print() {//Вывод человека
        string result;
        string strHeight = to_string(Height);

        // Проверка и заимствование данных от отца
        if (Surname.empty() and Father != nullptr and !Father->GetSurname().empty()) {//добавление фамилии и отчества
            Surname = Father->GetSurname();
        }
        if (Otchestvo.empty() and Father != nullptr and !Father->GetName().empty()) {
            Otchestvo = Father->GetName() + "ович";
        }

        // Формирование строки
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

    void SetFather(Person4* father) {//Добавление отца
        Father = father;
    }
};

class Cat {
private:
    string Name; // Имя кота

public:
    // Конструктор, принимающий имя кота
    Cat(string name) {
        Name = name;
    }

    // Преобразование кота в строку
    string ToString() const {
        return "кот: " + Name;
    }

    // Метод мяуканья (однократного)
    void Meow() const {
        cout << Name << ": мяу!" << endl;
    }

    // Метод мяуканья N раз
    void Meow(int n) const {
        if (n <= 0) {
            cout << Name << ": молчит..." << endl;
            return;
        }

        cout << Name << ": ";
        for (int i = 0; i < n; ++i) {
            cout << "мяу";
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

    cout << "Введите номер задания (1-5): ";
    while (!(cin >> choise)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Ошибка Ввода. ";
    }

    if (choise == 1) {
        PersonName Cleopatra("Клеопатра");
        PersonName Pushkin("Александр", "Пушкин", "Сергеевич");
        PersonName Mayakovskiy("Владимир", "Маяковский");

        cout << Cleopatra.Print();
        cout << '\n';
        cout << Pushkin.Print();
        cout << '\n';
        cout << Mayakovskiy.Print();
        return 0;
    }
    if (choise == 2) {
        Person Cleopatra("Клеопатра", "", "", 152);
        Person Pushkin("Александр", "Пушкин", "Сергеевич", 167);
        Person Mayakovskiy("Владимир", "Маяковский", "", 189);
        Person Ivan("Иван", "Чудов", "", 177);
        Person Petr("Петр", "Чудов", "", 181, &Ivan);
        Person Boris("Борис", "", "", 184, &Petr);

        // Вывод информации
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

        cout << "Введите название города: ";

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
            cout << "Города с таким названием нет.";
            return 0;
        }
        return 0;
    }
    if (choise == 4) {
        PersonName4 Cleopatra("Клеопатра");
        PersonName4 Pushkin("Александр", "Пушкин", "Сергеевич");
        PersonName4 Mayakovskiy("Владимир", "Маяковский");

        cout << Cleopatra.Print();
        cout << '\n';
        cout << Pushkin.Print();
        cout << '\n';
        cout << Mayakovskiy.Print() << endl;

        Person4 Lev("Лев", "", "", 170);
        Person4 SerGay("Сергей", "Пушкин", "", 168, &Lev);
        Person4 Alex("Александр", "", "", 167, &SerGay);

        cout << Lev.Print() << endl;
        cout << SerGay.Print() << endl;
        cout << Alex.Print() << endl;
        return 0;
    }
    if (choise == 5) {
        Cat Barsik("Барсик");
        // Выводим текстовое представление кота
        cout << Barsik.ToString() << endl;
        // Барсик мяукает один раз
        Barsik.Meow();
        // Барсик мяукает три раза
        Barsik.Meow(3);
        return 0;
    }
    else {
        cout << "Задания с таким номером нет.";
        return 0;
    }

    return 0;
}