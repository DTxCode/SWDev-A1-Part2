OBJECT:

'Object' is the base class for all objects in CwC. Any non-primitive class should have Object as one of its parents. It
does not have to be a direct parent. The following methods are supported by the Object class:

Object()
    - Default constructor 

virtual ~Object()
    - Default destructor

unsigned int hash() 
    - Returns the hash value of this object
 
virtual bool equals(Object* other)
    - Returns a boolean representing whether this object is the same as the given. Expected to be Re-implemented by
    sub-classes for different definition of equality. 

virtual char* to_string() 
    - Returns a character array describing this object. Expected to be re-implemented by sub-classes for more specific
    string interpretations of objects. 

STRING (subclass of Object):

'String' represents a wrapper around a character array in CwC, to provide a more 'normal' interface with strings. The
following methods are supported by the String class:

String()
    - Default constructor
String(char* s)
    - Constructs a String from an existing character array
String(const char* s)
    - Constructs a String from a C string
String(String* s)
    - Copy constructor to create a String from another String object 

~String()
    - Destructor to delete allocated memory

bool equals(Object* o)
    - Defines equality between Strings, overriding the definition presented in Parent class

String* concat(String* s)
    - Return a new string which represents the concatenation between this String and the given String

unsigned int size()
    - Return the length of the String

bool compare(String* s)
    - Compare the given string to this string, alphabetically. Returns a bool which represents whether this String
    should come alphanumerically before the given String

char* to_string() 
    - Return string representation of this String object, overriding definition in Parent class

MAP (subclass of Object): 

 'Map' structure represents a collection of key,value pairs. In other words, it maps a unique key to a value. Each
 key is unique meaning there are no duplicate keys, and each key maps to a single value. This does not mean that a value
 in the map is unique. All keys are Objects and all values are Objects. Since Strings are a subclass of objects, it may
 be possible to cast the values returned by this map to Strings. The following methods are supported by the Map class:

Map()
    - Default constructor

~Map() 
    - Default destructor

bool has_key(Object* key)
    - Returns true if the key is associated with a value in this ap, else returns false. 

Object* get(Object* key)
    - Returns the value associated with that key, or nullptr if there is no value associated

void put(Object* key, Object* value)
    - Associates the given value with the given key. If the given key exists, its value is overwritten

Object* remove(Object* key)
    - Removes and returns the value associated with the given key. Returns nullptr if there is no value associated.

size_t size()
    - Returns the number of keys associated in this mapping
