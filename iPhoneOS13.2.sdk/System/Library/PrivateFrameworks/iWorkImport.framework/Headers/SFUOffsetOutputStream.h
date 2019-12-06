//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/SFUOutputStream-Protocol.h>

@protocol SFUOutputStream;

__attribute__((visibility("hidden")))
@interface SFUOffsetOutputStream : NSObject <SFUOutputStream>
{
    id <SFUOutputStream> mOutputStream;
    long long mInitialOffset;
}

- (id)closeLocalStream;
- (void)close;
- (id)inputStream;
- (BOOL)canCreateInputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (BOOL)canSeek;
- (void)writeBuffer:(const char )arg1 size:(NSUInteger)arg2;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;

@end

