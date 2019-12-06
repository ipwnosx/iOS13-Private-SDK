//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;
@protocol OS_xpc_object;

@interface PKImageSetXPCContainer : NSObject <NSSecureCoding>
{
    NSUInteger _length;
    BOOL _isShmem;
    NSUInteger _offset;
    NSObject<OS_xpc_object> *_data;
    NSData *_imageSetHash;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSData *imageSetHash; // @synthesize imageSetHash=_imageSetHash;
// - (void).cxx_destruct;
- (void)purge;
- (id)containedImageSet;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWithXPCObject:(id)arg1 length:(NSUInteger)arg2 isSharedMemory:(BOOL)arg3 offset:(NSUInteger)arg4 hash:(id)arg5;
- (id)initWithWithXPCObject:(id)arg1 hash:(id)arg2;
- (id)init;

@end

