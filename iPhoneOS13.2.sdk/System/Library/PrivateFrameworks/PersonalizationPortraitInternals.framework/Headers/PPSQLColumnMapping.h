//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PPSQLColumnMapping : NSObject
{
//     const struct PPCompactStringArray _columnAliases;
//     const struct PPCompactStringArray _tableColumnNamesFromSchema;
    NSString *_uniqueTableName;
}

// - (void).cxx_destruct;
- (int)indexForColumnName:(const char )arg1 table:(const char )arg2;
- (int)indexForColumnAlias:(const char )arg1;
- (void)dealloc;
- (id)initWithStatement:(id)arg1;

@end

