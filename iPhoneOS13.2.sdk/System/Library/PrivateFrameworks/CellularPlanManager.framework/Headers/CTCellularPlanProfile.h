//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString;

@interface CTCellularPlanProfile : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isSelected;
    BOOL _isBootstrap;
    BOOL _isDisableNotAllowed;
    BOOL _isDeleteNotAllowed;
    BOOL _requiresUserConsent;
    NSData *_profileId;
    NSString *_iccid;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *iccid; // @synthesize iccid=_iccid;
@property(copy, nonatomic) NSData *profileId; // @synthesize profileId=_profileId;
@property(nonatomic) BOOL requiresUserConsent; // @synthesize requiresUserConsent=_requiresUserConsent;
@property(nonatomic) BOOL isDeleteNotAllowed; // @synthesize isDeleteNotAllowed=_isDeleteNotAllowed;
@property(nonatomic) BOOL isDisableNotAllowed; // @synthesize isDisableNotAllowed=_isDisableNotAllowed;
@property(nonatomic) BOOL isBootstrap; // @synthesize isBootstrap=_isBootstrap;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithProfileId:(id)arg1 iccid:(id)arg2 selected:(BOOL)arg3 bootstrap:(BOOL)arg4 disableNotAllowed:(BOOL)arg5 deleteNotAllowed:(BOOL)arg6 requiresUserConsent:(BOOL)arg7;

@end

