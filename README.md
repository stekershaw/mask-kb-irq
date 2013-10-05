mask-kb-irq
===========

Simple Linux module to mask IRQ1 to disable keyboard.

IRQ1 is masked on module load and unmasked on module unload.

The module was created as one layer of protection for public-access Linux terminals to selectively prevent keyboard input.

Most Linux distributions have the AT keyboard driver built-in rather than modular, hence using a number of other methods to disable input, rather than the obvious removal of the driver module.
