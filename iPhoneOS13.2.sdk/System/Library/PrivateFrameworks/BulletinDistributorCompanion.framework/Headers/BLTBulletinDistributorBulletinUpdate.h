//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BBBulletin;

@interface BLTBulletinDistributorBulletinUpdate : NSObject
{
    NSUInteger _updateType;
    BBBulletin *_bulletin;
    NSUInteger _feed;
}

+ (id)bulletinUpdateWithType:(NSUInteger)arg1 bulletin:(id)arg2 feed:(NSUInteger)arg3;
@property(nonatomic) NSUInteger feed; // @synthesize feed=_feed;
@property(retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(nonatomic) NSUInteger updateType; // @synthesize updateType=_updateType;
// - (void).cxx_destruct;

@end

