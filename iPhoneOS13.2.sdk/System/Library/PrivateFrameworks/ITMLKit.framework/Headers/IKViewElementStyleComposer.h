//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKStyleList, IKViewElementStyle;

@interface IKViewElementStyleComposer : NSObject
{
    BOOL _requiresMediaQueryEvaluation;
    BOOL _compositionDone;
    IKViewElementStyleComposer *_defaultStyleComposer;
    IKViewElementStyleComposer *_parentStyleComposer;
    IKStyleList *_styleList;
    IKViewElementStyle *_elementStyleOverrides;
    IKViewElementStyle *_composedSansDefaultStyle;
    IKViewElementStyle *_composedStyle;
}

+ (id)styleComposerWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4;
@property(retain, nonatomic) IKViewElementStyle *composedStyle; // @synthesize composedStyle=_composedStyle;
@property(retain, nonatomic) IKViewElementStyle *composedSansDefaultStyle; // @synthesize composedSansDefaultStyle=_composedSansDefaultStyle;
@property(readonly, nonatomic, getter=isCompositionDone) BOOL compositionDone; // @synthesize compositionDone=_compositionDone;
@property(readonly, retain, nonatomic) IKViewElementStyle *elementStyleOverrides; // @synthesize elementStyleOverrides=_elementStyleOverrides;
@property(readonly, retain, nonatomic) IKStyleList *styleList; // @synthesize styleList=_styleList;
@property(readonly, retain, nonatomic) IKViewElementStyleComposer *parentStyleComposer; // @synthesize parentStyleComposer=_parentStyleComposer;
@property(readonly, retain, nonatomic) IKViewElementStyleComposer *defaultStyleComposer; // @synthesize defaultStyleComposer=_defaultStyleComposer;
@property(readonly, nonatomic) BOOL requiresMediaQueryEvaluation; // @synthesize requiresMediaQueryEvaluation=_requiresMediaQueryEvaluation;
// - (void).cxx_destruct;
- (void)_composeWithMediaQueryEvaluator:(id)arg1;
- (id)composedSansDefaultStyleWithMediaQueryEvaluator:(id)arg1;
- (id)consolidatedDefaultStyleList;
- (void)setNeedsRecomposition;
- (id)composedStyleWithMediaQueryEvaluator:(id)arg1;
- (id)initWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4;

@end

