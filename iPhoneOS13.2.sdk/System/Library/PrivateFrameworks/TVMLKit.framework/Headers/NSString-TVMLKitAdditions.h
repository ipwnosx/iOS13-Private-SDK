//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSString (TVMLKitAdditions)
+ (id)tvs_hexStringWithBytes:(const char )arg1 length:(NSUInteger)arg2 lowercase:(BOOL)arg3;
+ (id)tv_lowercaseHexStringWithBytes:(const char )arg1 length:(NSUInteger)arg2;
- (id)tv_SHA256String;
- (id)tv_MD5String;
- (id)tv_filenameSafeString;
@end

