//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXActivityUtilities : NSObject
{
}

+ (id)_tintedInitialsImage:(id)arg1;
+ (id)_initialsImageGradientEndColor;
+ (id)_initialsImageGradientStartColor;
+ (id)textForDate:(id)arg1;
+ (void)requestPersonImageWithTargetSize:(CGSize)arg1 matchingEmail:(id)arg2 orPhone:(id)arg3 withFirstName:(id)arg4 lastName:(id)arg5 prefersPhotosImage:(BOOL)arg6 withCompletion:(CDUnknownBlockType)arg7;
+ (void)requestImageFromPeopleAlbumForPerson:(id)arg1 targetSize:(CGSize)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestContactMatchingEmail:(id)arg1 orPhone:(id)arg2 withFirstName:(id)arg3 lastName:(id)arg4 keysToFetch:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
+ (void)requestMeContactWithCompletion:(CDUnknownBlockType)arg1;
+ (id)sharedWorkQueue;

@end

