//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>


@class NSArray;

@interface REMListsDataViewInvocation_dataAccessFetchByObjectIDIncludingMarkedForDelete : REMStoreInvocation <NSSecureCoding>
{
    NSArray *_objectIDs;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *objectIDs; // @synthesize objectIDs=_objectIDs;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectIDs:(id)arg1;

@end

