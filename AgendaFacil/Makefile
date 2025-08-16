funcional:
	mkdir -p bin
	g++ src/*.cpp test/funcional/*.cpp -o exe

unitario:
	mkdir -p bin
	g++ src/*.cpp test/unit/*.cpp -o exe

clean: 
	rm -f *.o exe

run: funcional unitario
	./exe
