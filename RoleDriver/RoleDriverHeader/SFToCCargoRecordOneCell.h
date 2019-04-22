//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSTimer, SFLinePointView, SFToCBidModel, SFToCBidRemarkView, UIButton, UIImageView, UILabel, UIView;

@interface SFToCCargoRecordOneCell : UITableViewCell
{
    NSTimer *_timer;
    SFToCBidModel *_model;
    double _cellHeight;
    unsigned long long _type;
    double _topIntervalSapce;
    CDUnknownBlockType _block;
    UIView *_bgView;
    NSArray *_orderAttributeArray;
    SFToCBidRemarkView *_remarkView;
    SFLinePointView *_lineView;
    UIView *_orderAvaliableView;
    UILabel *_orderAvaliableTimeTimeLabel;
    UILabel *_orderAvaliableTimeTitle;
    UIView *_orderBidView;
    UILabel *_orderMoneyLabel;
    UILabel *_orderMoneyTitleLabel;
    UIImageView *_orderProfitBgImgView;
    UILabel *_orderProfitLabel;
    UIView *_bargainView;
    UILabel *_bidMoneylabel;
    UILabel *_bargainTitlelabel;
    UILabel *_bargainMoneylabel;
    UIImageView *_statusIcon;
    UIView *_priceAdjustmentView;
    UIImageView *_priceTipIcon;
    UILabel *_priceTipLabel;
    UIView *_remindView;
    UILabel *_remindTitle;
    UILabel *_remindTime;
    UIButton *_remindMeBtn;
    UIButton *_cancelRemindMeBtn;
    UIImageView *_recommendBgImgV;
    UILabel *_recommendLabel;
    UIImageView *_financeLeaseImgV;
    UILabel *_financeLeaseLabel;
    UIImageView *_reNewImgView;
    UIImageView *_backTrackView;
    UIButton *_offerCenterBtn;
    UIButton *_offerLeftBtn;
    UIButton *_offerRightBtn;
    UILabel *_myOfferLabel;
}

@property(retain, nonatomic) UILabel *myOfferLabel; // @synthesize myOfferLabel=_myOfferLabel;
@property(retain, nonatomic) UIButton *offerRightBtn; // @synthesize offerRightBtn=_offerRightBtn;
@property(retain, nonatomic) UIButton *offerLeftBtn; // @synthesize offerLeftBtn=_offerLeftBtn;
@property(retain, nonatomic) UIButton *offerCenterBtn; // @synthesize offerCenterBtn=_offerCenterBtn;
@property(retain, nonatomic) UIImageView *backTrackView; // @synthesize backTrackView=_backTrackView;
@property(retain, nonatomic) UIImageView *reNewImgView; // @synthesize reNewImgView=_reNewImgView;
@property(retain, nonatomic) UILabel *financeLeaseLabel; // @synthesize financeLeaseLabel=_financeLeaseLabel;
@property(retain, nonatomic) UIImageView *financeLeaseImgV; // @synthesize financeLeaseImgV=_financeLeaseImgV;
@property(retain, nonatomic) UILabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) UIImageView *recommendBgImgV; // @synthesize recommendBgImgV=_recommendBgImgV;
@property(retain, nonatomic) UIButton *cancelRemindMeBtn; // @synthesize cancelRemindMeBtn=_cancelRemindMeBtn;
@property(retain, nonatomic) UIButton *remindMeBtn; // @synthesize remindMeBtn=_remindMeBtn;
@property(retain, nonatomic) UILabel *remindTime; // @synthesize remindTime=_remindTime;
@property(retain, nonatomic) UILabel *remindTitle; // @synthesize remindTitle=_remindTitle;
@property(retain, nonatomic) UIView *remindView; // @synthesize remindView=_remindView;
@property(retain, nonatomic) UILabel *priceTipLabel; // @synthesize priceTipLabel=_priceTipLabel;
@property(retain, nonatomic) UIImageView *priceTipIcon; // @synthesize priceTipIcon=_priceTipIcon;
@property(retain, nonatomic) UIView *priceAdjustmentView; // @synthesize priceAdjustmentView=_priceAdjustmentView;
@property(retain, nonatomic) UIImageView *statusIcon; // @synthesize statusIcon=_statusIcon;
@property(retain, nonatomic) UILabel *bargainMoneylabel; // @synthesize bargainMoneylabel=_bargainMoneylabel;
@property(retain, nonatomic) UILabel *bargainTitlelabel; // @synthesize bargainTitlelabel=_bargainTitlelabel;
@property(retain, nonatomic) UILabel *bidMoneylabel; // @synthesize bidMoneylabel=_bidMoneylabel;
@property(retain, nonatomic) UIView *bargainView; // @synthesize bargainView=_bargainView;
@property(retain, nonatomic) UILabel *orderProfitLabel; // @synthesize orderProfitLabel=_orderProfitLabel;
@property(retain, nonatomic) UIImageView *orderProfitBgImgView; // @synthesize orderProfitBgImgView=_orderProfitBgImgView;
@property(retain, nonatomic) UILabel *orderMoneyTitleLabel; // @synthesize orderMoneyTitleLabel=_orderMoneyTitleLabel;
@property(retain, nonatomic) UILabel *orderMoneyLabel; // @synthesize orderMoneyLabel=_orderMoneyLabel;
@property(retain, nonatomic) UIView *orderBidView; // @synthesize orderBidView=_orderBidView;
@property(retain, nonatomic) UILabel *orderAvaliableTimeTitle; // @synthesize orderAvaliableTimeTitle=_orderAvaliableTimeTitle;
@property(retain, nonatomic) UILabel *orderAvaliableTimeTimeLabel; // @synthesize orderAvaliableTimeTimeLabel=_orderAvaliableTimeTimeLabel;
@property(retain, nonatomic) UIView *orderAvaliableView; // @synthesize orderAvaliableView=_orderAvaliableView;
@property(retain, nonatomic) SFLinePointView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) SFToCBidRemarkView *remarkView; // @synthesize remarkView=_remarkView;
@property(retain, nonatomic) NSArray *orderAttributeArray; // @synthesize orderAttributeArray=_orderAttributeArray;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) double topIntervalSapce; // @synthesize topIntervalSapce=_topIntervalSapce;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) SFToCBidModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)remindAction;
- (void)cancelRemindAction;
- (void)offerRightButtonClick;
- (void)offerLeftButtonClick;
- (void)viewOrderDetail;
- (void)dealloc;
- (void)setupStatus:(long long)arg1;
- (void)bargaFail;
- (void)bargaCalibratWin;
- (void)bargaCalibratConfirm;
- (void)bargaCalibrat;
- (void)bargeLoss;
- (void)bargeQuoted;
- (void)setOfferModel:(id)arg1;
- (void)setTransactionForecastModel:(id)arg1;
- (void)setCargoRecordModel:(id)arg1;
- (void)transactionForecastLayoutSubviews;
- (void)cargoRecordLayoutSubviews;
- (void)myLayoutSubviews;
- (void)offerConstraints;
- (void)transactionForecastConstraints;
- (void)cargoRecordConstraints;
- (void)setupConstraints;
- (void)setupUI;
- (void)orderAvaliableTime;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 type:(unsigned long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

