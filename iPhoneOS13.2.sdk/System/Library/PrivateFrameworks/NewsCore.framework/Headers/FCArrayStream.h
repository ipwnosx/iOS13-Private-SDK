//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCStreaming-Protocol.h>

@class NSArray;

@interface FCArrayStream : NSObject <FCStreaming>
{
    NSArray *_array;
    NSUInteger _index;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;
- (id)fetchMoreResultsWithLimit:(NSUInteger)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithArray:(id)arg1;
- (id)init;

@end

