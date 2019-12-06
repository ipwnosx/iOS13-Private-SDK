//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray, NSString, NSURL;

@interface SPApplication : NSObject <NSSecureCoding>
{
    NSString *_longDisplayName;
    BOOL _isWebClip;
    NSString *_displayIdentifier;
    NSMutableArray *_keywords;
    NSURL *_URL;
    NSString *_shortVersion;
    NSString *_displayNameInternal;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSString *displayNameInternal; // @synthesize displayNameInternal=_displayNameInternal;
@property(nonatomic) BOOL isWebClip; // @synthesize isWebClip=_isWebClip;
@property(retain, nonatomic) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSMutableArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
// - (void).cxx_destruct;
@property(retain, nonatomic) NSString *longDisplayName;
@property(retain, nonatomic) NSString *displayName;
@property(readonly, nonatomic) BOOL displayNameLoaded;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)copySearchFoundationResult:(id)arg1;

@end

