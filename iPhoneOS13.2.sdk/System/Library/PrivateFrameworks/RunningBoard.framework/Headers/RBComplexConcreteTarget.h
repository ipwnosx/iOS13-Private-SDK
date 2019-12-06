//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/RBConcreteTarget.h>

@class NSString, RBProcess, RBSProcessIdentity;

__attribute__((visibility("hidden")))
@interface RBComplexConcreteTarget : RBConcreteTarget
{
    NSString *_description;
    RBProcess *_process;
    RBSProcessIdentity *_identity;
    NSString *_environment;
}

- (id)environment;
- (id)identity;
- (id)process;
- (id)description;
// - (void).cxx_destruct;
- (id)_initWithProcess:(id)arg1 identity:(id)arg2 environment:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)createRBSTarget;
- (BOOL)isSystem;

@end

