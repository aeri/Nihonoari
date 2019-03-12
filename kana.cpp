#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <bits/stdc++.h>
 
using namespace std;

int main()
{
	//For randomize kana appearance
	srand (time(NULL));
	cout << "github.com/aeri" << endl;
	cout << "NIHONOARI V 0.1" << endl;
	cout << "Write \"STOP\" to end the test"<< endl << endl;
	
	
	int valor = 0;
	int aciertos = 0;
	int fallos = 0;
	bool stop = false;
	string entrada;
	string hiragana [71];
	string romaji [71];
	
	//Polulate phase
	
	hiragana[0] = "あ";
	romaji[0] = "a";
	
	hiragana[1] = "い";
	romaji[1] = "i";
	
	hiragana[2] = "う";
	romaji[2] = "u";
	
	hiragana[3] = "え";
	romaji[3] = "e";
	
	hiragana[4] = "お";
	romaji[4] = "o";
	
	hiragana[5] = "ゃ";
	romaji[5] = "ya";
	
	hiragana[6] = "ゅ";
	romaji[6] = "yu";
	
	hiragana[7] = "ょ";
	romaji[7] = "yo";
	
	hiragana[8] = "ゎ";
	romaji[8] = "wa";
	
	hiragana[9] = "か";
	romaji[9] = "ka";
	
	hiragana[10] = "き";
	romaji[10] = "ki";
	
	hiragana[11] = "く";
	romaji[11] = "ku";
	
	hiragana[12] = "け";
	romaji[12] = "ke";
	
	hiragana[13] = "こ";
	romaji[13] = "ko";
	
	hiragana[14] = "さ";
	romaji[14] = "sa";
	
	hiragana[15] = "し";
	romaji[15] = "shi";
	
	hiragana[16] = "す";
	romaji[16] = "su";
	
	hiragana[17] = "せ";
	romaji[17] = "se";
	
	hiragana[18] = "そ";
	romaji[18] = "so";
	
	hiragana[19] = "た";
	romaji[19] = "ta";
	
	hiragana[20] = "ち";
	romaji[20] = "chi";
	
	hiragana[21] = "つ";
	romaji[21] = "tsu";
	
	hiragana[22] = "て";
	romaji[22] = "te";
	
	hiragana[23] = "と";
	romaji[23] = "to";
	
	hiragana[24] = "な";
	romaji[24] = "na";
	
	hiragana[25] = "に";
	romaji[25] = "ni";
	
	hiragana[26] = "ぬ";
	romaji[26] = "nu";
	
	hiragana[27] = "ね";
	romaji[27] = "ne";
	
	hiragana[28] = "の";
	romaji[28] = "no";
	
	hiragana[29] = "は";
	romaji[29] = "ha";
	
	hiragana[30] = "ひ";
	romaji[30] = "hi";
	
	hiragana[31] = "ふ";
	romaji[31] = "fu";
	
	hiragana[32] = "へ";
	romaji[32] = "he";
	
	hiragana[33] = "ほ";
	romaji[33] = "ho";
	
	hiragana[34] = "ま";
	romaji[34] = "ma";
	
	hiragana[35] = "み";
	romaji[35] = "mi";
	
	hiragana[36] = "む";
	romaji[36] = "mu";
	
	hiragana[37] = "め";
	romaji[37] = "me";
	
	hiragana[38] = "も";
	romaji[38] = "mo";
		
	hiragana[39] = "ら";
	romaji[39] = "ra";
	
	hiragana[40] = "り";
	romaji[40] = "ri";
	
	hiragana[41] = "る";
	romaji[41] = "ru";
	
	hiragana[42] = "れ";
	romaji[42] = "re";
	
	hiragana[43] = "ろ";
	romaji[43] = "ro";
	
	hiragana[44] = "を";
	romaji[44] = "wo";
	
	hiragana[45] = "ん";
	romaji[45] = "n";
	
	hiragana[46] = "が";
	romaji[46] = "ga";
	
	hiragana[47] = "ぎ";
	romaji[47] = "gi";
	
	hiragana[48] = "ぐ";
	romaji[48] = "gu";
	
	hiragana[49] = "げ";
	romaji[49] = "ge";
	
	hiragana[50] = "ご";
	romaji[50] = "go";
	
	hiragana[51] = "ざ";
	romaji[51] = "za";
	
	hiragana[52] = "じ";
	romaji[52] = "ji";
	
	hiragana[53] = "ず";
	romaji[53] = "zu";
	
	hiragana[54] = "ぜ";
	romaji[54] = "ze";
	
	hiragana[55] = "ぞ";
	romaji[55] = "zo";
	
	hiragana[56] = "だ";
	romaji[56] = "da";
	
	hiragana[57] = "ぢ";
	romaji[57] = "dji";
	
	hiragana[58] = "づ";
	romaji[58] = "dzu";
	
	hiragana[59] = "で";
	romaji[59] = "de";
	
	hiragana[60] = "ど";
	romaji[60] = "do";
	
	hiragana[61] = "ば";
	romaji[61] = "ba";
	
	hiragana[62] = "び";
	romaji[62] = "bi";
	
	hiragana[63] = "ぶ";
	romaji[63] = "bu";
	
	hiragana[64] = "べ";
	romaji[64] = "be";
	
	hiragana[65] = "ぼ";
	romaji[65] = "bo";
	
	hiragana[66] = "ぱ";
	romaji[66] = "pa";
	
	hiragana[67] = "ぴ";
	romaji[67] = "pi";
	
	hiragana[68] = "ぷ";
	romaji[68] = "pu";
	
	hiragana[69] = "ぺ";
	romaji[69] = "pe";
	
	hiragana[70] = "ぽ";
	romaji[70] = "po";
	
	// Populated phase finished
	
	while (!stop){
		valor = rand() % 71;
		cout << hiragana[valor] << endl;
		cin >> entrada;
		//Read CAPS without difference
		transform(entrada.begin(), entrada.end(), entrada.begin(), ::tolower); 
		
		//Input accepted
		if (entrada == romaji[valor]){
			cout << "OK" << endl;
			++aciertos;
		}
		//Finish the program
		else if (entrada == "stop"){
			stop = true;
		}
		//Input failed
		else{
			cout << "ERROR -> "  << romaji[valor] << endl;
			++fallos;
		}
	}
	//Calculate and show stats
	cout << "You passed " << aciertos << " questions" << endl;
	cout << "You have failed " << fallos << " questions" << endl;
	float suma = aciertos + fallos;
	float parte;
	if (suma == 0){
		parte = 0;
	}
	else{
		parte = aciertos/suma;
	}
	float porcentaje = parte*100;

	cout <<  setprecision(3) << porcentaje << "% success" << endl;
}
