//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPItem, NSData;
@protocol FPXPCAutomaticErrorProxy><FPXEnumerator;

__attribute__((visibility("hidden")))
@interface FPDItemIteratorEnumState : NSObject
{
    FPItem *_parentItem;
    id <FPXPCAutomaticErrorProxy><FPXEnumerator> _enumerator;
    NSData *_nextPage;
}

@property(retain, nonatomic) NSData *nextPage; // @synthesize nextPage=_nextPage;
@property(retain, nonatomic) id <FPXPCAutomaticErrorProxy><FPXEnumerator> enumerator; // @synthesize enumerator=_enumerator;
@property(retain, nonatomic) FPItem *parentItem; // @synthesize parentItem=_parentItem;
// - (void).cxx_destruct;

@end

