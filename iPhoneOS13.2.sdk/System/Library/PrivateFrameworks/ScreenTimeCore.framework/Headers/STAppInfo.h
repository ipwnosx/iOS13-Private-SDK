//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface STAppInfo : NSObject
{
    short _platform;
    long long _source;
    NSString *_bundleIdentifier;
    NSString *_displayName;
    NSString *_developerName;
    NSString *_ratingLabel;
    NSURL *_localURL;
    NSURL *_artworkURL;
    NSData *_artworkData;
}

@property(copy) NSData *artworkData; // @synthesize artworkData=_artworkData;
@property(copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(copy, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
@property(copy, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(copy, nonatomic) NSString *developerName; // @synthesize developerName=_developerName;
@property(nonatomic) short platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) long long source; // @synthesize source=_source;
// - (void).cxx_destruct;
- (id)description;

@end

