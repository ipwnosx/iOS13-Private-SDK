//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSDictionary;

@interface _TVContentRatingBadgeManager : NSObject
{
    _Bool _cachesImages;
    NSCache *_imageCache;
    NSDictionary *_badgeDescriptors;
}

+ (id)_imageForUnknownRatingLabel:(id)arg1;
+ (id)_imageLookupKeyWithRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;
+ (void)_addImageDescriptorToDictionary:(id)arg1 ratingSystem:(long long)arg2 ratingLabel:(id)arg3 resourceName:(id)arg4 isTemplatedImage:(_Bool)arg5;
+ (id)_cleanedRatingLabel:(id)arg1;
+ (id)_badgeDescriptorLookupKeyWithRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *badgeDescriptors; // @synthesize badgeDescriptors=_badgeDescriptors;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) _Bool cachesImages; // @synthesize cachesImages=_cachesImages;
- (id)_badgeDescriptorForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;
- (id)_badgeDescriptorForContentRating:(id)arg1;
- (_Bool)isTemplatedBadgeForContentRating:(id)arg1;
- (id)badgeForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2 drawUnknownRatingBadge:(_Bool)arg3;
- (id)badgeForContentRating:(id)arg1 drawUnknownRatingBadge:(_Bool)arg2;

@end
