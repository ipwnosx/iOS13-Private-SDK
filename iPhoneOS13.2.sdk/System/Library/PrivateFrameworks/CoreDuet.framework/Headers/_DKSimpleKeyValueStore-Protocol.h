//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, NSString;
@protocol NSSecureCoding;

@protocol _DKSimpleKeyValueStore
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(NSObject<NSSecureCoding> *)arg1 forKey:(NSString *)arg2;
- (NSObject *)objectForKey:(NSString *)arg1;
@end

