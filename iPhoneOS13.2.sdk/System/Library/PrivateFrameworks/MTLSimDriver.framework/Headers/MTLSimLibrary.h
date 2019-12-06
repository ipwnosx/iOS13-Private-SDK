//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLSimDriver/MTLLibrary-Protocol.h>

@class NSArray, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimLibrary : NSObject <MTLLibrary>
{
    id <MTLDevice> _device;
    unsigned int _libraryRef;
    NSArray *functionNames;
    NSString *label;
}

@property(copy) NSString *label; // @synthesize label;
@property(readonly) NSArray *functionNames; // @synthesize functionNames;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id )arg3;
- (id)newFunctionWithName:(id)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 libraryRef:(unsigned int)arg2;

@end

