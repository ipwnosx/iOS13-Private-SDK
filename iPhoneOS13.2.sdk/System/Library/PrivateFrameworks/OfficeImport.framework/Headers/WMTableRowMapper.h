//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class WDTableRow;

__attribute__((visibility("hidden")))
@interface WMTableRowMapper : CMMapper
{
    WDTableRow *mWdTableRow;
    double mHeight;
}

+ (BOOL)isTableRowDeleted:(id)arg1;
// - (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (double)height;
- (id)initWithWDTableRow:(id)arg1 parent:(id)arg2;
- (void)setRowProperties:(id)arg1;

@end

