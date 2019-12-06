//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HFHomeKitItemProtocol-Protocol.h>

@class NSArray;
@protocol HFHomeKitObject;

@protocol HFCompoundItemProtocol <HFHomeKitItemProtocol>
@property(readonly, nonatomic) id <HFHomeKitObject> primaryHomeKitObject;
@property(readonly, nonatomic) NSUInteger numberOfCompoundItems;
@property(readonly, nonatomic) BOOL isCompoundItem;

@optional
@property(readonly, nonatomic) NSArray *allHomeKitObjects;
@end

