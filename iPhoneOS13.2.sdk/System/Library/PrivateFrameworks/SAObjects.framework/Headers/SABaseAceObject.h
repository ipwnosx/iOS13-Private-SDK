//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceReferable-Protocol.h>

@class NSString;

@interface SABaseAceObject : AceObject <SAAceReferable>
{
}

+ (id)baseAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)baseAceObject;
@property(copy, nonatomic) NSString *metricsContext;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

