//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSPersonNameComponents, NSString;

@interface CNCoreDelegateInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSNumber *_dsid;
    NSString *_altDSID;
    NSString *_appleID;
    NSString *_principalPath;
    NSPersonNameComponents *_nameComponents;
    BOOL _isMe;
}

+ (id)hardCodedPrincipalPathForDSID:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)nameComponentsForFamilyMember:(id)arg1;
@property(readonly, nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property(readonly, copy, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(readonly, copy, nonatomic) NSString *principalPath; // @synthesize principalPath=_principalPath;
@property(readonly, copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly, copy, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
// - (void).cxx_destruct;
- (id)_hardCodedPrincipalPathForFamilyMember:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithFamilyMember:(id)arg1;
- (id)initWithDSID:(id)arg1 altDSID:(id)arg2 appleID:(id)arg3 principalPath:(id)arg4 nameComponents:(id)arg5 isMe:(BOOL)arg6;
- (id)initWithAltDSID:(id)arg1;
- (id)init;

@end

