#include <linux/init.h>
#include <linux/module.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/mm.h>
#include <linux/vmstat.h>

MODULE_LICENSE("GPL");

// static int 
// static cont struct file_operations pgfault = {

// }
static int pgfault_show(struct seq_file *m, void *v)
{
    unsigned long pgfaults[NR_VM_EVENT_ITEMS];
    all_vm_events(pgfaults);
	unsigned long page_faults = pgfaults[PGFAULT];
    seq_printf(m, "%lu\n", page_faults);
	return 0;
    
}
// static int page_faults_proc_open(struct inode *inode, struct file *file) {
//     return single_open(file, pgfault_show, NULL);
// }
// static const struct proc_ops pagefaults_fops = {
//     .proc_open = page_faults_proc_open,
//     .proc_read = seq_read,
//     .proc_lseek = seq_lseek,
//     .proc_release = single_release,
// };


static int __init pgfaults_init(void) {
    // struct proc_dir_entry *pde;
	// pde = proc_create_single("version", 0, NULL, pgfault_show);
    proc_create_single("numpagefaults", 0, NULL, pgfault_show);
    printk(KERN_INFO "numpagefaults module loaded\n");
    return 0;
}

static void __exit pgfaults_exit(void) {
    remove_proc_entry("numpagefaults", NULL);
    printk(KERN_INFO "numpagefaults module unloaded\n");
}

module_init(pgfaults_init);
module_exit(pgfaults_exit);