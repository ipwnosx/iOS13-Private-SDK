//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyEventMap.h>

@interface TIKeyEventMap_zh : TIKeyEventMap
{
}

+ (id)punctuationMap_zh_Hant;
+ (id)punctuationMap_zh_Hans;
+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;
- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(NSUInteger)arg3 keyboardState:(id)arg4;
- (BOOL)isURLOrEmailKeyboardInKeyboardState:(id)arg1;
- (id)punctuationMap;

@end

