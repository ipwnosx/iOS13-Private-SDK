//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAlarmObject.h>

#import <SAObjects/SASyncWrap-Protocol.h>

@class NSNumber;

@interface SAAlarmAceAlarmWrap : SAAlarmObject <SASyncWrap>
{
}

+ (id)aceAlarmWrapWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceAlarmWrap;
@property(copy, nonatomic) NSNumber *generation;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

