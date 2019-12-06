//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMShareRelationshipRestrictions, NSNumber, NSString;

@interface EDAMMemberShareRelationship : FATObject
{
    NSString *_displayName;
    NSNumber *_recipientUserId;
    NSNumber *_bestPrivilege;
    NSNumber *_individualPrivilege;
    EDAMShareRelationshipRestrictions *_restrictions;
    NSNumber *_sharerUserId;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *sharerUserId; // @synthesize sharerUserId=_sharerUserId;
@property(retain, nonatomic) EDAMShareRelationshipRestrictions *restrictions; // @synthesize restrictions=_restrictions;
@property(retain, nonatomic) NSNumber *individualPrivilege; // @synthesize individualPrivilege=_individualPrivilege;
@property(retain, nonatomic) NSNumber *bestPrivilege; // @synthesize bestPrivilege=_bestPrivilege;
@property(retain, nonatomic) NSNumber *recipientUserId; // @synthesize recipientUserId=_recipientUserId;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
// - (void).cxx_destruct;

@end

