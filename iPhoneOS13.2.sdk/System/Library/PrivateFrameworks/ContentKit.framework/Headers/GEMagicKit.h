//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEMagicKit : NSObject
{
}

+ (id)magicForData:(id)arg1 decompress:(BOOL)arg2;
+ (id)magicForFileAtURL:(id)arg1 decompress:(BOOL)arg2;
+ (id)magicForFileAtPath:(id)arg1 decompress:(BOOL)arg2;
+ (id)magicForData:(id)arg1;
+ (id)magicForFileAtURL:(id)arg1;
+ (id)magicForFileAtPath:(id)arg1;
+ (id)typeHierarchyForType:(id)arg1;
//  (id)rawMagicOutputForObject:(id)arg1 cookie:(struct magic_set )arg2 flags:(int)arg3;
+ (id)magicForObject:(id)arg1 decompress:(BOOL)arg2;
//  (struct magic_set )sharedMagicCookie;

@end

