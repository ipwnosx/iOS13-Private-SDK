//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSAcquisitionCompletionAttribute : RBSAttribute
{
    NSUInteger _policy;
}

+ (id)attributeWithCompletionPolicy:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger policy; // @synthesize policy=_policy;
- (id)_initWithCompletionPolicy:(NSUInteger)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end

