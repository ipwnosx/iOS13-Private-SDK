//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray, NSString, NSURL;

@interface DMFOpenURLRequest : DMFTaskRequest
{
    BOOL _lockInApp;
    NSURL *_url;
    NSString *_URLDisplayName;
    NSArray *_handlingBundleIdentifiers;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
@property(copy, nonatomic) NSArray *handlingBundleIdentifiers; // @synthesize handlingBundleIdentifiers=_handlingBundleIdentifiers;
@property(nonatomic) BOOL lockInApp; // @synthesize lockInApp=_lockInApp;
@property(copy, nonatomic) NSString *URLDisplayName; // @synthesize URLDisplayName=_URLDisplayName;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

