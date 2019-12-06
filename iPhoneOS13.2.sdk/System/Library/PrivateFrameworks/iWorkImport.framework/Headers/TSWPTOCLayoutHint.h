//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDHint-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSWPTOCLayoutHint : NSObject <TSDHint>
{
    NSRange * _charRange;
}

+ (Class)archivedHintClass;
@property(readonly, nonatomic) NSRange * charRange; // @synthesize charRange=_charRange;
// - (void)saveToArchive:(struct TOCLayoutHintArchive )arg1 archiver:(id)arg2;
// - (id)initWithArchive:(const struct TOCLayoutHintArchive )arg1 unarchiver:(id)arg2;
- (BOOL)isFirstHint;
- (id)lastChildHint;
- (id)firstChildHint;
- (void)offsetByDelta:(int)arg1;
- (BOOL)overlapsWithSelectionPath:(id)arg1;
- (id)copyForArchiving;
- (id)init;
- (id)initWithRange:(NSRange *)arg1;

@end

