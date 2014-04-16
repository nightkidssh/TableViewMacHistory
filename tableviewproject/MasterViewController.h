//
//  MasterViewController.h
//  tableviewproject
//
//  Created by nightkidssh on 4/15/14.
//  Copyright (c) 2014 WANG BOWEI. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
