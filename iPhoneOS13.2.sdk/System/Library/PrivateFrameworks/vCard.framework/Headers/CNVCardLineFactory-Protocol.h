//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSData, NSString;
@protocol CNVCardLine, CNVCardParameterLine;

@protocol CNVCardLineFactory 
- (id <CNVCardLine>)versionPlaceholderLine;
- (id <CNVCardLine>)lineWithLiteralValue:(NSData *)arg1;
- (id <CNVCardParameterLine>)dataLineWithName:(NSString *)arg1 value:(NSData *)arg2;
- (id <CNVCardParameterLine>)arrayLineWithName:(NSString *)arg1 value:(NSArray *)arg2 itemSeparator:(NSString *)arg3;
- (id <CNVCardParameterLine>)arrayLineWithName:(NSString *)arg1 value:(NSArray *)arg2;
- (id <CNVCardParameterLine>)stringLineWithName:(NSString *)arg1 value:(NSString *)arg2;
@end
