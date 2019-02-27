#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/init.h>
#include <linux/kernel.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("HAO LI PENG");

static int simple_init(void)
{
  printk(KERN_ALERT "hello world ... \n");
  return 0;
}

static void simple_cleanup(void)
{
  printk(KERN_WARNING "byte ... \n");
}

module_init(simple_init);
module_exit(simple_cleanup);
