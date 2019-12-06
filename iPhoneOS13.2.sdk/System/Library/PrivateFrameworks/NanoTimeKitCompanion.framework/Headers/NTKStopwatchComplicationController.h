//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationController.h>

#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class NSDate;

@interface NTKStopwatchComplicationController : NTKComplicationController <NTKTimeTravel>
{
    NSDate *_timeTravelDate;
}

+ (BOOL)_acceptsComplicationType:(NSUInteger)arg1 forDevice:(id)arg2;
@property(retain, nonatomic) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
// - (void).cxx_destruct;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (void)_updateDisplay;
- (void)_handleStopwatchChange;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (id)complicationApplicationIdentifier;
- (void)performTapAction;
- (BOOL)hasTapAction;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_activate;

@end

