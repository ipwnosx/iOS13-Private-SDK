//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Named Structures

struct __MDPlistBytes;

struct __MDStoreOIDArray;

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    struct __SIJobRef _field2;
    struct {
        unsigned char _field1;
        unsigned char _field2;
        unsigned char _field3;
        unsigned char _field4;
        unsigned char _field5;
        unsigned char _field6;
        unsigned char _field7;
        unsigned char _field8;
        unsigned char _field9;
        unsigned char _field10;
        unsigned char _field11;
        unsigned char _field12;
        unsigned char _field13;
        unsigned char _field14;
        unsigned char _field15;
        unsigned char _field16;
    } _field3;
    union {
        struct {
            struct __MDStoreOIDArray _field1;
            struct __MDPlistBytes _field2;
            long long _field3;
        } _field1;
        struct {
            long long _field1;
        } _field2;
        struct {
            struct __MDStoreOIDArray _field1;
            struct __MDPlistBytes _field2;
            long long _field3;
            int _field4;
        } _field3;
        struct __MDPlistBytes _field4;
        struct __MDPlistBytes _field5;
        struct {
            char _field1;
            NSUInteger _field2;
        } _field6;
        struct {
            double _field1;
        } _field7;
    } _field4;
} CDStruct_4e0944f1;

