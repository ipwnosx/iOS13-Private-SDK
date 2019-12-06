//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class DMFControlGroupIdentifier, NSArray, NSString;

@interface CRKSetCoursePropertiesRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_courseName;
    NSString *_courseDescription;
    NSArray *_anchorCertificates;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *anchorCertificates; // @synthesize anchorCertificates=_anchorCertificates;
@property(copy, nonatomic) NSString *courseDescription; // @synthesize courseDescription=_courseDescription;
@property(copy, nonatomic) NSString *courseName; // @synthesize courseName=_courseName;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

