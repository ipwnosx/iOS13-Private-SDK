//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GPBMessage, NSData, NSOutputStream, NSString;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct GPBCodedInputStreamState {
    char bytes;
    NSUInteger bufferSize;
    NSUInteger bufferPos;
    NSUInteger currentLimit;
    int lastTag;
    NSUInteger recursionDepth;
};

struct GPBExtensionDescription {
    CDUnion_88782d86 _field1;
    char _field2;
    char _field3;
    char _field4;
    /* void * CDUnknownFunctionPointerType _field5 */;
    int _field6;
    unsigned char _field7;
    unsigned char _field8;
};

struct GPBExtensionRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct GPBMessageFieldDescription {
    char _field1;
    union {
        char _field1;
        /* void * CDUnknownFunctionPointerType _field2 */;
        /* void * CDUnknownFunctionPointerType _field3 */;
    } _field2;
    unsigned int _field3;
    int _field4;
    unsigned int _field5;
    unsigned short _field6;
    unsigned char _field7;
};

struct GPBMessage_Storage {
    unsigned int _field1[0];
};

struct GPBOutputBufferState {
    char bytes;
    NSUInteger size;
    NSUInteger position;
    NSOutputStream *output;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void _field3;
    void _field4;
};

struct ccdigest_info;

struct ccvrf {
    NSUInteger publickey_nbytes;
    NSUInteger secretkey_nbytes;
    NSUInteger proof_nbytes;
    NSUInteger hash_nbytes;
    NSUInteger group_nbytes;
    struct ccdigest_info di;
    void custom;
    /* void * CDUnknownFunctionPointerType derive_public_key */;
    /* void * CDUnknownFunctionPointerType prove */;
    /* void * CDUnknownFunctionPointerType verify */;
    /* void * CDUnknownFunctionPointerType proof_to_hash */;
};

#pragma mark Typedef'd Structures

typedef struct {
    NSUInteger _field1;
    id _field2;
    NSUInteger _field3;
    NSUInteger _field4[5];
} CDStruct_70511ce9;

#pragma mark Typedef'd Unions

typedef union {
    BOOL valueBool;
    int valueInt32;
    long long valueInt64;
    unsigned int valueUInt32;
    NSUInteger valueUInt64;
    float valueFloat;
    double valueDouble;
    NSData *valueData;
    NSString *valueString;
    GPBMessage *valueMessage;
    int valueEnum;
} CDUnion_88782d86;

