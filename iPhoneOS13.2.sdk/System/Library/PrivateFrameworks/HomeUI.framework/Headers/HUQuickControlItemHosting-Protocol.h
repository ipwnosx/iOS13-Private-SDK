//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSSet;
@protocol HUQuickControlItemUpdating;

@protocol HUQuickControlItemHosting 
@property(nonatomic, getter=areControlsVisible) _Bool controlsVisible;
@property(readonly, copy, nonatomic) NSSet *controlItems;
@property(readonly, nonatomic) id <HUQuickControlItemUpdating> itemUpdater;
- (void)quickControlItemUpdater:(id <HUQuickControlItemUpdating>)arg1 didUpdateResultsForControlItems:(NSSet *)arg2;
@end
