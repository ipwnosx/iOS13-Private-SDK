//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSString, NSURL;

@interface SGURL : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _flags;
    NSURL *_url;
    NSString *_title;
    NSString *_receivedFromHandle;
    NSString *_bundleIdentifier;
    NSString *_groupIdentifier;
    NSString *_documentIdentifier;
    NSString *_documentTitle;
    NSDate *_documentDate;
    double _documentTimeInterval;
    NSDate *_receivedAt;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSDate *receivedAt; // @synthesize receivedAt=_receivedAt;
@property(readonly, nonatomic) double documentTimeInterval; // @synthesize documentTimeInterval=_documentTimeInterval;
@property(readonly, nonatomic) NSDate *documentDate; // @synthesize documentDate=_documentDate;
@property(readonly, nonatomic) NSString *documentTitle; // @synthesize documentTitle=_documentTitle;
@property(readonly, nonatomic) NSString *documentIdentifier; // @synthesize documentIdentifier=_documentIdentifier;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *receivedFromHandle; // @synthesize receivedFromHandle=_receivedFromHandle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (BOOL)isEqualToURL:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 title:(id)arg2 receivedFromHandle:(id)arg3 bundleIdentifier:(id)arg4 groupIdentifier:(id)arg5 documentIdentifier:(id)arg6 documentTitle:(id)arg7 documentDate:(id)arg8 documentTimeInterval:(double)arg9 receivedAt:(id)arg10 flags:(unsigned char)arg11;
- (id)init;

@end

