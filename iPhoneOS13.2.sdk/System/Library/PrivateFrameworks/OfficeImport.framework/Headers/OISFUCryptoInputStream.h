//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/SFUInputStream-Protocol.h>

@class OISFUCryptor;
@protocol SFUInputStream;

__attribute__((visibility("hidden")))
@interface OISFUCryptoInputStream : NSObject <SFUInputStream>
{
    id <SFUInputStream> mBaseStream;
    OISFUCryptor *mCryptor;
    long long mOffset;
}

- (id)closeLocalStream;
- (void)close;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (NSUInteger)readToBuffer:(char )arg1 size:(NSUInteger)arg2;
- (long long)offset;
- (void)dealloc;
- (id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2;

@end

