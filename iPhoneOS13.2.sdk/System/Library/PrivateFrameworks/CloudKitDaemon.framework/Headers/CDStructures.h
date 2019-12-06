//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct internal_state;

struct pcc_invocation_key {
    unsigned char _field1[32];
};

struct pcc_wrapped_invocation_key {
    char _field1;
    NSUInteger _field2;
};

struct z_stream_s {
    char next_in;
    unsigned int avail_in;
    NSUInteger total_in;
    char next_out;
    unsigned int avail_out;
    NSUInteger total_out;
    char msg;
    struct internal_state state;
    /* void * CDUnknownFunctionPointerType zalloc */;
    /* void * CDUnknownFunctionPointerType zfree */;
    void opaque;
    int data_type;
    NSUInteger adler;
    NSUInteger reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    int _field1;
    unsigned char _field2[16];
} CDStruct_46dcf1da;

// Ambiguous groups
typedef struct {
    unsigned int doubleValue:1;
    unsigned int int64Value:1;
    unsigned int boolValue:1;
} CDStruct_f7459c01;

typedef struct {
    unsigned int code:1;
} CDStruct_9ab06576;

typedef struct {
    unsigned int contentRequestAuthorizeGetOptions:1;
} CDStruct_3f29eb26;

typedef struct {
    unsigned int status:1;
} CDStruct_47fe53f2;

typedef struct {
    unsigned int success:1;
} CDStruct_f2ecb737;

typedef struct {
    unsigned int type:1;
} CDStruct_f953fb60;

