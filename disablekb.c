#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/interrupt.h>
 
MODULE_AUTHOR("Stephen Kershaw");
MODULE_DESCRIPTION("Module to mask IRQ 1 on load, unmask on unload");
MODULE_LICENSE("Dual BSD/GPL");
 
static int disablekb_init(void) {
  printk(KERN_WARNING "Masking keyboard interrupt.\n");
  disable_irq(1);
  return 0;
}
 
static void disablekb_exit(void) {
  printk(KERN_WARNING "Unmasking keyboard interrupt.\n");
  enable_irq(1);
}
 
module_init(disablekb_init);
module_exit(disablekb_exit);
