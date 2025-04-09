#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main() {
	system("Color 0B");
	cout << "Welcome to SpaceOS. V.test A simulation" << "\n";
	while (true) {
		string a;
		std::cin >> a;
		if (a == "Prt") {
			string a1;
			std::cin >> a1;
			std::cout << a1;
		}

		else if (a == "Oprt") {
			int N1, N2;
			std::cin >> N1;
			std::cin >> N2;
			std::cout << N1 + N2;
		}

		else if (a == "Mult") {
			int N3, N4;
			std::cin >> N3;
			std::cin >> N4;
			std::cout << N3 * N4;
		}

		else if (a == "Divi") {
			double N5, N6;
			std::cin >> N5;
			std::cin >> N6;
			std::cout << N5 / N6;
		}

		else if (a == "Subs") {
			int N7, N8;
			std::cin >> N7;
			std::cin >> N8;
			std::cout << N7 - N8;
		}

		//------------------MATH -- done, return in 150 for SIN,cos...

		else if (a == "loop++") {
			string Lp;
			std::cin >> Lp;
			for (int i = 0; i < 10; i++) {
				std::cout << Lp << "\n";
			}
			std::cout << "";
		}

		else if (a == "loop+") {
			string Lp;
			std::cin >> Lp;
			for (int i = 0; i < 10; i++) {
				std::cout << Lp;
			}
			std::cout << "";
		}

		//-----loops--done

		else if (a == "cr.file") {

			std::cout << "\n";

			while (true) {
				string File_name;
				std::cin >> File_name;
				if (File_name == "Quit.quit/command") {
					break;
				}

				else if (File_name == "Enter.enter/command") {
					string abcd;
					std::cin >> abcd;
					if (abcd == "LOL") {
						std::cout << "Laughing Out Loud";
					}
				}
			}
			//--------------return in ~500-800


		}

		else if (a == "clear") {
			system("cls");
		}

		//    clearscreen-done

		else if (a == "shw.time") {
			std::cout << 0;
		}

		else if (a == "caparezza") {
			std::cout << "Sono fuori del tunnel(el-el-el) del divertimento (*2)" << "\n";
			Sleep(11000);
			std::cout << "Quando esco di casa mi annoio (~o), sono molto contento (~~o)" << "\n";
			Sleep(4000);
			std::cout << "Quando esco di casa mi annoio , sono molto piu^ contento (~~o)" << "\n";
			Sleep(5500);
			std::cout << "Di te che spendi" << "\n";
			Sleep(1100);
			std::cout << "stipendi stipato in posti" << "\n";
			Sleep(1200);
			std::cout << "stupendi tra culi su cubi" << "\n";
			Sleep(1050);
			std::cout << "succubi di beat orrendi";

		}

		else if (a == "Are-you-sure-?") {
			std::cout << "pretty sure" << "\n";
		}

		else if (a == "what-?") {
		std::cout << "are you sure ?" << "\n";
		}

		else if (a == "just-got-my-powers") {
			std::cout << "Are you sure" << "\n";
		}

		else if (a == "pointer*") {
			const char *s = "pointer-string";
			std::cout << s << "\n";
			while (true) {
				string scd;
				std::cin >> scd;
				if (scd == "shwram-pointer") {
					std::cout << &s << "\n";
				}
			}
		}

		else if (a == "e") {
			std::cout << "tgduyclqe hgf";
		
		}
		
		else if (a == "cos") {
			double cosF;
			std::cin >> cosF;
			std::cout << cos(cosF);
		}

		else if (a == "sin") {
			double sinB;
			std::cin >> sinB;
			std::cout << sin(sinB);
		}

		else if (a == "tan") {
			double tanD;
			std::cin >> tanD;
			std::cout << tan(tanD);
		}

		else if (a == "atan") {
			double atana;
			std::cin >> atana;
			std::cout << atan(atana);
		}

		else if (a == "asin") {
			double asinb;
			std::cin >> asinb;
			std::cout << asin(asinb);
		}

		else if (a == "acos") {
			double acosc;
			std::cin >> acosc;
			std::cout << acos(acosc);
		}

		else if (a == "tanh") {
			double tanho;
			std::cin >> tanho;
			std::cout << tanh(tanho);
		}

		else if (a == "sinh") {
			double sinhp;
			std::cin >> sinhp;
			std::cout << sinh(sinhp);
		}
		else if (a == "cosh") {
			double coshq;
			std::cin >> coshq;
			std::cout << cosh(coshq);
		}
	}
}