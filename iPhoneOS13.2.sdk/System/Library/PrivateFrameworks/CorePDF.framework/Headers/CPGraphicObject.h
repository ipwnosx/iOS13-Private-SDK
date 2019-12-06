//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPChunk.h>

@class CPParagraph, CPTextLine;
@protocol CPGraphicUser;

__attribute__((visibility("hidden")))
@interface CPGraphicObject : CPChunk
{
    unsigned int clipIndex;
    CGRect renderedBounds;
    BOOL isInZoneBorder;
    int zoneGraphicType;
    CPTextLine *anchoringTextLine;
    CPParagraph *anchoringParagraph;
    CPChunk<CPGraphicUser> *user;
}

@property(retain, nonatomic) CPParagraph *anchoringParagraph; // @synthesize anchoringParagraph;
@property(nonatomic) unsigned int clipIndex; // @synthesize clipIndex;
- (id)user;
- (void)setUser:(id)arg1;
- (id)anchoringTextLine;
- (void)setAnchoringTextLine:(id)arg1;
- (void)setZoneGraphicType:(int)arg1;
- (int)zoneGraphicType;
- (void)setIsInZoneBorder:(BOOL)arg1;
- (BOOL)isInZoneBorder;
- (BOOL)isIndivisible;
- (BOOL)isVisible;
- (BOOL)canBeContainer;
- (BOOL)isNarrow;
- (unsigned short)unicode;
- (CGRect)renderedBounds;
- (void)dealloc;
- (id)init;

@end

