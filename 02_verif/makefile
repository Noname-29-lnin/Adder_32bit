

all: clean complie run

complie:
	@echo '-> Complie'
	@verilator -Wall -Wno-lint -Wno-unoptflat -Wno-width --trace --cc --exe --build -j 0 -f flist.f 

run:
	@echo '-> Run'
	@./obj_dir/VBlock_adder_total

clean:
	@echo '-> Clean'
	@rm -rf obj_dir/ *.vcd
