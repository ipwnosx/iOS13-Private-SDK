//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFBase64Codec : NSObject
{
}

+ (id)decodeUuid:(id)arg1;
+ (id)decodeString:(id)arg1;
+ (id)encodeUuid:(id)arg1;
+ (id)encodeData:(id)arg1;
+ (BOOL)decodeString:(id)arg1 with:(CDUnknownBlockType)arg2;
+ (id)encodeBytes:(const void *)arg1 withLength:(NSUInteger)arg2;
+ (BOOL)checkTerminators:(long long)arg1 expected:(long long)arg2;
+ (BOOL)appendPadding;
+ (NSUInteger)encodedUuidLength;
+ (const char )decoder;
+ (const char )alphabet;
- (id)init;

@end

