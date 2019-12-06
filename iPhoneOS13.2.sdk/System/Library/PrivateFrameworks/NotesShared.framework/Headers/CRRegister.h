//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>

@class CRDocument;

@interface CRRegister : NSObject <CRDataType, CRCoding>
{
    CRDocument *_document;
}

+ (id)registerWithType:(NSUInteger)arg1 contents:(id)arg2 document:(id)arg3;
+ (id)registerWithType:(NSUInteger)arg1 contents:(id)arg2;
@property(nonatomic) __weak CRDocument *document; // @synthesize document=_document;
// - (void).cxx_destruct;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
- (BOOL)isEqualContents:(id)arg1;
- (id)initWithDocument:(id)arg1;

@end

