;; Original code by Carottop and Nikita Lindamnn, 2015

format elf
use32

public reboot
public test_fx
section '.text' executable

	reboot:
		int 18h
		ret
	test_fx:
		add ax, 1
		ret