//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/SFUInputBundle-Protocol.h>

@class NSString;

@interface SFUPackageInputBundle : NSObject <SFUInputBundle>
{
    NSString *_rootPath;
}

- (void)copyEntry:(id)arg1 toFile:(id)arg2;
- (unsigned int)crc32ForEntry:(id)arg1;
- (long long)lengthOfEntry:(id)arg1;
- (id)bufferedInputStreamForEntry:(id)arg1;
- (id)inputStreamForEntry:(id)arg1;
- (BOOL)hasEntryWithName:(id)arg1;
- (id)_existingPathForEntryName:(id)arg1 isGz:(BOOL )arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

