//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString;

@interface ML3LanguageResources : NSObject <NSSecureCoding>
{
    NSDictionary *_sectionsInfo;
    NSDictionary *_sortingDetails;
    NSString *_canonicalLanguageIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *canonicalLanguageIdentifier; // @synthesize canonicalLanguageIdentifier=_canonicalLanguageIdentifier;
@property(readonly, nonatomic) NSDictionary *sortingDetails; // @synthesize sortingDetails=_sortingDetails;
@property(readonly, nonatomic) NSDictionary *sectionsInfo; // @synthesize sectionsInfo=_sectionsInfo;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionsInfo:(id)arg1 sortingDetails:(id)arg2 canonicalLanguageIdentifier:(id)arg3;

@end

