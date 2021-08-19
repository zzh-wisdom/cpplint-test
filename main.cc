/**
 * Copyright (c) 2021 zzh. All rights reserved.
 */

#include<iostream>

#include "table/map.h"

/**
 * This is a very very very very very very very very very very very very long comment.
 */
int main() {
    Map map;
    std::string k = "This is a very very very very very very very very very very very very long string", v;

    map.Get(k, &v);
    map.Put(k, v);
    map.Del(k);

    return 0;
}
