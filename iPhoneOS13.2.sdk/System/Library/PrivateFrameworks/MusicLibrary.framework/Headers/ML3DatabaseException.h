//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/MLException.h>

@class NSError;

@interface ML3DatabaseException : MLException
{
    NSError *_sqliteError;
}

+ (id)databaseExceptionWithReason:(id)arg1 sqliteError:(id)arg2;
@property(readonly, nonatomic) NSError *sqliteError; // @synthesize sqliteError=_sqliteError;
// - (void).cxx_destruct;
- (void)_SQLITE_DONE;
- (void)_SQLITE_ROW;
- (void)_SQLITE_NOTADB;
- (void)_SQLITE_RANGE;
- (void)_SQLITE_FORMAT;
- (void)_SQLITE_AUTH;
- (void)_SQLITE_NOLFS;
- (void)_SQLITE_MISUSE;
- (void)_SQLITE_MISMATCH;
- (void)_SQLITE_CONSTRAINT;
- (void)_SQLITE_TOOBIG;
- (void)_SQLITE_SCHEMA;
- (void)_SQLITE_EMPTY;
- (void)_SQLITE_PROTOCOL;
- (void)_SQLITE_CANTOPEN;
- (void)_SQLITE_FULL;
- (void)_SQLITE_NOTFOUND;
- (void)_SQLITE_CORRUPT;
- (void)_SQLITE_IOERR;
- (void)_SQLITE_INTERRUPT;
- (void)_SQLITE_READONLY;
- (void)_SQLITE_NOMEM;
- (void)_SQLITE_LOCKED;
- (void)_SQLITE_BUSY;
- (void)_SQLITE_ABORT;
- (void)_SQLITE_PERM;
- (void)_SQLITE_INTERNAL;
- (void)_SQLITE_ERROR;
- (void)raise;
- (id)init;
- (id)initWithReason:(id)arg1 sqliteError:(id)arg2;

@end

