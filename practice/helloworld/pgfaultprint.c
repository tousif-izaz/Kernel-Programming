#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <linux/mm.h>

int main() {
    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);
    printf("Number of page faults: %ld\n", all_vm_events[PGFAULT]);
    return 0;
}
