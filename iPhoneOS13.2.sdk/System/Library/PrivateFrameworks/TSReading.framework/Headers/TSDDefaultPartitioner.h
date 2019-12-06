//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDCanvasDelegate-Protocol.h>
#import <TSReading/TSDPartitioner-Protocol.h>

@class TSDCanvas, TSDLayout, TSUPointerKeyDictionary;
@protocol TSDInfo;

@interface TSDDefaultPartitioner : NSObject <TSDPartitioner, TSDCanvasDelegate>
{
    NSObject<TSDInfo> *mInfo;
    TSDCanvas *mCanvas;
    TSDLayout *mLayout;
    TSUPointerKeyDictionary *mMainRepsByCanvas;
    TSUPointerKeyDictionary *mCachedImagesByCanvas;
    TSUPointerKeyDictionary *mPartialRepsByCanvas;
}

- (NSUInteger)p_edgesForHintBounds:(CGRect)arg1;
- (id)p_nextHintForSize:(CGSize)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3;
- (id)p_firstHintForSize:(CGSize)arg1;
- (void)p_teardownLayouts;
- (void)p_generateLayouts;
- (void)i_unregisterPartialRep:(id)arg1;
- (void)i_registerPartialRep:(id)arg1;
- (void)i_removeCachedImageForCanvas:(id)arg1;
- (void)i_setCachedImage:(CGImageRef)arg1 forCanvas:(id)arg2;
- (CGImageRef)i_cachedImageForCanvas:(id)arg1;
- (id)i_repForCanvas:(id)arg1;
- (id)i_layout;
- (id)documentRoot;
- (id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL )arg5;
- (id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL )arg5;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (BOOL)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(BOOL)arg3 delta:(int)arg4;
- (id)hintForLayout:(id)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

