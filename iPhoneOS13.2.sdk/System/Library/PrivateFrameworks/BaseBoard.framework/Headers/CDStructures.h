//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _BSProtobufFieldEntry {
    unsigned int _field1;
    char _field2;
    long long _field3;
    struct objc_ivar _field4;
    Class _field5;
    Class _field6;
    /* void * CDUnknownFunctionPointerType _field7 */;
    /* void * CDUnknownFunctionPointerType _field8 */;
    struct {
        long long _field1;
        struct _BSProtobufFieldEntry _field2;
        struct _BSProtobufFieldEntry _field3;
    } _field9;
    BOOL _field10;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void _field3;
    void _field4;
};

struct atomic_flag {
    _Atomic BOOL _Value;
};

struct mig_subsystem {
    /* void * CDUnknownFunctionPointerType _field1 */;
    int _field2;
    int _field3;
    unsigned int _field4;
    NSUInteger _field5;
    struct routine_descriptor _field6[1];
};

struct objc_ivar;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct routine_descriptor {
    /* void * CDUnknownFunctionPointerType _field1 */;
    /* void * CDUnknownFunctionPointerType _field2 */;
    unsigned int _field3;
    unsigned int _field4;
    struct _field5;
    unsigned int _field6;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    id _field2;
    id _field3;
    id /* CDUnknownBlockType */ _field4;
} CDStruct_7eb2cf46;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    int _field6;
} CDStruct_c91b0553;

typedef struct {
    NSUInteger _field1;
    id _field2;
    NSUInteger _field3;
    NSUInteger _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

