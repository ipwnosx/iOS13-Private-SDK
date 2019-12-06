//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PDSlideChild.h>

@class PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PDSlideLayout : PDSlideChild
{
    int mSlideLayoutType;
    PDSlideMaster *mSlideMaster;
}

// - (void).cxx_destruct;
- (id)description;
- (void)doneWithContent;
- (id)parentSlideBase;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)transition;
- (id)background;
- (id)defaultTheme;
@property __weak PDSlideMaster *slideMaster; // @synthesize slideMaster=mSlideMaster;
- (void)setSlideLayoutType:(int)arg1;
- (int)slideLayoutType;
- (id)initWithSlideMaster:(id)arg1;

@end

