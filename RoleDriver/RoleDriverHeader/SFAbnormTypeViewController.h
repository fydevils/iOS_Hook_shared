//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSString, SFTaskTypeModel, UICollectionView;
@protocol SFAbnormTypeViewControllerDelegate;

@interface SFAbnormTypeViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    int _abnormalSelectType;
    id <SFAbnormTypeViewControllerDelegate> _delegate;
    NSString *_abnormType;
    UICollectionView *_myCollectionView;
    NSMutableArray *_dataSource;
    SFTaskTypeModel *_currentTypeModel;
}

@property(retain, nonatomic) SFTaskTypeModel *currentTypeModel; // @synthesize currentTypeModel=_currentTypeModel;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *myCollectionView; // @synthesize myCollectionView=_myCollectionView;
@property(nonatomic) int abnormalSelectType; // @synthesize abnormalSelectType=_abnormalSelectType;
@property(retain, nonatomic) NSString *abnormType; // @synthesize abnormType=_abnormType;
@property(nonatomic) __weak id <SFAbnormTypeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getDataSoureWithDischarge;
- (id)getDataSoureWithGPS;
- (id)getDataSoureWithTask;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)initViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
