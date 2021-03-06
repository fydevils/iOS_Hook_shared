//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIButton, UICollectionView;
@protocol ToCCalendarViewDataSource, ToCCalendarViewDelegate;

@interface TocCalendarView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSString *_formatString;
    UIView *_backGroundView;
    UIView *_footView;
    UIButton *_rightBtn;
    NSDictionary *_taskCountDict;
    id <ToCCalendarViewDataSource> _dataSource;
    id <ToCCalendarViewDelegate> _delegate;
    UICollectionView *_collectionView;
    NSMutableArray *_sectionRows;
    NSMutableDictionary *_gradientViewInfos;
    NSDate *_selectFromDate;
    NSDate *_selectToDate;
    long long _rangeDays;
    long long _months;
    long long _itemWidth;
    long long _itemHeight;
    long long _todayMonth;
}

@property(nonatomic) long long todayMonth; // @synthesize todayMonth=_todayMonth;
@property(nonatomic) long long itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) long long itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) long long months; // @synthesize months=_months;
@property(nonatomic) long long rangeDays; // @synthesize rangeDays=_rangeDays;
@property(retain, nonatomic) NSDate *selectToDate; // @synthesize selectToDate=_selectToDate;
@property(retain, nonatomic) NSDate *selectFromDate; // @synthesize selectFromDate=_selectFromDate;
@property(retain, nonatomic) NSMutableDictionary *gradientViewInfos; // @synthesize gradientViewInfos=_gradientViewInfos;
@property(retain, nonatomic) NSMutableArray *sectionRows; // @synthesize sectionRows=_sectionRows;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <ToCCalendarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ToCCalendarViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSDictionary *taskCountDict; // @synthesize taskCountDict=_taskCountDict;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(retain, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
- (void).cxx_destruct;
- (void)setBottomBtnSateType;
- (void)reloadDataCollectionView;
- (void)emptySelectClick;
- (void)allSelectClick;
- (id)todayEnd:(id)arg1;
- (id)todayStart:(id)arg1;
- (void)adjustSelectDate;
- (void)rightBtnAction:(id)arg1;
- (void)initFootView;
- (void)initHeadView;
- (void)didMoveToSuperview;
- (void)recordGradientInfo:(id)arg1 frame:(struct CGRect)arg2;
- (id)dateYYMMConvertToYYMMDD:(id)arg1 withDay:(long long)arg2;
- (id)dateFormatter:(id)arg1;
- (id)yyMMDDStringConvertFromDate:(id)arg1;
- (void)removeAllGTLGradientView;
- (id)gtlGradientView:(struct CGPoint)arg1;
- (id)itemStringDays;
- (void)setupCollectionViews;
- (void)setupInitValues;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)clear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

