//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MCDomainsCacheEntry : NSObject
{
    BOOL _subdomainsMatch;
    NSString *_domain;
    NSString *_path;
    NSNumber *_port;
}

+ (id)normalizedPatternString:(id)arg1;
@property(retain, nonatomic) NSNumber *port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) BOOL subdomainsMatch; // @synthesize subdomainsMatch=_subdomainsMatch;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)matchesURL:(id)arg1;
- (id)initWithPattern:(id)arg1;

@end

