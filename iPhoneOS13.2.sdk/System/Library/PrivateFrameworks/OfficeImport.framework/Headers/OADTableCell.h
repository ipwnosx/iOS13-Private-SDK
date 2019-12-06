//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OADTableCellProperties, OADTextBody;

__attribute__((visibility("hidden")))
@interface OADTableCell : NSObject
{
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    BOOL mHorzMerge;
    BOOL mVertMerge;
    int mTopRow;
    int mLeftColumn;
}

// - (void).cxx_destruct;
- (id)description;
- (void)setLeftColumn:(int)arg1;
- (int)leftColumn;
- (void)setTopRow:(int)arg1;
- (int)topRow;
- (BOOL)merge:(int)arg1;
- (void)setVertMerge:(BOOL)arg1;
- (BOOL)vertMerge;
- (void)setHorzMerge:(BOOL)arg1;
- (BOOL)horzMerge;
- (void)setGridSpan:(int)arg1;
- (int)gridSpan;
- (void)setRowSpan:(int)arg1;
- (int)rowSpan;
- (int)spanAlongDir:(int)arg1;
- (void)setProperties:(id)arg1;
- (id)properties;
- (void)setTextBody:(id)arg1;
- (id)textBody;
- (id)init;

@end

