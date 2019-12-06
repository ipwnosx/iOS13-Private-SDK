//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class NSMutableSet, NSSet;

@interface HUCameraUsageOptionItemProvider : HFItemProvider
{
    NSMutableSet *_items;
    NSUInteger _presenceEventType;
    NSUInteger _displayStyle;
    NSSet *_cameraProfiles;
}

@property(readonly, copy, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(readonly, nonatomic) NSUInteger displayStyle; // @synthesize displayStyle=_displayStyle;
@property(readonly, nonatomic) NSUInteger presenceEventType; // @synthesize presenceEventType=_presenceEventType;
@property(readonly, nonatomic) NSMutableSet *items; // @synthesize items=_items;
// - (void).cxx_destruct;
- (id)invalidationReasons;
- (id)reloadItems;
- (id)init;
- (id)initWithPresenceEventType:(NSUInteger)arg1 cameraProfiles:(id)arg2;

@end

