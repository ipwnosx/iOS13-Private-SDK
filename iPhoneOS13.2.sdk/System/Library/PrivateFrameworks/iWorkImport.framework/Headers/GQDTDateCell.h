//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQDTCell.h>

@class GQDTComputedFormatSpec;

__attribute__((visibility("hidden")))
@interface GQDTDateCell : GQDTCell
{
    struct __CFDate *mDate;
    GQDTComputedFormatSpec *mComputedFormat;
}

- (struct __CFString *)createStringValue;
- (struct __CFString *)getDateFormat;
- (struct __CFDate *)date;
- (void)dealloc;
- (int)readAttributesForDateCell:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end
