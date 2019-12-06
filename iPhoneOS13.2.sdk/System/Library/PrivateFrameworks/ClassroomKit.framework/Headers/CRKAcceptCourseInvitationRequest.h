//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class DMFControlGroupIdentifier, NSDictionary, NSString;

@interface CRKAcceptCourseInvitationRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_pin;
    NSDictionary *_studentInformation;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *studentInformation; // @synthesize studentInformation=_studentInformation;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

