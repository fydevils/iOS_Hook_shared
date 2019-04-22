//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, SFLineDetailView, SFToCOrderInfoListView, SFToCOrderModel, UIView;

@interface SFToCOrderTaskCell : UITableViewCell
{
    SFToCOrderModel *_model;
    unsigned long long _type;
    UIView *_bgView;
    SFToCOrderInfoListView *_orderAttributeView;
    NSArray *_orderAttributeArray;
    UIView *_seperateLine;
    SFLineDetailView *_lineDetailView;
    NSArray *_linePointArray;
}

@property(retain, nonatomic) NSArray *linePointArray; // @synthesize linePointArray=_linePointArray;
@property(retain, nonatomic) SFLineDetailView *lineDetailView; // @synthesize lineDetailView=_lineDetailView;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) NSArray *orderAttributeArray; // @synthesize orderAttributeArray=_orderAttributeArray;
@property(retain, nonatomic) SFToCOrderInfoListView *orderAttributeView; // @synthesize orderAttributeView=_orderAttributeView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) SFToCOrderModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)setOldModel:(id)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
