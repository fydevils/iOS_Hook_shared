//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SFLinePointView, SFToCLineModel, UIButton, UIImageView, UILabel, UIView;

@interface SFBidPackageLineCell : UITableViewCell
{
    _Bool _showArrow;
    SFToCLineModel *_lineModel;
    UIView *_bgView;
    SFLinePointView *_lineView;
    UILabel *_priceLabel;
    UILabel *_planRunTimeLabel;
    UIButton *_planRouteMapBtn;
    UIImageView *_arrawV;
}

@property(retain, nonatomic) UIImageView *arrawV; // @synthesize arrawV=_arrawV;
@property(retain, nonatomic) UIButton *planRouteMapBtn; // @synthesize planRouteMapBtn=_planRouteMapBtn;
@property(retain, nonatomic) UILabel *planRunTimeLabel; // @synthesize planRunTimeLabel=_planRunTimeLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) SFLinePointView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool showArrow; // @synthesize showArrow=_showArrow;
@property(retain, nonatomic) SFToCLineModel *lineModel; // @synthesize lineModel=_lineModel;
- (void).cxx_destruct;
- (void)planRouteMapBtnAction;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
