//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/SFUOutputStream-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUGZipFileOutputStream : NSObject <SFUOutputStream>
{
//    struct gzFile_s _file;
    long long _offset;
    NSString *_path;
}

+ (id)gzipExtension;
- (id)closeLocalStream;
- (void)close;
- (id)inputStream;
- (BOOL)canCreateInputStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (BOOL)canSeek;
- (long long)offset;
- (void)writeBuffer:(const char )arg1 size:(NSUInteger)arg2;
- (id)path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

