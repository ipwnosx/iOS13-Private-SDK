//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAIntentGroupSiriKitParameterMetadata : AceObject <SAAceSerializable>
{
}

+ (id)siriKitParameterMetadataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)siriKitParameterMetadata;
@property(nonatomic) BOOL shouldResolve;
@property(copy, nonatomic) NSString *parameterName;
@property(copy, nonatomic) NSArray *confirmationStates;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

