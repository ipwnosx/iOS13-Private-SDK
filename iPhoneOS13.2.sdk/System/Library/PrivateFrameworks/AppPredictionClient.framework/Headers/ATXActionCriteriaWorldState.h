//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface ATXActionCriteriaWorldState : NSObject
{
    BOOL _fake;
    NSDate *_now;
   struct {
        unsigned int doNotDisturb:1;
        unsigned int telephonyCapability:1;
        unsigned int airDropCapability:1;
        unsigned int airplaneMode:1;
        unsigned int coreRoutineCapability:1;
        unsigned int greenTeaDeviceCapability:1;
        unsigned int internalBuild:1;
        unsigned int lockScreen:1;
    } _flags;
   struct {
        unsigned int now:1;
        unsigned int doNotDisturb:1;
        unsigned int telephonyCapability:1;
        unsigned int airDropCapability:1;
        unsigned int airplaneMode:1;
        unsigned int coreRoutineCapability:1;
        unsigned int greenTeaDeviceCapability:1;
        unsigned int internalBuild:1;
        unsigned int lockScreen:1;
    } _have;
}

// - (void).cxx_destruct;
- (id)propertyWhitelist;
@property(nonatomic) BOOL lockScreen;
@property(nonatomic) BOOL internalBuild;
@property(nonatomic) BOOL greenTeaDeviceCapability;
@property(nonatomic) BOOL coreRoutineCapability;
@property(nonatomic) BOOL airplaneMode;
@property(nonatomic) BOOL airDropCapability;
@property(nonatomic) BOOL telephonyCapability;
@property(nonatomic) BOOL doNotDisturb;
@property(copy, nonatomic) NSDate *now;
- (id)initFake;
- (id)init;

@end

