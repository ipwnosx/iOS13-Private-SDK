//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPComponentWriteChannel-Protocol.h>

@class TSUZipFileWriter;

__attribute__((visibility("hidden")))
@interface TSPPackageWriterComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    TSUZipFileWriter *_archiveWriter;
    BOOL _isClosed;
}

// - (void).cxx_destruct;
- (void)close;
- (void)writeData:(id)arg1;
- (id)initWithArchiveWriter:(id)arg1;

@end

