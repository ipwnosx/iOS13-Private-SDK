//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TSKAnnotation;

__attribute__((visibility("hidden")))
@interface TSAAnnotationReference : NSObject
{
    id <TSKAnnotation> _annotation;
    NSUInteger _pageIndex;
}

@property(nonatomic) NSUInteger pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) id <TSKAnnotation> annotation; // @synthesize annotation=_annotation;
// - (void).cxx_destruct;
- (BOOL)isValidAndInDocument;
- (BOOL)referencesAnnotation:(id)arg1;

@end

