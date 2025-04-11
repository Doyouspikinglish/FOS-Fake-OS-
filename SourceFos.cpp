#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <cmath>
#include <string>

using namespace std;

int main() {
	//preparing the main theme
	system("color 0B");
	
	string OSinput;

	while (true) {
		std::cout << "->";
		std::cin >> OSinput;


		//commands for switch case function
		int command_int = 0;
		if (OSinput == "Prt") command_int = 1; //n
		else if (OSinput == "Add") command_int = 2; //n
		else if (OSinput == "Subs") command_int = 3; //n
		else if (OSinput == "Mult") command_int = 4; //n
		else if (OSinput == "Divi") command_int = 5;//n
		else if (OSinput == "cr.file") command_int = 7; //n.f
		else if (OSinput == "loop+") command_int = 8; //n
		else if (OSinput == "loop++") command_int = 9; //n
		else if (OSinput == "clear") command_int = 10; //dn
		else if (OSinput == "sin") command_int = 11; // n until 40
		else if (OSinput == "cos") command_int = 12;                              //////////////
		else if (OSinput == "tan") command_int = 13;                             //random box//
		else if (OSinput == "asin") command_int = 14;							///////////////
		else if (OSinput == "acos") command_int = 15;
		else if (OSinput == "atan") command_int = 16;
		else if (OSinput == "sinh") command_int = 17;
		else if (OSinput == "cosh") command_int = 18;
		else if (OSinput == "tanh") command_int = 19;
		else if (OSinput == "Version") command_int = 20; //dn
		else if (OSinput == "company") command_int = 21; //dn
		else if (OSinput == "Update") command_int = 22; //gbr (going to be removed)
		else if (OSinput == "Info") command_int = 23;//dn

		string a;
		double ab, ba;
		double bc, cb;
		double cd, dc;
		double ed, de;
		string File_usage;
		string looptest_1;
		string looptest_2;
		double Sina;
		double Cosa;
		double Tan_A;
		double Asin;
		double Acos;
		double Atan;
		double Sinh;
		double Cosh;
		double Tanh;

		switch (command_int) {
			case 1: 
				std::cin >> a;
				std::cout << a << "\n";
			break;
		
			case 2: 
				std::cout << "";
				std::cin >> ab;
				std::cin >> ba;
				std::cout << ab + ba << "\n";
				break;


			case 3:
				std::cin >> cb >> bc;
				std::cout << cb - bc << "\n";
				break;
			
			case 4:
				std::cin >> cd >> dc;
				std::cout << cd * dc << "\n";
				break;
			
			case 5:
				std::cin >> ed >> de;
				std::cout << ed / de << "\n";
				break;
			
			case 7:
				while (true) {
					std::cin >> File_usage;
					if (File_usage == "Quit.quit/command") {
						break;
					}
					break;
				}
			case 8:
				std::cin >> looptest_1;
				for (int io = 0; io > 10; io++) {
					std::cout << looptest_1;
				}
				break;
			case 9:
				std::cin >> looptest_2;
				for (int io_2 = 0; io_2 > 10; io_2++) {
					std::cout << looptest_2 << "n";
				}
				break;
			case 10:
				system("cls");
				break;

			case 11:
				std::cin >> Sina;
				std::cout << sin(Sina) << "\n";
				break;

			case 12:
				std::cin >> Cosa;
				std::cout << cos(Cosa) << "\n";
				break;
			
			case 13: 
				std::cin >> Tan_A;
				std::cout << tan(Tan_A) << "\n";
				break;

			case 14:
				std::cin >> Asin;
				std::cout << asin(Asin) << "\n";
				break;

			case 15:
				std::cin >> Acos;
				std::cout << acos(Acos) << "\n";
				break;

			case 16:
				std::cin >> Atan;
				std::cout << atan(Atan) << "\n";
				break;

			case 17:
				std::cin >> Sinh;
				std::cout << sinh(Sinh) << "\n";
				break;
			
			case 18:
				std::cin >> Cosh;
				std::cout << cosh(Cosh) << "\n";
				break;

			case 19:
				std::cin >> Tanh;
				std::cout << tanh(Tanh) << "\n";
				break;

			case 20:
				std::cout << "Version: alpha 0.a2" << "\n";
				break;

			case 21:
				std::cout << "Xpak (XY PAcK)" << "\n";
				break;

			case 22:
				std::cout << "no function yet" << "\n";
				break;

			case 23:
				std::cout << "Owned by Xpak, version: alpha 0.a2\n"; //i forgor 
				break;
		}	
	}
}
