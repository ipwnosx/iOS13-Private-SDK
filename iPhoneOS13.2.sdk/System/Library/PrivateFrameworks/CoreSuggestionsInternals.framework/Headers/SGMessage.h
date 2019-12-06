//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGSpotlightIdentifiers-Protocol.h>

@class NSArray, NSDate, NSString;

@interface SGMessage : NSObject <NSSecureCoding, NSCopying, SGSpotlightIdentifiers>
{
    BOOL _isSent;
    NSString *_subject;
    NSString *_textContent;
    NSDate *_date;
    NSString *_bundleIdentifier;
    NSString *_uniqueIdentifier;
    NSString *_domainIdentifier;
    NSArray *_attachments;
    NSArray *_accountHandles;
    NSString *_accountType;
}

+ (id)fromDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)messageWithSearchableItem:(id)arg1;
@property(copy, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
@property(nonatomic) BOOL isSent; // @synthesize isSent=_isSent;
@property(copy, nonatomic) NSArray *accountHandles; // @synthesize accountHandles=_accountHandles;
@property(readonly, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *textContent; // @synthesize textContent=_textContent;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
// - (void).cxx_destruct;
- (id)spotlightUniqueIdentifier;
- (id)spotlightDomainIdentifier;
- (id)spotlightBundleIdentifier;
- (NSUInteger)contentLength;
- (id)asDictionary;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqualToMessage:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchableItem:(id)arg1;
- (id)init;
- (id)spotlightReference;

@end

