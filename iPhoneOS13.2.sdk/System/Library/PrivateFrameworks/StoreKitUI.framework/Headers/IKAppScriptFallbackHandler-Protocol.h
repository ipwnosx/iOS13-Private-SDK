//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, NSString;

@protocol IKAppScriptFallbackHandler <NSObject>
- (void)scriptEvaluated:(NSString *)arg1;
- (NSString *)retrieveScript:(id )arg1;
- (BOOL)canFallbackForError:(NSError *)arg1;
@end

