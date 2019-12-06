//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

@class TNPageLayout;

__attribute__((visibility("hidden")))
@interface TNPageContentLayout : TSDLayout
{
    TNPageLayout *mPageLayout;
    NSUInteger mPageNumber;
}

@property(readonly) NSUInteger pageNumber; // @synthesize pageNumber=mPageNumber;
@property TNPageLayout *pageLayout; // @synthesize pageLayout=mPageLayout;
- (Class)repClassOverride;
- (NSUInteger)pageCount;
- (id)computeLayoutGeometry;
- (void)validate;
- (id)initWithPageLayout:(id)arg1;

@end

