//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MIStoreMetadataSubGenre : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_genre;
    NSNumber *_genreID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *genreID; // @synthesize genreID=_genreID;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithGenre:(id)arg1 genreID:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

