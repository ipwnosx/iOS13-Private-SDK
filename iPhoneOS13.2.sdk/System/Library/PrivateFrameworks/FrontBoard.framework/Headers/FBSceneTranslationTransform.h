//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBSceneTransform.h>

@interface FBSceneTranslationTransform : FBSceneTransform
{
    CGPoint _translation;
}

@property(nonatomic) CGPoint translation; // @synthesize translation=_translation;
- (void)_updateTransform;
- (id)description;
- (id)initWithTranslation:(CGPoint)arg1;

@end

