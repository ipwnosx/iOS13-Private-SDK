//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPReplaceAction-Protocol.h>

@class TSWPChangeSession;

__attribute__((visibility("hidden")))
@interface TSWPTrackedDeletion : NSObject <TSWPReplaceAction>
{
    NSRange * _range;
    TSWPChangeSession *_changeSession;
}

// - (void).cxx_destruct;
- (NSRange *)insertedRange;
- (long long)delta;
- (NSUInteger)targetCharIndex;
// - (void)performWithStorage:(id)arg1 delta:(long long)arg2 actionBuilder:(struct TSWPStorageActionBuilder )arg3 withFlags:(unsigned int)arg4 replaceBlock:(CDUnknownBlockType)arg5;
- (id)initWithRange:(NSRange *)arg1 changeSession:(id)arg2;

@end

