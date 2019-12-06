//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface OSLogEventBacktraceFrame : NSObject
{
    unsigned char _uuid[16];
    NSUUID *_imageUUID;
    NSUInteger _imageOffset;
}

@property(readonly, nonatomic) NSUInteger imageOffset; // @synthesize imageOffset=_imageOffset;
- (void)dealloc;
@property(readonly, nonatomic) const char imageUUIDBytes;
@property(readonly, nonatomic) NSUUID *imageUUID;
- (id)initWithUUIDBytes:(const char )arg1 andOffset:(NSUInteger)arg2;

@end

