// lang:CwC
/*
* Authors: Ryan Heminway (heminway.r@husky.neu.edu), David Tandetnik 
* CS4500 A1 Part 2 (Map definition)
*/
#pragma once

#include <stdlib.h>
#include "object.h"

/*
* Map represents a collection of (key, value) pairs. Each key is unique
* and is associated with a single value.
*/
class Map : public Object {
   public:
    Map() {}

    ~Map() {}

    // Returns true if the given key is associated with a value, else false
    // Always false if key == nullptr
    bool has_key(Object* key) {}

    // Returns the value associated with given key, or nullptr if no value
    // Expects user to cast response to get subtypes
    Object* get(Object* key) {}

    // Associates the given key with the given value. Any existing value
    // associated with this key is overwritten
    // Does nothing if key or value == nullptr
    void put(Object* key, Object* value) {}

    // Removes and returns the value associated with the given key.
    // Returns nullptr if no value exists for given key.
    Object* remove(Object* key) {}

    // Returns the number of (key,value) pairs in this map
    size_t size() {}
};
