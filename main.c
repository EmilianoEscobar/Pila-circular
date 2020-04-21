
#include <stdio.h>
#include <stdlib.h>
#include "clist.h"

int main(){
    clist *l;
    l = create_list();
    add_init(l, 3);
    add(l, 2, 1);
    print_list(l);
    return 0;
}


