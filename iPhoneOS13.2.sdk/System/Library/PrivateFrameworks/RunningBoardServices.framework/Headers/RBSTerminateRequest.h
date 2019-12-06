//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSRequest.h>

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>

@class NSString, RBSProcessIdentity, RBSTerminateContext;

@interface RBSTerminateRequest : RBSRequest <BSXPCSecureCoding, NSCopying>
{
    BOOL _targetsAllManagedProcesses;
    int _pid;
    RBSProcessIdentity *_processIdentity;
    RBSTerminateContext *_context;
}

+ (BOOL)supportsBSXPCSecureCoding;
@property(readonly, nonatomic) RBSTerminateContext *context; // @synthesize context=_context;
@property(copy, nonatomic) RBSProcessIdentity *processIdentity; // @synthesize processIdentity=_processIdentity;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) BOOL targetsAllManagedProcesses; // @synthesize targetsAllManagedProcesses=_targetsAllManagedProcesses;
// - (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)execute:(out id )arg1 error:(out id )arg2;
- (BOOL)execute:(out id )arg1;
- (id)initForAllManagedWithReason:(id)arg1;
- (id)initWithProcessIdentifier:(id)arg1 context:(id)arg2;
- (id)initWithProcessIdentity:(id)arg1 context:(id)arg2;

@end

