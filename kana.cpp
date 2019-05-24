//            _ __                                 _
//     ____  (_) /_  ____  ____  ____  ____ ______(_)
//    / __ \/ / __ \/ __ \/ __ \/ __ \/ __ `/ ___/ /
//   / / / / / / / / /_/ / / / / /_/ / /_/ / /  / /
//  /_/ /_/_/_/ /_/\____/_/ /_/\____/\__,_/_/  /_/
//

#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

const int KANA = 71;

void swap(int* a, int* b, string* A, string* B)
{
    int t = *a;
    string T = *A;
    *a = *b;
    *A = *B;
    *b = t;
    *B = T;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition(string arr[], int arr2[], int low, int high)
{
    int pivot = arr2[high];  // pivot
    int i = (low - 1);       // Index of smaller element

    for(int j = low; j <= high - 1; j++)
	{
	    // If current element is smaller than or
	    // equal to pivot
	    if(arr2[j] <= pivot)
		{
		    i++;  // increment index of smaller element
		    swap(&arr2[i], &arr2[j], &arr[i], &arr[j]);
		}
	}
    swap(&arr2[i + 1], &arr2[high], &arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(string arr[], int arr2[], int low, int high)
{
    if(low < high)
	{
	    /* pi is partitioning index, arr[p] is now
	       at right place */
	    int pi = partition(arr, arr2, low, high);

	    // Separately sort elements before
	    // partition and after partition
	    quickSort(arr, arr2, low, pi - 1);
	    quickSort(arr, arr2, pi + 1, high);
	}
}

void addFail(string failed[], int nFailed[], const string kana)
{
    int i = 0;
    bool inserted = false;
    while(i <= 70 && not inserted)
	{
	    if(failed[i] == kana)
		{
		    inserted = true;
		    ++nFailed[i];
		}
	    else if(failed[i] == "")
		{
		    failed[i] = kana;
		    nFailed[i] = 1;
		    inserted = true;
		}
	    else
		{
		    ++i;
		}
	}
}

void showFail(string failed[], int nFailed[])
{
    int i = 0;
    while(nFailed[i] != 0)
	{
	    i++;
	}
    quickSort(failed, nFailed, 0, i - 1);
    while(i > 0)
	{
	    --i;
	    cout << nFailed[i] << ". " << failed[i] << endl;
	}
    cout << endl;
}

int main()
{
    // For randomize kana appearance
    srand(time(NULL));
    int mode;
    bool hk;
    bool valid = false;
    cout << "Project nihonoari [Version 1.1]" << endl;
    cout << "github.com/aeri" << endl;
    cout << "This is free and unencumbered software released into the public domain." << endl << endl;
    cout << "Write \"STOP\" to end the test" << endl << endl;
    do
	{
	    // Mode selecion
	    cout << "0	-->	All" << endl;
	    cout << "1	-->	Hiragana" << endl;
	    cout << "2	-->	Katakana" << endl << endl;
	    cin >> mode;

	    // Ignore not valid options
	    if(cin.fail())
		{
		    mode = -1;
		}
	    cin.clear();
	    cin.ignore(INT_MAX, '\n');  // NB: preferred method for flushing cin

	    switch(mode)
		{
		case 0:
		    valid = true;
		    break;
		case 1:
		    cout << "Only Hiragana mode" << endl;
		    valid = true;
		    break;
		case 2:
		    cout << "Only Katakana mode" << endl;
		    valid = true;
		    break;
		default:
		    cerr << "Please, answer 0, 1 or 2." << endl << flush;
		}
	}

    while(valid != true || cin.fail());

    int valor = 0;
    int aciertos = 0;
    int fallos = 0;
    bool stop = false;
    string entrada;
    string hiragana[KANA];
    string romaji[KANA];
    string katakana[KANA];

    string failed[200];
    int nFailed[200];

    // Polulate phase

    hiragana[0] = "あ";
    katakana[0] = "ア";
    romaji[0] = "a";

    hiragana[1] = "い";
    katakana[1] = "イ";
    romaji[1] = "i";

    hiragana[2] = "う";
    katakana[2] = "ウ";
    romaji[2] = "u";

    hiragana[3] = "え";
    katakana[3] = "エ";
    romaji[3] = "e";

    hiragana[4] = "お";
    katakana[4] = "オ";
    romaji[4] = "o";

    hiragana[5] = "や";
    katakana[5] = "ヤ";
    romaji[5] = "ya";

    hiragana[6] = "ゆ";
    katakana[6] = "ユ";
    romaji[6] = "yu";

    hiragana[7] = "よ";
    katakana[7] = "ヨ";
    romaji[7] = "yo";

    hiragana[8] = "わ";
    katakana[8] = "ワ";
    romaji[8] = "wa";

    hiragana[9] = "か";
    katakana[9] = "カ";
    romaji[9] = "ka";

    hiragana[10] = "き";
    katakana[10] = "キ";
    romaji[10] = "ki";

    hiragana[11] = "く";
    katakana[11] = "ク";
    romaji[11] = "ku";

    hiragana[12] = "け";
    katakana[12] = "ケ";
    romaji[12] = "ke";

    hiragana[13] = "こ";
    katakana[13] = "コ";
    romaji[13] = "ko";

    hiragana[14] = "さ";
    katakana[14] = "サ";
    romaji[14] = "sa";

    hiragana[15] = "し";
    katakana[15] = "シ";
    romaji[15] = "shi";

    hiragana[16] = "す";
    katakana[16] = "ス";
    romaji[16] = "su";

    hiragana[17] = "せ";
    katakana[17] = "セ";
    romaji[17] = "se";

    hiragana[18] = "そ";
    katakana[18] = "ソ";
    romaji[18] = "so";

    hiragana[19] = "た";
    katakana[19] = "タ";
    romaji[19] = "ta";

    hiragana[20] = "ち";
    katakana[20] = "チ";
    romaji[20] = "chi";

    hiragana[21] = "つ";
    katakana[21] = "ツ";
    romaji[21] = "tsu";

    hiragana[22] = "て";
    katakana[22] = "テ";
    romaji[22] = "te";

    hiragana[23] = "と";
    katakana[23] = "ト";
    romaji[23] = "to";

    hiragana[24] = "な";
    katakana[24] = "ナ";
    romaji[24] = "na";

    hiragana[25] = "に";
    katakana[25] = "ニ";
    romaji[25] = "ni";

    hiragana[26] = "ぬ";
    katakana[26] = "ヌ";
    romaji[26] = "nu";

    hiragana[27] = "ね";
    katakana[27] = "ネ";
    romaji[27] = "ne";

    hiragana[28] = "の";
    katakana[28] = "ノ";
    romaji[28] = "no";

    hiragana[29] = "は";
    katakana[29] = "ハ";
    romaji[29] = "ha";

    hiragana[30] = "ひ";
    katakana[30] = "ヒ";
    romaji[30] = "hi";

    hiragana[31] = "ふ";
    katakana[31] = "フ";
    romaji[31] = "fu";

    hiragana[32] = "へ";
    katakana[32] = "ヘ";
    romaji[32] = "he";

    hiragana[33] = "ほ";
    katakana[33] = "ホ";
    romaji[33] = "ho";

    hiragana[34] = "ま";
    katakana[34] = "マ";
    romaji[34] = "ma";

    hiragana[35] = "み";
    katakana[35] = "ミ";
    romaji[35] = "mi";

    hiragana[36] = "む";
    katakana[36] = "ム";
    romaji[36] = "mu";

    hiragana[37] = "め";
    katakana[37] = "メ";
    romaji[37] = "me";

    hiragana[38] = "も";
    katakana[38] = "モ";
    romaji[38] = "mo";

    hiragana[39] = "ら";
    katakana[39] = "ラ";
    romaji[39] = "ra";

    hiragana[40] = "り";
    katakana[40] = "り";
    romaji[40] = "ri";

    hiragana[41] = "る";
    katakana[41] = "ル";
    romaji[41] = "ru";

    hiragana[42] = "れ";
    katakana[42] = "レ";
    romaji[42] = "re";

    hiragana[43] = "ろ";
    katakana[43] = "ロ";
    romaji[43] = "ro";

    hiragana[44] = "を";
    katakana[44] = "ヲ";
    romaji[44] = "wo";

    hiragana[45] = "ん";
    katakana[45] = "ン";
    romaji[45] = "n";

    hiragana[46] = "が";
    katakana[46] = "ガ";
    romaji[46] = "ga";

    hiragana[47] = "ぎ";
    katakana[47] = "ギ";
    romaji[47] = "gi";

    hiragana[48] = "ぐ";
    katakana[48] = "グ";
    romaji[48] = "gu";

    hiragana[49] = "げ";
    katakana[49] = "ゲ";
    romaji[49] = "ge";

    hiragana[50] = "ご";
    katakana[50] = "ゴ";
    romaji[50] = "go";

    hiragana[51] = "ざ";
    katakana[51] = "ザ";
    romaji[51] = "za";

    hiragana[52] = "じ";
    katakana[52] = "ジ";
    romaji[52] = "ji";

    hiragana[53] = "ず";
    katakana[53] = "ズ";
    romaji[53] = "zu";

    hiragana[54] = "ぜ";
    katakana[54] = "ゼ";
    romaji[54] = "ze";

    hiragana[55] = "ぞ";
    katakana[55] = "ゾ";
    romaji[55] = "zo";

    hiragana[56] = "だ";
    katakana[56] = "ダ";
    romaji[56] = "da";

    hiragana[57] = "ぢ";
    katakana[57] = "ヂ";
    romaji[57] = "dji";

    hiragana[58] = "づ";
    katakana[58] = "ヅ";
    romaji[58] = "dzu";

    hiragana[59] = "で";
    katakana[59] = "デ";
    romaji[59] = "de";

    hiragana[60] = "ど";
    katakana[60] = "ド";
    romaji[60] = "do";

    hiragana[61] = "ば";
    katakana[61] = "バ";
    romaji[61] = "ba";

    hiragana[62] = "び";
    katakana[62] = "ビ";
    romaji[62] = "bi";

    hiragana[63] = "ぶ";
    katakana[63] = "ブ";
    romaji[63] = "bu";

    hiragana[64] = "べ";
    katakana[64] = "ベ";
    romaji[64] = "be";

    hiragana[65] = "ぼ";
    katakana[65] = "ボ";
    romaji[65] = "bo";

    hiragana[66] = "ぱ";
    katakana[66] = "パ";
    romaji[66] = "pa";

    hiragana[67] = "ぴ";
    katakana[67] = "ピ";
    romaji[67] = "pi";

    hiragana[68] = "ぷ";
    katakana[68] = "プ";
    romaji[68] = "pu";

    hiragana[69] = "ぺ";
    katakana[69] = "ペ";
    romaji[69] = "pe";

    hiragana[70] = "ぽ";
    katakana[70] = "ポ";
    romaji[70] = "po";

    // Populated phase finished
    int counter = 1;
    while(!stop)
	{
	    valor = rand() % KANA;

	    switch(mode)
		{
		case 1:
		    cout << counter << ". " << hiragana[valor] << endl;
		    hk = 0;
		    break;
		case 2:
		    cout << counter << ". " << katakana[valor] << endl;
		    hk = 1;
		    break;
		default:
		    // Hiragana or Katakana
		    hk = rand() % 2;
		    if(hk)
			{
			    cout << counter << ". " << katakana[valor] << endl;
			}
		    else
			{
			    cout << counter << ". " << hiragana[valor] << endl;
			}
		}
	    cin >> entrada;
	    // Read CAPS without difference
	    transform(entrada.begin(), entrada.end(), entrada.begin(), ::tolower);

	    // Input accepted
	    if(entrada == romaji[valor])
		{
		    cout << "	OK" << endl;
		    ++aciertos;
		}
	    // Finish the program
	    else if(entrada == "stop" || cin.fail())
		{
		    stop = true;
		}
	    // Input failed
	    else
		{
		    cout << "	ERROR -> " << romaji[valor] << endl;
		    ++fallos;
		    if(hk)
			{
			    addFail(failed, nFailed, katakana[valor]);
			}
		    else
			{
			    addFail(failed, nFailed, hiragana[valor]);
			}
		}
	    ++counter;
	}
    // Calculate and show stats
    cout << "You passed " << aciertos << " questions" << endl;
    cout << "You have failed " << fallos << " questions" << endl;
    if(fallos >= 1)
	{
	    showFail(failed, nFailed);
	}
    float suma = aciertos + fallos;
    float parte;
    if(suma == 0)
	{
	    parte = 0;
	}
    else
	{
	    parte = aciertos / suma;
	}
    float porcentaje = parte * 100;

    cout << setprecision(3) << porcentaje << "% success" << endl;
}
