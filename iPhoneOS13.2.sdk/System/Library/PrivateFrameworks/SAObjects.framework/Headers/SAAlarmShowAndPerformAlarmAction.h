//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@protocol SAAlarmAlarmAction;

@interface SAAlarmShowAndPerformAlarmAction : SABaseClientBoundCommand
{
}

+ (id)showAndPerformAlarmActionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showAndPerformAlarmAction;
- (BOOL)requiresResponse;
@property(retain, nonatomic) id <SAAlarmAlarmAction> alarmAction;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

