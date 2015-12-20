/*  
	Original code by Tommy@OSDev.net
	Nikita Lindamnn, 2015
*/

#include "console.c"
#include "time.c"

extern void reboot(); // It's true way to call asm-defined fx's from c code:)

void kmain (void)
{
	initConsole();
	write("NanoS v0.0.1 Running", 0x0F);
	for (int i=0; i<10; i++)
	{
		write(".", 0x0F);
		delay(100);
	}
	writeLn("", 0x0F);
	
	writeLn("Success!", 0x0F);
	
	printStr("System will halt in 5 seconds", 0x0E);
	delay(1000);
	printStr("System will halt in 4 seconds", 0x0E);
	delay(1000);
	printStr("System will halt in 3 seconds", 0x0E);
	delay(1000);
	printStr("System will halt in 2 seconds", 0x0E);
	delay(1000);
	printStr("System will halt in 1 seconds", 0x0E);
	delay(1000);
	writeLn("", 0x0F);

	reboot();
}