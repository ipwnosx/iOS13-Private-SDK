//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DNDBypassSettings, DNDSEventBehaviorResolver, DNDState, NSString;

@protocol DNDSEventBehaviorResolverDataSource <NSObject>
- (DNDBypassSettings *)eventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1 bypassSettingsForClientIdentifier:(NSString *)arg2;
- (NSUInteger)currentUILockStateForEventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1;
- (DNDState *)currentStateForEventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1;
@end

