//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSURL, NSUUID;

@protocol AFClockItem <NSObject>
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, copy, nonatomic) NSDate *dismissedDate;
@property(readonly, copy, nonatomic) NSDate *firedDate;
@property(readonly, nonatomic) BOOL isFiring;
@property(readonly, nonatomic) NSURL *itemURL;
@property(readonly, nonatomic) NSUUID *itemID;
@end

