//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BSProcessHandle, NSString, RBSProcessIdentity;
@protocol FBSServiceFacilityClientContext;

@protocol FBSServiceFacilityClientHandle <NSObject>
@property(retain, nonatomic) id <FBSServiceFacilityClientContext> context;
@property(readonly, copy, nonatomic) NSString *facilityID;
@property(readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property(readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property(readonly, nonatomic) BSProcessHandle *processHandle;
@property(readonly, nonatomic) int pid;
@end

