//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaItemCollection;

@interface PLPhotosDefaults : NSObject
{
    BOOL _shouldPlayMusic;
    BOOL _summarizeMomentSections;
    int _transition;
    MPMediaItemCollection *_musicCollection;
}

+ (int)randomTransition;
+ (id)sharedInstance;
- (id)musicCollection;
- (void)setMusicCollection:(id)arg1;
- (void)setShouldPlayMusic:(BOOL)arg1;
- (BOOL)shouldPlayMusic;
- (void)setTransition:(int)arg1;
- (int)transition;
- (int)transitionForAnimationMovingForward:(BOOL)arg1;
- (BOOL)summarizeMomentSections;
- (id)init;
- (void)_reloadPhotoDefaultValuesAndNotify:(BOOL)arg1;
- (void)reloadPhotoDefaultValues;
- (void)dealloc;

@end

