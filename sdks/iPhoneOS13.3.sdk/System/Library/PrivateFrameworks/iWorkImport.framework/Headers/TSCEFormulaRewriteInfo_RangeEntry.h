//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewriteInfo_RangeEntry : NSObject
{
    NSRange _range;
    vector_4dc5f307 _orderedUuids;
    unsigned int _offset;
}

@property unsigned int offset; // @synthesize offset=_offset;
@property(readonly) const vector_4dc5f307 orderedUuids; // @synthesize orderedUuids=_orderedUuids;
@property(readonly) NSRange range; // @synthesize range=_range;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)saveToMessage:(struct RewriteRangeEntryArchive )arg1;
- (id)initFromMessage:(const struct RewriteRangeEntryArchive )arg1;
- (id)initWithRange:(NSRange)arg1 orderedUuids:(const vector_4dc5f307 )arg2 offset:(unsigned int)arg3;

@end

