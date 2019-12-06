//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class IKStylesGroup, NSMutableDictionary;

@interface IKStyleFactory : NSObject <NSCopying>
{
    IKStylesGroup *_stylesGroup;
    NSMutableDictionary *_styleListsByClassSelector;
}

+ (id)styleFactoryWithMarkup:(id)arg1 filterBlockedStyles:(BOOL)arg2;
@property(readonly, retain, nonatomic) NSMutableDictionary *styleListsByClassSelector; // @synthesize styleListsByClassSelector=_styleListsByClassSelector;
@property(readonly, retain, nonatomic) IKStylesGroup *stylesGroup; // @synthesize stylesGroup=_stylesGroup;
// - (void).cxx_destruct;
- (id)_collapsedStyleListForSelectors:(id)arg1 targetSelector:(id)arg2 stylesGroup:(id)arg3;
- (void)setViewElementStylesDirty;
- (id)styleListForClassSelector:(id)arg1;
- (id)initWithStylesGroup:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

