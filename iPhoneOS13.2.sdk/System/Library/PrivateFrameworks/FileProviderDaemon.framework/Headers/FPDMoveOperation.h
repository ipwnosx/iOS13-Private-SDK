//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProviderDaemon/FPDActionOperation.h>

@class FPDActionOperationQueue, FPDMoveReader, FPDMoveWriter;

@interface FPDMoveOperation : FPDActionOperation
{
    FPDMoveReader *_reader;
    FPDMoveWriter *_writer;
    FPDActionOperationQueue *_queue;
}

+ (BOOL)_validateInfo:(id)arg1;
// - (void).cxx_destruct;
- (void)_t_unblockReader;
- (void)dumpStateTo:(id)arg1;
- (void)cancel;
- (void)cancelRoot:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)sendPastUpdatesToClient:(id)arg1;
- (void)main;
- (id)moveInfo;
- (id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3;

@end

