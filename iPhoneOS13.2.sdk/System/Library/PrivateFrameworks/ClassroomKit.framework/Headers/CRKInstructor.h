//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class DMFControlSessionIdentifier, NSData, NSString;

@interface CRKInstructor : NSObject <NSSecureCoding>
{
    DMFControlSessionIdentifier *_sessionIdentifier;
    NSString *_userIdentifier;
    NSString *_displayName;
    NSString *_courseName;
    NSData *_imageData;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSString *courseName; // @synthesize courseName=_courseName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(copy, nonatomic) DMFControlSessionIdentifier *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToInstructor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end

