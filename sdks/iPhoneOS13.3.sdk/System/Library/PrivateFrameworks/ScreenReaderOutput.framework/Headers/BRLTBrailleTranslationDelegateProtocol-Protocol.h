//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol BRLTBrailleTranslationDelegateProtocol <NSObject>
- (NSString *)textForPrintBraille:(NSString *)arg1 language:(NSString *)arg2 mode:(NSUInteger)arg3 locations:(id )arg4;
- (NSString *)printBrailleForText:(NSString *)arg1 language:(NSString *)arg2 mode:(NSUInteger)arg3 textPositionsRange:(NSRange)arg4 locations:(id )arg5;
@end

