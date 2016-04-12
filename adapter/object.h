
// 作者：zpan
// 链接：https://www.zhihu.com/question/30301819/answer/47814135
// 来源：知乎
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

typedef struct _Object Object;
typedef struct _Class Class;

struct _Object {
    Class* klass; // each Object should contain a pointer to its metaclass,
                  // which also works as a vtable
};

typedef void (*Ctor)(Object* self, ...);
typedef void (*Dtor)(Object* self);

struct _Class {
    Object  base;                          // a Class is an Object, so it
                                           // must derive from Object
    char*   name;                          // name of the type
    Class*  baseClass;                     // the base class
    size_t  instanceSize;                  // size of an instance
    Ctor    instanceCtor;                  // constructor of the corresponding
                                           // instance type
    Dtor    instanceDtor;                  // destructor of the corresponding
                                           // instance type
};

extern Class ObjectType;                   // the 'Object' object
extern Class ClassType;                    // the 'Class' object

Object* New(Class* type, ...);             // allocate an object
void    Delete(Object* self);              // deallocate an object

void    Object_ctor(Object* self);         // constructor of Object
void    Object_dtor(Object* self);         // destructor of Object

void    Class_ctor(Class* self);           // constructor of Class
void    Class_dtor(Class* self);           // destructor of Class
char*   Class_getName(Class* self);

Class*  Object_getClass(Object* self);     // get the type of an object
Class*  Object_getBaseClass(Object* self); // get the type of the base class
                                           // of an object