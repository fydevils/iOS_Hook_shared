//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SFLineDetailView, SFLinePointView, SFToCBidModel, SFToCBidRemarkView, UIButton, UILabel, UIView;

@interface SFNewBidDetailOneCell : UITableViewCell
{
    double _planRouteMapBtn_width;
    _Bool _barga;
    UIView *_bgView;
    SFLineDetailView *_lineDetailView;
    UILabel *_planRunTimeLabel;
    UIButton *_planRouteMapBtn;
    SFToCBidRemarkView *_remarkView;
    UIView *_linebgView;
    SFLinePointView *_lineView;
    SFToCBidModel *_model;
}

@property(nonatomic) _Bool barga; // @synthesize barga=_barga;
@property(retain, nonatomic) SFToCBidModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SFLinePointView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *linebgView; // @synthesize linebgView=_linebgView;
@property(retain, nonatomic) SFToCBidRemarkView *remarkView; // @synthesize remarkView=_remarkView;
@property(retain, nonatomic) UIButton *planRouteMapBtn; // @synthesize planRouteMapBtn=_planRouteMapBtn;
@property(retain, nonatomic) UILabel *planRunTimeLabel; // @synthesize planRunTimeLabel=_planRunTimeLabel;
@property(retain, nonatomic) SFLineDetailView *lineDetailView; // @synthesize lineDetailView=_lineDetailView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)planRouteMapBtnAction;
- (void)tapAction;
- (void)setBidModel:(id)arg1 isBargaStatus:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

