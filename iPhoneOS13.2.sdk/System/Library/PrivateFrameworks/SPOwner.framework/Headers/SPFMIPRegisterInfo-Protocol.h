//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSNumber, NSSet, NSString, NSUUID;

@protocol SPFMIPRegisterInfo <NSObject>
@property(readonly, copy, nonatomic) NSDate *lastKeyRollDate;
@property(readonly, copy, nonatomic) NSNumber *beaconZoneCreationErrorCode;
@property(readonly, copy, nonatomic) NSDate *beaconZoneCreationDate;
@property(readonly, copy, nonatomic) NSSet *serviceDisabledReasons;
@property(readonly, copy, nonatomic) NSString *serviceState;
@property(readonly, copy, nonatomic) NSUUID *baUUID;
@end

