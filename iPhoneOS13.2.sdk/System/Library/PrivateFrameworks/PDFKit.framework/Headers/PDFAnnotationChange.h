//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFAnnotation, PDFAnnotationChangePrivate;

__attribute__((visibility("hidden")))
@interface PDFAnnotationChange : NSObject
{
    PDFAnnotationChangePrivate *_private;
}

// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSUInteger changeTimestamp;
@property(readonly, retain, nonatomic) PDFAnnotation *annotation;
@property(readonly, nonatomic) int changeType;
- (id)initWithReorderedAndChangedAnnotation:(id)arg1;
- (id)initWithReorderedAnnotation:(id)arg1;
- (id)initWithRemovedAnnotation:(id)arg1;
- (id)initWithChangedAnnotation:(id)arg1;
- (id)initWithAddedAnnotation:(id)arg1;

@end

