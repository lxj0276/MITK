#ifndef MITK_THRESHOLDCOMPONENT_H
#define MITK_THRESHOLDCOMPONENT_H

#include "QmitkFunctionalityComponentContainer.h"

/*=========================================================================
 
Program:   Medical Imaging & Interaction Toolkit
Module:    $RCSfile$
Language:  C++
Date:      $Date$
Version:   $Revision$
 
Copyright (c) German Cancer Research Center, Division of Medical and
Biological Informatics. All rights reserved.
See MITKCopyright.txt or http://www.mitk.org/copyright.html for details.
 
This software is distributed WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the above copyright notices for more information.
 
=========================================================================*/

/**
 * \brief ComponentClass to find an adequate threshold for a selected image
 * \ingroup QmitkFunctionalityComponent
 * 
 * This class inherits from
 * - \ref QmitkFunctionalityComponentContainer

 * 
 * \section QmitkThresholdComponent Overview
 * 
 * The ThresholdComponent is a class to easy find an adequate threshold. On two ways the user can insert 
 * a possible threshold: as a number in a textfield or by moving a scrollbar. The selected threshold will 
 * be shown on the image as an new binary layer that contains those areas above the theshold.
 * Like all other componentes the QmitkThresholdComponent inherits from QmitkFunctionalityComponentContainer.
 * 
 */


class QmitkThresholdComponent : public QmitkFunctionalityComponentContainer
{

  Q_OBJECT
   
  public:

     /** \brief Constructor. */
    QmitkThresholdComponent( );

     /** \brief Destructor. */
    ~QmitkThresholdComponent();


    virtual QString GetFunctionalityName();
    void SetFunctionalityName(QString name);
    virtual QAction * CreateAction(QActionGroup* m_FunctionalityComponentActionGroup);
    virtual QWidget * CreateMainWidget(QWidgetStack* m_MainStack);
    virtual QWidget * CreateControlWidget(QWidgetStack* m_ControlStack);
    virtual void CreateConnections();
    virtual QString GetFunctionalityComponentName();
    virtual void Activated();




  protected:
    QString m_Name;

  private:



};

#endif

