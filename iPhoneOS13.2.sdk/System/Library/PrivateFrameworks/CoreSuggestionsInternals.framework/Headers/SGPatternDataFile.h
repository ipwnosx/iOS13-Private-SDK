//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface SGPatternDataFile : NSObject
{
    NSData *_fileData;
}

// - (void).cxx_destruct;
- (id)dataForOffset:(id)arg1;
- (id)dataForOffset:(id)arg1 includeTerminator:(int)arg2;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

