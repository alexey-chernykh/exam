#include"Events.h";

int main() {
	Events mass;
	int d = 0;
	int m = 0;
	int y = 0;
	int s = 0;
	int mins = 0;
	int h = 0;
	int i1 = 0;
	string s1, s2, s3, s4;
	int menu = 0;
	do {
		cout << "================\n";
		cout << "1. create birthday\n";
		cout << "2. create meeting\n";
		cout << "3. create custom\n";
		cout << "4. show all\n";
		cout << "5. save in file\n";
		cout << "6. search by type of event\n";
		cin >> menu;
		if (menu > 6) {
			cout<<("error: please, enter right number on navigation menu\n");
		}
		else if (menu < 6 && menu != 0) {
			switch (menu) {
			case 1:
				cout << "enter date(dd-mm-yyyy)\n";
				cin >> d;
				cin >> m;
				cin >> y;
				if(d>31 || d<=0){
					cout << "error: please, enter right day\n";
					break;
				}
				if (m > 12 || m <= 0) {
					cout << "error: please, enter right month\n";
					break;
				}
				if (y <= 0) {
					cout << "error: please, enter right year\n";
					break;
				}
				cout << "enter time\n";
				cin >> s;
				cin >> mins;
				cin >> h;
				if (s > 59 || s < 0) {
					cout << "error: please, enter right seconds\n";
					break;
				}
				if (mins > 59 || mins < 0) {
					cout << "error: please, enter right minutes\n";
					break;
				}
				if (h >= 24 || h < 0) {
					cout << "error: please, enter right hours\n";
					break;
				}
				cout << "enter hero\n";
				cin.get();
				getline(cin, s1);
				cout << "enter place\n";
				getline(cin, s2);
				cout << "enter age\n";
				cin >> i1;
				mass.add(new BirthDay(Date(d, m, y), Time_(s, mins, h), s1, s2, i1));
				break;
			case 2:
				cout << "enter date(dd-mm-yyyy)\n";
				cin >> d;
				cin >> m;
				cin >> y;
				if (d > 31 || d <= 0) {
					cout << "error: please, enter right day\n";
					break;
				}
				if (m > 12 || m <= 0) {
					cout << "error: please, enter right month\n";
					break;
				}
				if (y <= 0) {
					cout << "error: please, enter right year\n";
					break;
				}
				cout << "enter time\n";
				cin >> s;
				cin >> mins;
				cin >> h;
				if (s > 59 || s < 0) {
					cout << "error: please, enter right seconds\n";
					break;
				}
				if (mins > 59 || mins < 0) {
					cout << "error: please, enter right minutes\n";
					break;
				}
				if (h >= 24 || h < 0) {
					cout << "error: please, enter right hours\n";
					break;
				}
				cout << "enter person\n";
				cin.get();
				getline(cin, s1);
				cout << "enter place\n";
				getline(cin, s2);
				mass.add(new Meeting(Date(d, m, y), Time_(s, mins, h), s1, s2));
				break;
			case 3:
				cout << "enter date(dd-mm-yyyy)\n";
				cin >> d;
				cin >> m;
				cin >> y;
				if (d > 31 || d <= 0) {
					cout << "error: please, enter right day\n";
					break;
				}
				if (m > 12 || m <= 0) {
					cout << "error: please, enter right month\n";
					break;
				}
				if (y <= 0) {
					cout << "error: please, enter right year\n";
					break;
				}
				cout << "enter time\n";
				cin >> s;
				cin >> mins;
				cin >> h;
				if (s > 59 || s < 0) {
					cout << "error: please, enter right seconds\n";
					break;
				}
				if (mins > 59 || mins < 0) {
					cout << "error: please, enter right minutes\n";
					break;
				}
				if (h >= 24 || h < 0) {
					cout << "error: please, enter right hours\n";
					break;
				}
				cout << "enter description\n";
				cin.get();
				getline(cin, s1);
				mass.add(new Custom(Date(d, m, y), Time_(s, mins, h), s1));
				break;
			case 4:
				mass.show();
				break;
			case 5:
				mass.save("events.txt");
				break;
			case 6:
				cout << "enter type of event\n";
				cin.get();
				getline(cin, s1);
				if (s1 == "") {
					cout << "error: string is empty\n";
					break;
				}
				mass.searchByType(s1);
				break;
			default:
				break;
			}
		}
	} while (menu != 0);
	return 0;
}