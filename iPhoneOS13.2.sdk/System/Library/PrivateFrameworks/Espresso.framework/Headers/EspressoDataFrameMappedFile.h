//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EspressoDataFrameMappedFile : NSObject
{
    int file_id;
    NSUInteger length;
    NSString *_path;
    char _basePtr;
}

@property char basePtr; // @synthesize basePtr=_basePtr;
@property(retain) NSString *path; // @synthesize path=_path;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

