//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXFont : NSObject
{
}

+ (void)mapFontProperties:(id)arg1 toTextProps:(id)arg2 withEffects:(id)arg3;
+ (void)mapFontProperties:(id)arg1 to:(id)arg2;
//  (id)readParagraphPropertiesFromXmlTextPropertiesParentElement:(struct _xmlNode )arg1 state:(id)arg2;
//  (id)defaultEdRunCollectionForTitle:(id)arg1 titleElement:(struct _xmlNode )arg2 state:(id)arg3;
+ (id)defaultEdRunCollectionWithState:(id)arg1;
//  (id)edRunCollectionFromXmlTextPropertiesElement:(struct _xmlNode )arg1 state:(id)arg2;
+ (id)edFontWithOadCharacterProperties:(id)arg1 state:(id)arg2;
+ (id)edFontWithFullOadCharacterProperties:(id)arg1 state:(id)arg2;
+ (id)edFontWithOadTextBody:(id)arg1 state:(id)arg2;
//  (id)edFontFromXmlTextPropertiesElement:(struct _xmlNode )arg1 state:(id)arg2;

@end

