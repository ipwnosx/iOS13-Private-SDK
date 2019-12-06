//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSString, TSDCommentStorage, TSTCellStyle, TSTRichTextPayload, TSUFormatReferenceObject, TSWPParagraphStyle;

@interface TSTCell : NSObject <NSCopying>
{
    struct {
        unsigned int mUnused:8;
        unsigned int mValueType:8;
        unsigned int mCellFlags:16;
        union {
            double mDouble;
            struct {
                unsigned int mID;
                NSString *mString;
            } mString;
            NSDate *mDate;
        } mValue;
        unsigned int mCellStyleID;
        TSTCellStyle *mCellStyle;
        unsigned int mTextStyleID;
        TSWPParagraphStyle *mTextStyle;
        unsigned int mRichTextPayloadID;
        TSTRichTextPayload *mRichTextPayload;
        unsigned int mCommentStorageID;
        TSDCommentStorage *mCommentStorage;
        struct {
            unsigned int mExplicitFormatFlags:16;
            unsigned int mCurrentCellFormatID;
//             CDStruct_95e644ef mCurrentCellFormat;
            unsigned int mNumberFormatID;
            TSUFormatReferenceObject *mNumberFormatRef;
            unsigned int mCurrencyFormatID;
            TSUFormatReferenceObject *mCurrencyFormatRef;
            unsigned int mDurationFormatID;
            TSUFormatReferenceObject *mDurationFormatRef;
            unsigned int mDateFormatID;
            TSUFormatReferenceObject *mDateFormatRef;
            unsigned int mControlFormatID;
            TSUFormatReferenceObject *mControlFormatRef;
            unsigned int mCustomFormatID;
            TSUFormatReferenceObject *mCustomFormatRef;
            unsigned int mBaseFormatID;
            TSUFormatReferenceObject *mBaseFormatRef;
            unsigned int mMultipleChoiceListFormatID;
            TSUFormatReferenceObject *mMultipleChoiceListFormatRef;
        } mCellFormats;
        unsigned char mStrokePresetNumber;
    } mPrivate;
}

+ (id)cell;
- (id)description;
- (BOOL)isCellContentsEqualToCell:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
// - (void)writeToStorageRef:(struct TSTCellStorage )arg1;
// - (void)inflateFromStorageRef:(struct TSTCellStorage )arg1 dataStore:(id)arg2 suppressingFormulaInflation:(BOOL)arg3;
// - (void)inflateFromStorageRef:(struct TSTCellStorage )arg1 dataStore:(id)arg2;
- (void)dealloc;
// - (id)initWithStorageRef:(struct TSTCellStorage )arg1 dataStore:(id)arg2;
- (id)initWithCell:(id)arg1;
- (id)init;

@end

