//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentLayout-Protocol.h>

@protocol SXEdgeSpacing;

@interface SXInsertComponentLayout : NSObject <SXComponentLayout>
{
//    struct _SXComponentContentInset _contentInset;
    NSUInteger _ignoreDocumentGutter;
    NSUInteger _ignoreDocumentMargin;
    id <SXEdgeSpacing> _margin;
    NSUInteger _horizontalContentAlignment;
    id <SXEdgeSpacing> _padding;
    NSUInteger _ignoreViewportPadding;
    NSRange * _columnRange;
//    struct _SXConvertibleValue _minimumHeight;
//    struct _SXConvertibleValue _maximumContentWidth;
//    struct _SXConvertibleValue _suggestedHeight;
}

@property(readonly, nonatomic) NSUInteger ignoreViewportPadding; // @synthesize ignoreViewportPadding=_ignoreViewportPadding;
@property(readonly, nonatomic) id <SXEdgeSpacing> padding; // @synthesize padding=_padding;
// property(readonly, nonatomic) struct _SXConvertibleValue suggestedHeight; // @synthesize suggestedHeight=_suggestedHeight;
@property(readonly, nonatomic) NSUInteger horizontalContentAlignment; // @synthesize horizontalContentAlignment=_horizontalContentAlignment;
@property(retain, nonatomic) id <SXEdgeSpacing> margin; // @synthesize margin=_margin;
// property(readonly, nonatomic) struct _SXConvertibleValue maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
// property(readonly, nonatomic) struct _SXConvertibleValue minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) NSUInteger ignoreDocumentMargin; // @synthesize ignoreDocumentMargin=_ignoreDocumentMargin;
@property(readonly, nonatomic) NSUInteger ignoreDocumentGutter; // @synthesize ignoreDocumentGutter=_ignoreDocumentGutter;
@property(readonly, nonatomic) NSRange * columnRange; // @synthesize columnRange=_columnRange;
// property(readonly, nonatomic) struct _SXComponentContentInset contentInset; // @synthesize contentInset=_contentInset;
// - (void).cxx_destruct;
- (id)initWithColumnRange:(NSRange *)arg1;

@end

