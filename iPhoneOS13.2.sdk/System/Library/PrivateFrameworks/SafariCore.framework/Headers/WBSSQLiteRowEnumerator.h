//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class WBSSQLiteRow, WBSSQLiteStatement;

@interface WBSSQLiteRowEnumerator : NSEnumerator
{
    WBSSQLiteStatement *_statement;
    WBSSQLiteRow *_row;
    int _lastResultCode;
}

@property(readonly, nonatomic) int lastResultCode; // @synthesize lastResultCode=_lastResultCode;
@property(readonly, nonatomic) WBSSQLiteStatement *statement; // @synthesize statement=_statement;
// - (void).cxx_destruct;
- (id)nextObject;
- (id)initWithResultsOfStatement:(id)arg1;

@end

