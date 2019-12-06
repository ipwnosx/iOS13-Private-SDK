//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class DMFControlGroupIdentifier, NSDictionary;

@interface CRKBuildASMConfigurationRequest : CATTaskRequest
{
    NSDictionary *_existingASMConfiguration;
    DMFControlGroupIdentifier *_courseIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
@property(copy, nonatomic) NSDictionary *existingASMConfiguration; // @synthesize existingASMConfiguration=_existingASMConfiguration;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

