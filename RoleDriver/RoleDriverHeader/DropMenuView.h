//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView;
@protocol DropMenuDataSource, DropMenuDelegate;

@interface DropMenuView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _show;
    UILabel *_titleLabel;
    UIImageView *_transformImageView;
    id <DropMenuDataSource> _dataSource;
    id <DropMenuDelegate> _delegate;
    double _height;
    UIView *_backGroundView;
    UITableView *_tableView;
    NSMutableArray *_menuArray;
    NSMutableArray *_selectArr;
    UIView *_bottomBtnView;
    UIView *_lineView;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    struct CGPoint _origin;
}

@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *bottomBtnView; // @synthesize bottomBtnView=_bottomBtnView;
@property(retain, nonatomic) NSMutableArray *selectArr; // @synthesize selectArr=_selectArr;
@property(retain, nonatomic) NSMutableArray *menuArray; // @synthesize menuArray=_menuArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(nonatomic) __weak id <DropMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DropMenuDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UIImageView *transformImageView; // @synthesize transformImageView=_transformImageView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setBottomBtnSateType;
- (void)emptySelectClick;
- (void)initSelectCell:(id)arg1;
- (void)allSelectClick;
- (id)changeSelectLeftBtnTitle:(id)arg1;
- (void)rightBtnAction:(id)arg1;
- (void)leftBtnAction:(id)arg1;
- (void)backgroundTapped;
- (void)hiddenBackgroundTapped;
- (void)menuTappedWithSuperView:(id)arg1 selectArr:(id)arg2;
- (void)reloadData;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithOrigin:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

