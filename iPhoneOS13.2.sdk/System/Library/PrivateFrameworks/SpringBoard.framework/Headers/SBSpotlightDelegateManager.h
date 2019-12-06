//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SPUIRemoteSearchViewDelegate-Protocol.h>

@protocol SBMultiplexedSpotlightDelegate;

@interface SBSpotlightDelegateManager : NSObject <SPUIRemoteSearchViewDelegate>
{
    id <SBMultiplexedSpotlightDelegate> _delegates[3];
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)dismissSearchView;
- (void)_modifyDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (id)activeDelegate;
- (void)removeSpotlightDelegateForLevel:(NSUInteger)arg1;
- (void)setSpotlightDelegate:(id)arg1 forLevel:(NSUInteger)arg2;

@end

