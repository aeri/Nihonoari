CC=g++
CFLAGS=-Os -Wall

kana: kana.cpp
	$(CC) $(CFLAGS) -o kana kana.cpp


clean:
	rm -rf *.o
	rm kana
