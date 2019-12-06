//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuetContext/_CDContext-Protocol.h>

@class NSArray, NSObject, _CDContextualKeyPath;
@protocol NSCopying><NSSecureCoding;

@protocol _CDLocalContext <_CDContext>
- (BOOL)addObjects:(NSArray *)arg1 andRemoveObjects:(NSArray *)arg2 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg3;
- (BOOL)removeObjects:(NSArray *)arg1 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg2;
- (BOOL)addObjects:(NSArray *)arg1 toArrayAtKeyPath:(_CDContextualKeyPath *)arg2;
- (BOOL)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forKeyedSubscript:(_CDContextualKeyPath *)arg2;
- (BOOL)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forContextualKeyPath:(_CDContextualKeyPath *)arg2;
@end

