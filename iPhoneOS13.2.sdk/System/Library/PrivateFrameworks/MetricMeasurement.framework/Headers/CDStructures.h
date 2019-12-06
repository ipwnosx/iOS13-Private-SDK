//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _opaque_pthread_attr_t {
    long long _field1;
    char _field2[56];
};

struct ipc_info_space_basic {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5[2];
};

struct mach_timebase_info {
    unsigned int _field1;
    unsigned int _field2;
};

struct proc_taskinfo {
    NSUInteger _field1;
    NSUInteger _field2;
    NSUInteger _field3;
    NSUInteger _field4;
    NSUInteger _field5;
    NSUInteger _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
    int _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    int _field17;
    int _field18;
};

struct processor_basic_info {
    int _field1;
    int _field2;
    unsigned int _field3;
    int _field4;
    unsigned int _field5;
};

struct processor_cpu_load_info {
    unsigned int _field1[4];
};

struct processor_set_load_info {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
};

struct rusage_info_v4 {
    unsigned char _field1[16];
    NSUInteger _field2;
    NSUInteger _field3;
    NSUInteger _field4;
    NSUInteger _field5;
    NSUInteger _field6;
    NSUInteger _field7;
    NSUInteger _field8;
    NSUInteger _field9;
    NSUInteger _field10;
    NSUInteger _field11;
    NSUInteger _field12;
    NSUInteger _field13;
    NSUInteger _field14;
    NSUInteger _field15;
    NSUInteger _field16;
    NSUInteger _field17;
    NSUInteger _field18;
    NSUInteger _field19;
    NSUInteger _field20;
    NSUInteger _field21;
    NSUInteger _field22;
    NSUInteger _field23;
    NSUInteger _field24;
    NSUInteger _field25;
    NSUInteger _field26;
    NSUInteger _field27;
    NSUInteger _field28;
    NSUInteger _field29;
    NSUInteger _field30;
    NSUInteger _field31;
    NSUInteger _field32;
    NSUInteger _field33;
    NSUInteger _field34;
    NSUInteger _field35;
    NSUInteger _field36;
};

struct vm_statistics64 {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    NSUInteger _field5;
    NSUInteger _field6;
    NSUInteger _field7;
    NSUInteger _field8;
    NSUInteger _field9;
    NSUInteger _field10;
    NSUInteger _field11;
    NSUInteger _field12;
    NSUInteger _field13;
    unsigned int _field14;
    unsigned int _field15;
    NSUInteger _field16;
    NSUInteger _field17;
    NSUInteger _field18;
    NSUInteger _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    NSUInteger _field24;
};

#pragma mark Typedef'd Structures

typedef struct {
    NSUInteger _field1;
    NSUInteger _field2;
} CDStruct_4bcfbbae;

typedef struct {
    NSUInteger _field1;
    id _field2;
    NSUInteger _field3;
    NSUInteger _field4[5];
} CDStruct_70511ce9;

typedef struct {
    double timestamp;
    NSUInteger frameCount;
} CDStruct_db19de03;

typedef struct {
    NSUInteger _field1;
    NSUInteger _field2;
    unsigned int _field3;
    NSUInteger _field4;
    BOOL _field5;
    NSUInteger _field6;
    NSUInteger _field7;
    NSUInteger _field8;
    NSUInteger _field9;
    void _field10;
    void _field11;
    CDStruct_4bcfbbae _field12;
    CDStruct_4bcfbbae _field13;
    NSUInteger _field14;
    void _field15;
    void _field16;
    void _field17;
    void _field18;
} CDStruct_8ec6d642;

