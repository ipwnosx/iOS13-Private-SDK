//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString;

@protocol BRLTBrailleTranslationDelegateProtocol 
- (NSString *)textForPrintBraille:(NSString *)arg1 language:(NSString *)arg2 mode:(unsigned long long)arg3 locations:(id *)arg4;
- (NSString *)printBrailleForText:(NSString *)arg1 language:(NSString *)arg2 mode:(unsigned long long)arg3 textPositionsRange:(struct _NSRange)arg4 locations:(id *)arg5;
@end
