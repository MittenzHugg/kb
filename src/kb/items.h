#ifndef _ITEMS_H
#define _ITEMS_H
#include <stdint.h>

typedef struct items_data {
    uint32_t    item_index;
    char       *tooltip;
}items_data_t;

typedef struct jiggy_data {
    uint32_t    jiggy_index;
    uint32_t    level;
    char       *tooltip;
}jiggy_data_t;

typedef struct mumbo_token_data {
    uint32_t    mt_index;
    uint32_t    level;
    char       *tooltip;
}mumbo_token_data_t;
typedef struct honeycomb_data {
    uint32_t    index;
    uint32_t    level;
    char       *tooltip;
}honeycomb_data_t;

extern items_data_t items_table[];
extern items_data_t level_items_table[];
extern items_data_t timer_items_table[];

extern jiggy_data_t jiggy_table[];
extern mumbo_token_data_t mumbo_token_table[];
extern honeycomb_data_t empty_honeycomb_table[];

#endif