//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentSizer.h>

#import <Silex/SXTextSourceDataSource-Protocol.h>

@class SXTextLayouter, SXTextResizer;

@interface SXTextComponentSizer : SXComponentSizer <SXTextSourceDataSource>
{
    SXTextResizer *_textResizer;
    SXTextLayouter *_textLayouter;
}

@property(retain, nonatomic) SXTextLayouter *textLayouter; // @synthesize textLayouter=_textLayouter;
@property(retain, nonatomic) SXTextResizer *textResizer; // @synthesize textResizer=_textResizer;
// - (void).cxx_destruct;
- (id)textStyleForIdentifier:(id)arg1;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)additionsForTextSource:(id)arg1;
- (id)linkStyleForTextSource:(id)arg1;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (id)defaultComponentTextStylesForTextSource:(id)arg1;
- (id)defaultComponentTextStyleForTextSource:(id)arg1;
- (id)componentTextStyleForTextSource:(id)arg1 inheritingFromDefaultStyles:(BOOL)arg2;
- (id)textResizerForTextSource:(id)arg1;
- (id)existingExclusionPathForComponentWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSUInteger stringLength;
- (double)verticalPositionForRange:(NSRange *)arg1;
- (id)snapLines;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (void)removeAllExclusionPaths;
- (void)addExclusionPath:(id)arg1;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 textComponentLayoutHosting:(id)arg6 textSourceFactory:(id)arg7;

@end

