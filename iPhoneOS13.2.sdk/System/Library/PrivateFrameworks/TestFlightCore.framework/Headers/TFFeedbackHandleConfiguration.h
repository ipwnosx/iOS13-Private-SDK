//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface TFFeedbackHandleConfiguration : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    NSString *_incidentId;
}

+ (id)configurationFromUserInfo:(id)arg1;
@property(copy, nonatomic) NSString *incidentId; // @synthesize incidentId=_incidentId;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)encodedAsUserInfo;
- (id)initWithBundleIdentifier:(id)arg1;

@end

