//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface STCommunicationLimits : NSObject <NSCopying>
{
    BOOL _contactsEditable;
    long long _screenTimeCommunicationLimit;
    long long _downtimeCommunicationLimit;
    long long _contactManagementState;
}

@property BOOL contactsEditable; // @synthesize contactsEditable=_contactsEditable;
@property long long contactManagementState; // @synthesize contactManagementState=_contactManagementState;
@property long long downtimeCommunicationLimit; // @synthesize downtimeCommunicationLimit=_downtimeCommunicationLimit;
@property long long screenTimeCommunicationLimit; // @synthesize screenTimeCommunicationLimit=_screenTimeCommunicationLimit;
// - (id)copyWithZone:(_NSZone )arg1;

@end

