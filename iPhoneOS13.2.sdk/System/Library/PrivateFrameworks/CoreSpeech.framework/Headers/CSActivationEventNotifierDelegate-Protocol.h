//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSActivationEvent, CSActivationEventNotifier;

@protocol CSActivationEventNotifierDelegate <NSObject>
- (void)activationEventNotifier:(CSActivationEventNotifier *)arg1 event:(CSActivationEvent *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

