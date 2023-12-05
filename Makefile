all:
	clang -Ofast -I include main.c src/activations/activations.c -Ldependencies -lnumc_clang_x64 -o nn.exe 

run:
	./nn.exe