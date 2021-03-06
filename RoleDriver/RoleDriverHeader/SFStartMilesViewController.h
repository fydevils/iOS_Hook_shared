//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, SFLastReceiverModel, UIButton, UICollectionView, UILabel, UIScrollView, UITextField;
@protocol SFStartMilesViewControllerDelegate;

@interface SFStartMilesViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, UITextFieldDelegate>
{
    NSString *_deptCode;
    NSString *_taskType;
    NSString *_taskRemark;
    NSString *_startVehicle;
    NSString *_appointVehicleNum;
    id <SFStartMilesViewControllerDelegate> _delegate;
    UITextField *_startMiles;
    UICollectionView *_weatherView;
    UIScrollView *_contentScrollView;
    UILabel *_currentVehicleLabel;
    NSMutableArray *_weatherNameArray;
    NSMutableArray *_weatherImageArray;
    NSMutableArray *_weatherSelectImageArray;
    NSString *_weatherName;
    long long _weatherType;
    UIButton *_startMilesBtn;
    SFLastReceiverModel *_lastReceModel;
}

@property(retain, nonatomic) SFLastReceiverModel *lastReceModel; // @synthesize lastReceModel=_lastReceModel;
@property(retain, nonatomic) UIButton *startMilesBtn; // @synthesize startMilesBtn=_startMilesBtn;
@property(nonatomic) long long weatherType; // @synthesize weatherType=_weatherType;
@property(copy, nonatomic) NSString *weatherName; // @synthesize weatherName=_weatherName;
@property(retain, nonatomic) NSMutableArray *weatherSelectImageArray; // @synthesize weatherSelectImageArray=_weatherSelectImageArray;
@property(retain, nonatomic) NSMutableArray *weatherImageArray; // @synthesize weatherImageArray=_weatherImageArray;
@property(retain, nonatomic) NSMutableArray *weatherNameArray; // @synthesize weatherNameArray=_weatherNameArray;
@property(retain, nonatomic) UILabel *currentVehicleLabel; // @synthesize currentVehicleLabel=_currentVehicleLabel;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) UICollectionView *weatherView; // @synthesize weatherView=_weatherView;
@property(retain, nonatomic) UITextField *startMiles; // @synthesize startMiles=_startMiles;
@property(nonatomic) __weak id <SFStartMilesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *appointVehicleNum; // @synthesize appointVehicleNum=_appointVehicleNum;
@property(copy, nonatomic) NSString *startVehicle; // @synthesize startVehicle=_startVehicle;
@property(copy, nonatomic) NSString *taskRemark; // @synthesize taskRemark=_taskRemark;
@property(copy, nonatomic) NSString *taskType; // @synthesize taskType=_taskType;
@property(copy, nonatomic) NSString *deptCode; // @synthesize deptCode=_deptCode;
- (void).cxx_destruct;
- (long long)getWeatherType:(id)arg1;
- (void)startMilesChange:(id)arg1;
- (void)startMilesBtnAction:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)fetchLastMilesFromService;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)tapAction;
- (id)getCustomTaskRemarkViewWithTaskRemark:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

