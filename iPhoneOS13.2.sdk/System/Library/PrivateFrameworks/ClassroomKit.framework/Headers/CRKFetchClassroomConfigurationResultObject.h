//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSDictionary;

@interface CRKFetchClassroomConfigurationResultObject : CATTaskResultObject
{
    NSDictionary *_configuration;
    NSDictionary *_configurationsByType;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *configurationsByType; // @synthesize configurationsByType=_configurationsByType;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

