//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXWorkbook : NSObject
{
}

+ (id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 resourcesOnly:(_Bool)arg4 fileName:(id)arg5 temporaryDirectory:(id)arg6 delegate:(id)arg7 forThumbnail:(_Bool)arg8;
+ (id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 fileName:(id)arg4 temporaryDirectory:(id)arg5 delegate:(id)arg6 forThumbnail:(_Bool)arg7;
+ (void)setupDefaultTextStyleWithState:(id)arg1;
+ (void)setDefaultParagraphProperties:(id)arg1;
+ (void)setupProcessors:(id)arg1;
+ (void)readStringsFrom:(id)arg1 state:(id)arg2;
+ (void)readStylesFrom:(id)arg1 state:(id)arg2;
+ (void)readSheetsFrom:(id)arg1 relationNS:(struct _xmlNs *)arg2 state:(id)arg3 delegate:(id)arg4 forThumbnail:(_Bool)arg5;

@end
