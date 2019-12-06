//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDPartitioner-Protocol.h>

@class TSWPTOCInfo;

__attribute__((visibility("hidden")))
@interface TSWPTOCPartitioner : NSObject <TSDPartitioner>
{
    TSWPTOCInfo *_info;
}

@property(readonly, nonatomic) __weak TSWPTOCInfo *info; // @synthesize info=_info;
// - (void).cxx_destruct;
- (id)hintForLayout:(id)arg1;
- (BOOL)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(BOOL)arg3 delta:(int)arg4;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL )arg5;
- (void)setLayoutPartititionsRightToLeft:(BOOL)arg1 contentPartitionsRightToLeft:(BOOL)arg2;
- (id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL )arg5;
- (id)initWithInfo:(id)arg1;

@end

