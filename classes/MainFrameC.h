//
//  MainFrameC.h
//  iRuby
//
//  Created by xiaoguang huang on 12-3-18.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ListViewController.h"

@interface MainFrameC : ListViewController<UITableViewDelegate, UITableViewDataSource>
{

}

@property (nonatomic,retain)NSArray *top_lists ;

@end
