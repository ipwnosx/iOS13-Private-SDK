//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSSelfTriggerDetectorDelegate-Protocol.h>

@protocol CSMyriadSelfTriggerCoordinatorDelegate;

@interface CSMyriadSelfTriggerCoordinator : NSObject <CSSelfTriggerDetectorDelegate>
{
    id <CSMyriadSelfTriggerCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <CSMyriadSelfTriggerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2;

@end

