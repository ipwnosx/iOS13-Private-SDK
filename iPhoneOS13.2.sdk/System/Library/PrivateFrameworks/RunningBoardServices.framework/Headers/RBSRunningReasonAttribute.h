//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSRunningReasonAttribute : RBSAttribute
{
    NSUInteger _runningReason;
}

+ (id)withReason:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger runningReason; // @synthesize runningReason=_runningReason;
- (id)_initWithReason:(NSUInteger)arg1;
- (id)succinctDescriptionBuilder;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;

@end

