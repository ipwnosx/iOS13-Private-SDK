//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate;

@interface CPLResetTracker : NSObject <NSSecureCoding>
{
    NSArray *_resetReasons;
}

+ (BOOL)shouldIgnoreDefaultsCPLKey:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)discardTentativeResetReason:(id)arg1;
+ (id)registerTentativeResetReasonIfCrashing:(id)arg1;
+ (id)currentReasonDescriptions;
+ (void)discardTracker:(id)arg1;
+ (id)currentTracker;
//  (void)registerLikelyResetReason:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (void)registerLikelyResetReason:(id)arg1;
+ (void)_registerReasonLocked:(id)arg1;
+ (void)_storeReasonsLocked;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSArray *resetReasons; // @synthesize resetReasons=_resetReasons;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL hasReasons;
@property(readonly, nonatomic) NSDate *likelyResetDate;
- (id)likelyResetReasonWithImmediateReason:(id)arg1;
@property(readonly, nonatomic) NSDate *earliestReasonDate;
- (id)initWithResetReasons:(id)arg1;

@end

