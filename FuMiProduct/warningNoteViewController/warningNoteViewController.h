//
//  warningNoteViewController.h
//  FuMiProduct
//
//  Created by Monster on 14-7-21.
//  Copyright (c) 2014年 Monster. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "warningNoteModel.h"
#import "warningNoteDeviceInfoCell.h"
#import "warningNoteInfoCell.h"
#import "GlobalHeader.h"

@interface warningNoteViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
{
    warningNoteDeviceInfoCell* _deviceInfoCell;
    warningNoteInfoCell*_infoCell;
    NSLocale * _cnTime;
    
    NSMutableArray* _sizeArray;
}

@property(nonatomic, strong)warningNoteModel* warningNote;


@property (weak, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)backButtonTouch:(UIButton *)sender;

@end
