//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface SAAlarmAlarmModification : AceObject <SAAceSerializable>
{
}

+ (id)alarmModificationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)alarmModification;
@property(copy, nonatomic) NSArray *removedFrequency;
@property(copy, nonatomic) NSNumber *minute;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSNumber *hour;
@property(copy, nonatomic) NSNumber *enabled;
@property(copy, nonatomic) NSURL *alarmId;
@property(copy, nonatomic) NSArray *addedFrequency;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

