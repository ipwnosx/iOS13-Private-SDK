//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQZEntryInputStream-Protocol.h>

@protocol GQZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface GQZEntryUncompressedInputStream : NSObject <GQZEntryInputStream>
{
    long long mOffset;
    long long mEnd;
    id <GQZArchiveInputStream> mInput;
}

- (NSUInteger)readToBuffer:(char )arg1 size:(NSUInteger)arg2;
- (void)readToOwnBuffer:(const char )arg1 size:(NSUInteger )arg2;
- (void)dealloc;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 input:(id)arg3;

@end

