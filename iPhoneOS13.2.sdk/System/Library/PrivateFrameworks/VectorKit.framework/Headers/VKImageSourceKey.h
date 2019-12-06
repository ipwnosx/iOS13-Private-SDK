//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VKImageSourceKey : NSObject
{
    unsigned int _keyType;
    NSString *_imageName;
    NSString *_shieldText;
    NSString *_shieldTextLocale;
    unsigned int _shieldType;
    Color_c5f82c4a _shieldColor;
    unsigned int _iconAttributeKey;
    unsigned int _iconAttributeValue;
    unsigned char _dataType;
    NSString *_text;
    NSString *_relatedText;
    BOOL _hasDataValue;
    unsigned int _dataValue;
    CGPoint _imageCenter;
    NSArray *_fallbackImageKeys;
}

@property(retain, nonatomic) NSArray *fallbackImageKeys; // @synthesize fallbackImageKeys=_fallbackImageKeys;
@property(nonatomic) CGPoint imageCenter; // @synthesize imageCenter=_imageCenter;
@property(nonatomic) unsigned int dataValue; // @synthesize dataValue=_dataValue;
@property(readonly, nonatomic) BOOL hasDataValue; // @synthesize hasDataValue=_hasDataValue;
@property(retain, nonatomic) NSString *relatedText; // @synthesize relatedText=_relatedText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned char dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned int iconAttributeValue; // @synthesize iconAttributeValue=_iconAttributeValue;
@property(readonly, nonatomic) unsigned int iconAttributeKey; // @synthesize iconAttributeKey=_iconAttributeKey;
@property(readonly, nonatomic) unsigned int shieldType; // @synthesize shieldType=_shieldType;
@property(readonly, nonatomic) NSString *shieldTextLocale; // @synthesize shieldTextLocale=_shieldTextLocale;
@property(readonly, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) unsigned int keyType; // @synthesize keyType=_keyType;
- (id).cxx_construct;
- (void)dealloc;
// @property(readonly, nonatomic) CDStruct_83984b6f transitLineColor;
- (id)initWithLabelImageKey:(const shared_ptr_85e81048 )arg1;
- (id)initWithIconName:(const char )arg1;
- (id)initWithIconAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2;
- (id)initWithShieldName:(const char )arg1 text:(const char )arg2 locale:(const char )arg3 color:(Color_c5f82c4a)arg4;
- (id)initWithShieldText:(const char )arg1 locale:(const char )arg2 type:(unsigned int)arg3 color:(Color_c5f82c4a)arg4;
- (id)initWithDataType:(unsigned char)arg1;
- (id)_initWithKeyType:(unsigned int)arg1;

@end

