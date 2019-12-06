//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriActivation/SiriActivationSource.h>

#import <SiriActivation/SiriButtonSource-Protocol.h>

@class NSMutableArray, SiriLongPressButtonContext;

@interface SiriLongPressButtonSource : SiriActivationSource <SiriButtonSource>
{
    double _longPressInterval;
    long long _buttonIdentifier;
    NSMutableArray *_lock_activityAssertions;
    SiriLongPressButtonContext *_context;
}

+ (id)new;
+ (id)longPressButtonForIdentifier:(long long)arg1;
@property(retain, nonatomic) SiriLongPressButtonContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableArray *lock_activityAssertions; // @synthesize lock_activityAssertions=_lock_activityAssertions;
@property(nonatomic) long long buttonIdentifier; // @synthesize buttonIdentifier=_buttonIdentifier;
@property(nonatomic) double longPressInterval; // @synthesize longPressInterval=_longPressInterval;
// - (void).cxx_destruct;
- (void)didRecognizeLongPress;
- (void)didRecognizeButtonSinglePressUp;
- (id)speechInteractionActivityWithTimestamp:(double)arg1;
- (id)prepareForActivation;
- (void)configureConnection;
- (id)_initWithButtonIdentifier:(long long)arg1;
- (id)init;
- (void)overrideConnectedToCarPlay:(BOOL)arg1;
- (void)overrideConnectedToTrustedCarPlay:(BOOL)arg1;

@end

