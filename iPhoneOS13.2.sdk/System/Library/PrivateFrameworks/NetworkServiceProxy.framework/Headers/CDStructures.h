//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct networkParameters {
    BOOL _field1;
    BOOL _field2;
    BOOL _field3;
};

struct nw_frame;

struct nw_frame_array_s {
    struct nw_frame tqh_first;
    struct nw_frame tqh_last;
};

struct nw_protocol {
    unsigned char flow_id[16];
    struct nw_protocol_identifier identifier;
    struct nw_protocol_callbacks callbacks;
    struct nw_protocol output_handler;
    void handle;
    struct nw_protocol default_input_handler;
    void output_handler_context;
};

struct nw_protocol_callbacks;

struct nw_protocol_identifier;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

