//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationController.h>

@class CLKComplicationTemplate;

@interface NTKTimelineComplicationController : NTKComplicationController
{
    BOOL _ignoreNewTemplates;
    CLKComplicationTemplate *_alwaysOnTemplate;
    CLKComplicationTemplate *_lockedTemplate;
}

+ (BOOL)_isLegacy;
@property(readonly, nonatomic) CLKComplicationTemplate *lockedTemplate; // @synthesize lockedTemplate=_lockedTemplate;
@property(nonatomic) BOOL ignoreNewTemplates; // @synthesize ignoreNewTemplates=_ignoreNewTemplates;
@property(readonly, nonatomic) CLKComplicationTemplate *alwaysOnTemplate; // @synthesize alwaysOnTemplate=_alwaysOnTemplate;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CLKComplicationTemplate *activeDisplayTemplate;
- (void)_aggdAppLaunchForTimeTravelDate:(id)arg1 timelineEntryDate:(id)arg2;
- (NSUInteger)_animationForTimelineEntryTransitionFrom:(id)arg1 to:(id)arg2 withAnimationBehavior:(NSUInteger)arg3;

@end

