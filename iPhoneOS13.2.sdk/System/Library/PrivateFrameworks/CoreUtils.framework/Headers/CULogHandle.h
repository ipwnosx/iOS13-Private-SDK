//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CULogHandle : NSObject
{
    NSString *_categoryName;
//    struct LogCategory _ucatPtr;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
//  (void)ulogv:(int)arg1 format:(id)arg2 args:(struct __va_list_tag [1])arg3;
- (void)ulogf:(int)arg1 format:(id)arg2;
- (void)ulog:(int)arg1 message:(id)arg2;
- (void)dealloc;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 logFlags:(unsigned int)arg3;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 logLevel:(int)arg3;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 logLevel:(int)arg3 logFlags:(unsigned int)arg4;

@end

