//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIMPMediaEntityIdentifier.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VUIMPSeasonMediaCollectionIdentifier : VUIMPMediaEntityIdentifier
{
    NSNumber *_seasonNumber;
}

+ (id)seasonIdentifierWithMediaItem:(id)arg1;
+ (id)requiredMPPropertyNames;
@property(copy, nonatomic) NSNumber *seasonNumber; // @synthesize seasonNumber=_seasonNumber;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPersistentID:(id)arg1 seasonNumber:(id)arg2;
- (id)initWithPersistentID:(id)arg1 mediaEntityType:(id)arg2;

@end

