//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HUPresenceOptionSelectionConfirmationPrompt : NSObject
{
    BOOL _resetLocationToHomeOnConfirmation;
    NSString *_alertTitle;
    NSString *_alertBody;
}

@property(readonly, nonatomic) BOOL resetLocationToHomeOnConfirmation; // @synthesize resetLocationToHomeOnConfirmation=_resetLocationToHomeOnConfirmation;
@property(readonly, copy, nonatomic) NSString *alertBody; // @synthesize alertBody=_alertBody;
@property(readonly, copy, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
// - (void).cxx_destruct;
- (id)initWithAlertTitle:(id)arg1 alertBody:(id)arg2 resetLocationToHomeOnConfirmation:(BOOL)arg3;
- (id)init;

@end

