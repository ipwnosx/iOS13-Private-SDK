//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSArray, NSSet;

@interface CRKFetchCourseInvitationsResultObject : CATTaskResultObject
{
    NSArray *_courseInvitations;
    NSSet *_acceptedInvitationIdentifiers;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSSet *acceptedInvitationIdentifiers; // @synthesize acceptedInvitationIdentifiers=_acceptedInvitationIdentifiers;
@property(retain, nonatomic) NSArray *courseInvitations; // @synthesize courseInvitations=_courseInvitations;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

