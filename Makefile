.PHONY: clean

.SUFFIXES: .c .o .a

lib%.a: %.o
	ar rs $@ $<

lib%.so: %.o
	gcc -shared -o $@ $<

.c.o:
	gcc -c $<

.o:
	gcc -o $@ $^

zad2: zad2.o libpk.a libos.so
	sudo cp libos.so /usr/lib
	gcc -o $@ $^

zad2.o: zad2.c
	gcc -c zad2.c

pk.o: pk.c
	gcc -c pk.c

os.o: os.c
	gcc -c os.c

libpk.a: pk.o
	ar rs $@ $<

libos.so: os.o
	gcc -shared -o $@ $<

clean:
	rm zad2.o
	rm pk.o
	rm os.o
	rm libpk.a
	rm libos.so
	rm zad2
