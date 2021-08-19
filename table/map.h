/**
 * Copyright (c) 2021 zzh. All rights reserved.
 */

#ifndef CPPLINT_TEST_TABLE_MAP_H_
#define CPPLINT_TEST_TABLE_MAP_H_

#include <string>

/**
 * @brief kv map
 *
 * This is a very very very very very very very very very very very very long comment.
 *
 */
class Map {
 private:
    /* data */
 public:
    Map(/* args */) {}
    ~Map() {}

    int Get(const std::string &k, std::string *v) const;
    int Put(const std::string &k, const std::string &v);
    int Del(const std::string &k);
};

#endif  // CPPLINT_TEST_TABLE_MAP_H_
