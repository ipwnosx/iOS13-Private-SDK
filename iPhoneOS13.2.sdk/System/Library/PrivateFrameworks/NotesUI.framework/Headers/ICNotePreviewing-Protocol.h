//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ICSearchResult;
@protocol ICSearchIndexableNote;

@protocol ICNotePreviewing <NSObject>
@property(readonly, nonatomic) ICSearchResult *searchResult;
@property(readonly, nonatomic) id <ICSearchIndexableNote> note;
- (void)setupPreviewWithInitialFrame:(CGRect)arg1;
- (void)setupPreview;
- (id)initWithNote:(id <ICSearchIndexableNote>)arg1 searchResult:(ICSearchResult *)arg2;
- (id)initWithNote:(id <ICSearchIndexableNote>)arg1;
@end

