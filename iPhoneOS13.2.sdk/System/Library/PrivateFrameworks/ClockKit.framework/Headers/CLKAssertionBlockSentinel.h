//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLKAssertionBlockSentinel : NSObject
{
    BOOL _called;
    BOOL _fatal;
    NSString *_message;
    id /* CDUnknownBlockType */ _fallbackBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ fallbackBlock; // @synthesize fallbackBlock=_fallbackBlock;
@property(nonatomic, getter=shouldBeFatal) BOOL fatal; // @synthesize fatal=_fatal;
@property(getter=isCalled) BOOL called; // @synthesize called=_called;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)markCalled;

@end

