//
//  seen_db.c
//  C-Crawler-Server
//
//  Created by 林重翰 on 2020/4/5.
//  Copyright © 2020 林重翰. All rights reserved.
//

#include "seen_db.h"

void create_seen_db(SeenDB *db) {
    db->size = 0;
    db->table = (DB **) malloc (sizeof(DB *) * MAX_HASH);
    
    int i;
    for (i = 0; i < MAX_HASH; i++) {
        db->table[i] = NULL;
    }
}
