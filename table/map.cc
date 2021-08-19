/**
 * Copyright (c) 2021 zzh. All rights reserved.
 */

#include "table/map.h"

#include <iostream>

int Map::Get(const std::string &k, std::string *v) const {
    std::string kk = "This is a very very very very very very very very very very very very long string";
    std::cout << "TODO: map Get, " << k << std::endl;

    return 0;
}

int Map::Put(const std::string &k, const std::string &value) {
    std::cout << "TODO: map Put" << std::endl;

    return 0;
}

int Map::Del(const std::string &k) {
    std::cout << "TODO: map Del" << std::endl;

    return 0;
}
