//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BSStackFrameInfo : NSObject
{
    NSUInteger _address;
    NSString *_functionName;
    NSString *_className;
    NSString *_executablePath;
    NSString *_realFunctionName;
}

@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(readonly, nonatomic) NSUInteger address; // @synthesize address=_address;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *executableName;
- (id)description;
- (id)initWithReturnAddress:(NSUInteger)arg1;

@end

