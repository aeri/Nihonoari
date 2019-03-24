<p align="center">
  <img src="https://i.imgur.com/PbrWneR.png" width="350" title="hover text">
</p>

# Project Nihonoari
This is a very simple and small program to train the japanese hiragana and katakana character set. The operative is very easy, only appears randomly hiragana or katakana characters depending on user selection and you answer with the romaji transliteration. You can stop the program in any momment to view the stats of your answers.

## Getting Started

To run the program it is neccesary a C++ compiler and it is recommendable the make tool that makes everything easier.

```
make
./kana
```
### Japanese fonts

The program runs in a terminal and it is neccesary that the terminal that you use support the Japanese/Chinesse characters, for this you will need download some monospaced fonts and configure that in the terminal profile.


Examples:
```
apt-get install fonts-takao-mincho
apt-get install fonts-takao
```
## Running the program

Some program iterations for show how it works.

### Question passed

If you get the question right, only "OK" appears.

```
ど
do
OK
ぴ
pi
OK
の
no
OK
```
### Question failed

If you failed the question appears "ERROR" and next the correct answer.
```
は
ke
ERROR -> ha
び
hi
ERROR -> bi
つ
su
ERROR -> tsu
ひ
```
### Stop the training

To end the session you only need to write "STOP" and the stats about your precission appears.

```
ど
do
OK
あ
a
OK
ぺ
ge
ERROR -> pe
つ
STOP
You passed 2 questions
You have failed 1 questions
66.7% success
```
## Built With

* [Codelite](https://github.com/eranif/codelite) - The IDE used

## Authors

* **Aeri** - *Project Nihonoari* - [aeri](https://github.com/aeri)

## License

This project is unlicensed motivated exclusively for personal learning of Japanese.
