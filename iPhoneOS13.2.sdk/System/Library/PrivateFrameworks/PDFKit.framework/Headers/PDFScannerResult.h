//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFScannerResultPrivate;

__attribute__((visibility("hidden")))
@interface PDFScannerResult : NSObject
{
    PDFScannerResultPrivate *_private;
}

// - (void).cxx_destruct;
- (void)setButtonPressed:(BOOL)arg1;
- (BOOL)pointIsOnButton:(CGPoint)arg1 onPageLayer:(id)arg2;
- (BOOL)pointIsOnButton:(CGPoint)arg1;
- (BOOL)containsPoint:(CGPoint)arg1 onPageLayer:(id)arg2;
- (BOOL)containsPoint:(CGPoint)arg1;
// - (void)setHighlightRef:(struct __DDHighlight )arg1;
// - (struct __DDHighlight )highlightRef;
- (BOOL)hasActionsForResult;
- (BOOL)resultIsPastDate;
- (id)rects;
- (CGRect)bounds;
- (id)ddResult;
- (id)initWithDDScannerResult:(id)arg1 foundOnPage:(id)arg2;

@end

