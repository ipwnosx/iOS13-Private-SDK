//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <JavaScriptCore/JSContext.h>

@interface CRJSContext : JSContext
{
}

+ (id)sharedContext;
- (id)_cardWithTitle:(id)arg1 cardSections:(id)arg2 interaction:(id)arg3 error:(id )arg4;
- (void)_createCard:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)evaluateScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithVirtualMachine:(id)arg1;

@end

