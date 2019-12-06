//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CRKSettingsUIVisibilityProvider;

__attribute__((visibility("hidden")))
@interface PSUIClassroomVisibilityArbitrator : NSObject
{
    NSUInteger _visibilityState;
    id /* CDUnknownBlockType */ _visibilityStateChangeHandler;
    id <CRKSettingsUIVisibilityProvider> _visibilityProvider;
}

@property(retain, nonatomic) id <CRKSettingsUIVisibilityProvider> visibilityProvider; // @synthesize visibilityProvider=_visibilityProvider;
@property(copy, nonatomic) id /* CDUnknownBlockType */ visibilityStateChangeHandler; // @synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler;
@property(nonatomic) NSUInteger visibilityState; // @synthesize visibilityState=_visibilityState;
// - (void).cxx_destruct;
- (void)connectToDaemon;
- (void)reloadVisibilityState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (id)init;

@end

