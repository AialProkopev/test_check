ifndef MAKEFLAGS
	MAKEFLAGS += -s
endif

all:

test:
	@echo "START TEST"
	@make -C tests
	@echo "END TEST"
