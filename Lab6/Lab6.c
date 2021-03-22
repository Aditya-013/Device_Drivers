#include<linux/init.h>
#include<linux/module.h>
#include<linux/fs.h>

int my_module_open (struct inode *pinode, struct file *pfile) {
	printk(KERN_ALERT "Inside %s function", __FUNCTION__);
	return 0;
}

ssize_t my_module_read (struct file *pfile, char __user *buffer, size_t length, loff_t *offset) {
	printk(KERN_ALERT "Inside %s function", __FUNCTION__);
	return 0;
}
ssize_t my_module_write (struct file *pfile, const char __user *buffer, size_t length, loff_t *offset) {
	printk(KERN_ALERT "Inside %s function", __FUNCTION__);
	return length;
}

int my_module_close (struct inode *pinode, struct file *pfile) {
	printk(KERN_ALERT "Inside %s function", __FUNCTION__);
	return 0;
}

struct file_operations my_module_data_structure = {
	//.owner = THIS_Module,
	.open = my_module_open,
	.read = my_module_read,
	.write = my_module_write, 
	.release = my_module_close,
};

int my_module_init(void) {
	printk(KERN_ALERT "Inside %s function", __FUNCTION__);
	register_chrdev(11, "Custom Char Driver ", &my_module_data_structure);
	return 0;
}

void my_module_exit(void) {
	printk(KERN_ALERT "Inside %s function", __FUNCTION__);
	unregister_chrdev(11, "Custom Char Driver");
}

module_init(my_module_init);
module_exit(my_module_exit);
