//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CXIndex : NSObject
{
    int _cancel;
    NSString *_path;
//     struct __SI _skRef;
}

+ (void)initialize;
// @property(readonly, nonatomic) struct __SI skRef; // @synthesize skRef=_skRef;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) int cancel; // @synthesize cancel=_cancel;
- (BOOL)addContent:(id)arg1 transaction:(unsigned int )arg2;
- (BOOL)addContent:(id)arg1 metadata:(id)arg2 doc:(unsigned int)arg3 transaction:(unsigned int )arg4;
- (void)deleteDocument:(unsigned int)arg1;
- (void)deleteDocumentByName:(id)arg1;
- (BOOL)addContent:(id)arg1 metadata:(id)arg2 docName:(id)arg3 transaction:(unsigned int )arg4;
- (BOOL)compact:(unsigned int)arg1;
- (BOOL)commit;
- (BOOL)flush:(unsigned int)arg1;
- (void)close:(unsigned int)arg1;
// - (struct __SI )siIndexPtr;
- (int )cancelPtr;
- (void)dealloc;
- (BOOL)create:(unsigned int)arg1;
- (BOOL)open:(unsigned int)arg1 recoveredTransactionId:(unsigned int )arg2;
- (id)initWithPath:(id)arg1;

@end

