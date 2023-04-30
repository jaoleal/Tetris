make:	
	g++ -I ./src -g src/main.cpp -o binaries/release.out -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
