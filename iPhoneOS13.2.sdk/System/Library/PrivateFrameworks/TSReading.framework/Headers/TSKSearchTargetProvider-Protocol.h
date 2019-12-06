//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol TSKSearchTargetProvider <NSObject>
- (NSUInteger)nextRootSearchTargetIndexFromIndex:(NSUInteger)arg1 forString:(NSString *)arg2 options:(NSUInteger)arg3 inDirection:(NSUInteger)arg4;
- (void)withRootSearchTargetAtIndex:(NSUInteger)arg1 executeBlock:(void (^)(id <TSKSearchTarget>))arg2;
- (NSUInteger)rootSearchTargetCountThroughIndex:(NSUInteger)arg1;
@end

