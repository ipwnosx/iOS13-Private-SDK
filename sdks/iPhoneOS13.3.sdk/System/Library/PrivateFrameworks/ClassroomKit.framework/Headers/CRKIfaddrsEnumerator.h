//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class CRKIfaddrs;

@interface CRKIfaddrsEnumerator : NSEnumerator
{
    struct ifaddrs mInterfaces;
    CRKIfaddrs *mCurrentInterface;
}

+ (id)enumeratorWithError:(id )arg1;
// - (void).cxx_destruct;
- (id)nextObject;
- (id)initWithInterfaces:(struct ifaddrs )arg1;
- (id)initWithError:(id )arg1;
- (id)init;
- (void)dealloc;

@end
